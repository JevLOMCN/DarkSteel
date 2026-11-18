// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 343

// KnownPakFiles'' @ 141071140

void __cdecl
`dynamic_initializer_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::
         KnownPakFiles__);
  return;
}

// KnownPakFilesAccessLock'' @ 141071160

void __cdecl
`dynamic_initializer_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock__
          (void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock,4000);
  atexit(`dynamic_atexit_destructor_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::
         KnownPakFilesAccessLock__);
  return;
}

// `dynamic_initializer_for_'AnalysisArtifactsName'' @ 141071190

void __cdecl FShaderStatTagNames::_dynamic_initializer_for__AnalysisArtifactsName__(void)

{
  ::FName::FName(&AnalysisArtifactsName,L"ShaderStatTags.AnalysisArtifacts");
  return;
}

// `dynamic_initializer_for_'CVarBreakOnPreprocessJob'' @ 1410711b0

void __cdecl _dynamic_initializer_for__CVarBreakOnPreprocessJob__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBreakOnPreprocessJob,L"r.ShaderCompiler.BreakOnPreprocessJob",
             &GBreakOnPreprocessJob,
             L"If specified, triggers a breakpoint when preprocessing a job whose name matches the given string (case-insensitive, substrings are supported)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBreakOnPreprocessJob__);
  return;
}

// `dynamic_initializer_for_'CVarDisambiguateShaderDebugDir'' @ 141071200

void __cdecl _dynamic_initializer_for__CVarDisambiguateShaderDebugDir__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDisambiguateShaderDebugDir,L"r.DisambiguateShaderDebugDir",local_res8,
             L"If true, appends a folder containing the full project path with directory separators/drive qualifiers replaced with _ to the root debug info folder.\nIntended for use in conjunction with r.OverrideShaderDebugDir to avoid shaderdebuginfo output clashing across workspaces/projects."
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarDisambiguateShaderDebugDir__);
  return;
}

// `dynamic_initializer_for_'CVarDumpDebugInfoForCacheHits'' @ 141071250

void __cdecl _dynamic_initializer_for__CVarDumpDebugInfoForCacheHits__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDumpDebugInfoForCacheHits,L"r.ShaderCompiler.DumpDebugInfoForCacheHits",local_res8
             ,
             L"If true, debug info (via IShaderFormat::OutputDebugData) will be output for all jobs including duplicates and cache/DDC hits. If false, only jobs that actually executed compilation will dump debug info."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpDebugInfoForCacheHits__);
  return;
}

// `dynamic_initializer_for_'CVarForceDebugViewModes'' @ 1410712a0

void __cdecl _dynamic_initializer_for__CVarForceDebugViewModes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceDebugViewModes,L"r.ForceDebugViewModes",local_res8,
             L"0: Setting has no effect.\n1: Forces debug view modes to be available, even on cooked builds.2: Forces debug view modes to be unavailable, even on editor builds.  Removes many shader permutations for faster shader iteration."
             ,0x24);
  atexit(_dynamic_atexit_destructor_for__CVarForceDebugViewModes__);
  return;
}

// `dynamic_initializer_for_'CVarShaderCodeLibraryPreloadShaderMaps'' @ 1410712f0

void __cdecl _dynamic_initializer_for__CVarShaderCodeLibraryPreloadShaderMaps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderCodeLibraryPreloadShaderMaps,L"r.ShaderCodeLibrary.PreloadShaderMaps",
             &GPreloadShaderMaps,
             L"If > 0, shader maps will be preloaded at package/resource load time.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderCodeLibraryPreloadShaderMaps__);
  return;
}

// `dynamic_initializer_for_'CVarShaderCodeLibrarySeparateLoadingCache'' @ 141071340

void __cdecl _dynamic_initializer_for__CVarShaderCodeLibrarySeparateLoadingCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderCodeLibrarySeparateLoadingCache,L"r.ShaderCodeLibrary.SeparateLoadingCache",
             &GShaderCodeLibrarySeparateLoadingCache,
             L"if > 0, each shader code library has it\'s own loading cache.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderCodeLibrarySeparateLoadingCache__);
  return;
}

// `dynamic_initializer_for_'CVarShaderDevelopmentMode'' @ 141071390

void __cdecl _dynamic_initializer_for__CVarShaderDevelopmentMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShaderDevelopmentMode,L"r.ShaderDevelopmentMode",local_res8,
             L"0: Default, 1: Enable various shader development utilities, such as the ability to retry on failed shader compile, and extra logging as shaders are compiled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderDevelopmentMode__);
  return;
}

// `dynamic_initializer_for_'CVarShaderLibraryProduceExtendedStats'' @ 1410713e0

void __cdecl
UE::ShaderLibrary::Private::_dynamic_initializer_for__CVarShaderLibraryProduceExtendedStats__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderLibraryProduceExtendedStats,L"r.ShaderLibrary.PrintExtendedStats",
             &GProduceExtendedStats,
             L"if != 0, shader library will produce extended stats, including the textual representation"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderLibraryProduceExtendedStats__);
  return;
}

// `dynamic_initializer_for_'CVarShaderMapResourceRef'' @ 141071430

void __cdecl _dynamic_initializer_for__CVarShaderMapResourceRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShaderMapResourceRef,L"r.ShaderCodeLibrary.ShaderMapResourceRef",
             &GShaderMapResourceRef,
             L"Track reference to the shader group for different shadermaps.\nNormally used when dynamic shader preloading is enable to make sure we dont unload a shader group shared by two different shadermaps"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderMapResourceRef__);
  return;
}

// `dynamic_initializer_for_'CVarShaderOverrideDebugDir'' @ 141071480

void __cdecl _dynamic_initializer_for__CVarShaderOverrideDebugDir__(void)

{
  FString local_18;
  
  FString::FString(&local_18,"");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarShaderOverrideDebugDir,L"r.OverrideShaderDebugDir",&local_18,
             L"Override output location of shader debug files\nEmpty: use default location Saved\\ShaderDebugInfo.\n"
             ,4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarShaderOverrideDebugDir__);
  return;
}

// `dynamic_initializer_for_'CVarShaderWarningsFilter'' @ 1410714f0

void __cdecl _dynamic_initializer_for__CVarShaderWarningsFilter__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShaderWarningsFilter,L"r.ShaderCompilerWarningsFilter",local_res8,
             L"Additional filtering for shader warnings; 2=show all, 1=show global shader warnings only, 0=show no shader warnings."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShaderWarningsFilter__);
  return;
}

// `dynamic_initializer_for_'CVarShadersPropagateLocalWorkerOOMs'' @ 141071540

void __cdecl _dynamic_initializer_for__CVarShadersPropagateLocalWorkerOOMs__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShadersPropagateLocalWorkerOOMs,L"r.Shaders.PropagateLocalWorkerOOMs",local_res8,
             L"When set, out-of-memory conditions in a local shader compile worker will be treated as regular out-of-memory conditions and propagated to the main process.\nThis is useful when running in environment with hard memory limits, where it does not matter which process in particular caused us to violate the memory limit."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShadersPropagateLocalWorkerOOMs__);
  return;
}

// `dynamic_initializer_for_'CVarShowShaderWarnings'' @ 141071590

void __cdecl _dynamic_initializer_for__CVarShowShaderWarnings__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarShowShaderWarnings,L"r.ShowShaderCompilerWarnings",local_res8,
             L"When set to 1, will display all warnings. Note that this flag is ignored if r.ShaderDevelopmentMode=1 (in dev mode warnings are shown by default)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShowShaderWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarUploadShaderDebugArtifactsRef'' @ 1410715e0

void __cdecl _dynamic_initializer_for__CVarUploadShaderDebugArtifactsRef__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUploadShaderDebugArtifactsRef,L"r.ShaderCodeLibrary.UploadArtifacts",
             &GUploadShaderDebugArtifacts,
             L"If true, uploads artifacts that were dumped to the Saved/Shaders/ folder when running on a build machine"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUploadShaderDebugArtifactsRef__);
  return;
}

// `dynamic_initializer_for_'GBreakOnPreprocessJob'' @ 141071630

void __cdecl _dynamic_initializer_for__GBreakOnPreprocessJob__(void)

{
  atexit(_dynamic_atexit_destructor_for__GBreakOnPreprocessJob__);
  return;
}

// `dynamic_initializer_for_'GListShaderLibrariesCmd'' @ 141071650

void __cdecl _dynamic_initializer_for__GListShaderLibrariesCmd__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____AEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_5>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x88))
                     (IConsoleManager::Singleton,L"ListShaderLibraries",
                      L"Spits out a csv table containing stats of all shader libraries",&local_58,0)
  ;
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GListShaderLibrariesCmd,pIVar5);
  GListShaderLibrariesCmd._0_8_ = &___7FAutoConsoleCommandWithArgsAndOutputDevice__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__GListShaderLibrariesCmd__);
  return;
}

// `dynamic_initializer_for_'GSCWErrorCodeInfo'' @ 1410717f0

void __cdecl _dynamic_initializer_for__GSCWErrorCodeInfo__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSCWErrorCodeInfo__);
  return;
}

// `dynamic_initializer_for_'GShaderFileCache'' @ 141071810

void __cdecl _dynamic_initializer_for__GShaderFileCache__(void)

{
  atexit(_dynamic_atexit_destructor_for__GShaderFileCache__);
  return;
}

// `dynamic_initializer_for_'GShaderFileHashCalculationGuard'' @ 141071830

void __cdecl _dynamic_initializer_for__GShaderFileHashCalculationGuard__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard,4000);
  atexit(_dynamic_atexit_destructor_for__GShaderFileHashCalculationGuard__);
  return;
}

// `dynamic_initializer_for_'GShaderHashAccessRWLock'' @ 141071860

void __cdecl _dynamic_initializer_for__GShaderHashAccessRWLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__GShaderHashAccessRWLock__);
  return;
}

// `dynamic_initializer_for_'GShaderHashCache'' @ 141071880

void __cdecl _dynamic_initializer_for__GShaderHashCache__(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x9b;
  lVar1 = 0x155190fdc;
  do {
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(lVar1 + 0x2c) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0x80;
    *(undefined4 *)(lVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x44) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0;
    lVar1 = lVar1 + 0x60;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  GShaderHashCache.bInitialized = false;
  atexit(_dynamic_atexit_destructor_for__GShaderHashCache__);
  return;
}

// `dynamic_initializer_for_'GShaderSourceDirectoryMappings'' @ 1410718f0

void __cdecl _dynamic_initializer_for__GShaderSourceDirectoryMappings__(void)

{
  atexit(_dynamic_atexit_destructor_for__GShaderSourceDirectoryMappings__);
  return;
}

// `dynamic_initializer_for_'GShaderSourceSharedVirtualDirectories'' @ 141071910

void __cdecl _dynamic_initializer_for__GShaderSourceSharedVirtualDirectories__(void)

{
  FString local_18;
  
  FString::FString(&local_18,L"/Engine/Shared/");
  GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  GShaderSourceSharedVirtualDirectories.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&GShaderSourceSharedVirtualDirectories.AllocatorInstance,1,
             &GShaderSourceSharedVirtualDirectories.ArrayMax);
  ConstructItems<FString,FString,int>
            (GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data,&local_18,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__GShaderSourceSharedVirtualDirectories__);
  return;
}

// `dynamic_initializer_for_'LogShaderLibrary'' @ 1410719b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogShaderLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogShaderLibrary,L"LogShaderLibrary",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogShaderLibrary__);
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_150_ES31'' @ 1410719f0

void __cdecl _dynamic_initializer_for__NAME_GLSL_150_ES31__(void)

{
  FName::FName(&NAME_GLSL_150_ES31,L"GLSL_150_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_GLSL_ES3_1_ANDROID'' @ 141071a10

void __cdecl _dynamic_initializer_for__NAME_GLSL_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_GLSL_ES3_1_ANDROID,L"GLSL_ES3_1_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_ES3_1'' @ 141071a30

void __cdecl _dynamic_initializer_for__NAME_PCD3D_ES3_1__(void)

{
  FName::FName(&NAME_PCD3D_ES3_1,L"PCD3D_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM5'' @ 141071a50

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM5__(void)

{
  FName::FName(&NAME_PCD3D_SM5,L"PCD3D_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_PCD3D_SM6'' @ 141071a70

void __cdecl _dynamic_initializer_for__NAME_PCD3D_SM6__(void)

{
  FName::FName(&NAME_PCD3D_SM6,L"PCD3D_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1'' @ 141071a90

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1,L"SF_METAL_ES3_1");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS'' @ 141071ab0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS,L"SF_METAL_ES3_1_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_IOS_DEPRECATED'' @ 141071ad0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_IOS_DEPRECATED,L"SF_METAL");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS'' @ 141071af0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS,L"SF_METAL_ES3_1_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_ES3_1_TVOS_DEPRECATED'' @ 141071b10

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_ES3_1_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_ES3_1_TVOS_DEPRECATED,L"SF_METAL_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_MRT_MAC_DEPRECATED'' @ 141071b30

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_MRT_MAC_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_MRT_MAC_DEPRECATED,L"SF_METAL_MRT_MAC");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SIM'' @ 141071b50

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SIM__(void)

{
  FName::FName(&NAME_SF_METAL_SIM,L"SF_METAL_SIM");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5'' @ 141071b70

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5__(void)

{
  FName::FName(&NAME_SF_METAL_SM5,L"SF_METAL_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS'' @ 141071b90

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS,L"SF_METAL_SM5_IOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_IOS_DEPRECATED'' @ 141071bb0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_IOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_IOS_DEPRECATED,L"SF_METAL_MRT");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS'' @ 141071bd0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS,L"SF_METAL_SM5_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM5_TVOS_DEPRECATED'' @ 141071bf0

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM5_TVOS_DEPRECATED__(void)

{
  FName::FName(&NAME_SF_METAL_SM5_TVOS_DEPRECATED,L"SF_METAL_MRT_TVOS");
  return;
}

// `dynamic_initializer_for_'NAME_SF_METAL_SM6'' @ 141071c10

void __cdecl _dynamic_initializer_for__NAME_SF_METAL_SM6__(void)

{
  FName::FName(&NAME_SF_METAL_SM6,L"SF_METAL_SM6");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1'' @ 141071c30

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1,L"SF_VULKAN_ES31");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_ES3_1_ANDROID'' @ 141071c50

void __cdecl _dynamic_initializer_for__NAME_VULKAN_ES3_1_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_ES3_1_ANDROID,L"SF_VULKAN_ES31_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5'' @ 141071c70

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5__(void)

{
  FName::FName(&NAME_VULKAN_SM5,L"SF_VULKAN_SM5");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM5_ANDROID'' @ 141071c90

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM5_ANDROID__(void)

{
  FName::FName(&NAME_VULKAN_SM5_ANDROID,L"SF_VULKAN_SM5_ANDROID");
  return;
}

// `dynamic_initializer_for_'NAME_VULKAN_SM6'' @ 141071cb0

void __cdecl _dynamic_initializer_for__NAME_VULKAN_SM6__(void)

{
  FName::FName(&NAME_VULKAN_SM6,L"SF_VULKAN_SM6");
  return;
}

// `dynamic_initializer_for_'OnSharedShaderCodeRequest'' @ 141071cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl _dynamic_initializer_for__OnSharedShaderCodeRequest__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&OnSharedShaderCodeRequest,4000);
  OnSharedShaderCodeRequest._48_8_ = ___xmm_00000000000000020000000000000000;
  OnSharedShaderCodeRequest._56_8_ = _UNK_150631d48;
  OnSharedShaderCodeRequest._40_8_ = 0;
  atexit(_dynamic_atexit_destructor_for__OnSharedShaderCodeRequest__);
  return;
}

// `dynamic_initializer_for_'OnSharedShaderMapResourceExplicitRelease'' @ 141071d20

void __cdecl _dynamic_initializer_for__OnSharedShaderMapResourceExplicitRelease__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnSharedShaderMapResourceExplicitRelease__);
  return;
}

// `dynamic_initializer_for_'PipelineExtension'' @ 141071d40

void __cdecl _dynamic_initializer_for__PipelineExtension__(void)

{
  FString::FString(&PipelineExtension,L".ushaderpipelines");
  atexit(_dynamic_atexit_destructor_for__PipelineExtension__);
  return;
}

// `dynamic_initializer_for_'PluginsToIgnoreOnMount'' @ 141071d70

void __cdecl UE::ShaderLibrary::Private::_dynamic_initializer_for__PluginsToIgnoreOnMount__(void)

{
  atexit(_dynamic_atexit_destructor_for__PluginsToIgnoreOnMount__);
  return;
}

// `dynamic_initializer_for_'ShaderArchivePatternStr'' @ 141071d90

void __cdecl _dynamic_initializer_for__ShaderArchivePatternStr__(void)

{
  FString::FString(&ShaderArchivePatternStr,
                   L"^ShaderArchive\\-(\\w*)\\-([\\w\\-]*)\\.ushaderbytecode$");
  atexit(_dynamic_atexit_destructor_for__ShaderArchivePatternStr__);
  return;
}

// `dynamic_initializer_for_'ShaderAssetInfoExtension'' @ 141071dc0

void __cdecl _dynamic_initializer_for__ShaderAssetInfoExtension__(void)

{
  FString::FString(&ShaderAssetInfoExtension,L".assetinfo.json");
  atexit(_dynamic_atexit_destructor_for__ShaderAssetInfoExtension__);
  return;
}

// `dynamic_initializer_for_'ShaderCodePatternStr'' @ 141071df0

void __cdecl _dynamic_initializer_for__ShaderCodePatternStr__(void)

{
  FString::FString(&ShaderCodePatternStr,L"^ShaderCode\\-(\\w*)\\-([\\w\\-]*)\\.ushaderbytecode$");
  atexit(_dynamic_atexit_destructor_for__ShaderCodePatternStr__);
  return;
}

// `dynamic_initializer_for_'ShaderExtension'' @ 141071e20

void __cdecl _dynamic_initializer_for__ShaderExtension__(void)

{
  FString::FString(&ShaderExtension,L".ushaderbytecode");
  atexit(_dynamic_atexit_destructor_for__ShaderExtension__);
  return;
}

// `dynamic_initializer_for_'ShaderTypeInfoExtension'' @ 141071e50

void __cdecl _dynamic_initializer_for__ShaderTypeInfoExtension__(void)

{
  FString::FString(&ShaderTypeInfoExtension,L".stinfo");
  atexit(_dynamic_atexit_destructor_for__ShaderTypeInfoExtension__);
  return;
}

// `dynamic_initializer_for_'StableExtension'' @ 141071e80

void __cdecl _dynamic_initializer_for__StableExtension__(void)

{
  FString::FString(&StableExtension,L".shk");
  atexit(_dynamic_atexit_destructor_for__StableExtension__);
  return;
}

// `dynamic_initializer_for_'StableInfoPatternStr'' @ 141071eb0

void __cdecl _dynamic_initializer_for__StableInfoPatternStr__(void)

{
  FString::FString(&StableInfoPatternStr,L"^ShaderStableInfo\\-(\\w*)\\-([\\w\\-]*)\\.shk$");
  atexit(_dynamic_atexit_destructor_for__StableInfoPatternStr__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_DDCLoading'' @ 141071ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_DDCLoading__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_DDCLoading ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_DDCLoading>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_DDCLoading");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_DDCLoading,*pFVar1,
               L"DDC Loading","STATGROUP_ShaderCompiling","STATCAT_Advanced",L"Shader Compiling",
               true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_GlobalShaders'' @ 141071f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_GlobalShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_GlobalShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_GlobalShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_GlobalShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_GlobalShaders,*pFVar1,
               L"Total Global Shader Compiling Time","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_HLSLTranslation'' @ 141072000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_HLSLTranslation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_HLSLTranslation ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_HLSLTranslation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_HLSLTranslation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_HLSLTranslation,*pFVar1,
               L"HLSL Translation","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_HashingShaderFiles'' @ 141072090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_HashingShaderFiles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_HashingShaderFiles ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_HashingShaderFiles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_HashingShaderFiles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_HashingShaderFiles,*pFVar1
               ,L"CRCing Shader Files","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_LoadingShaderFiles'' @ 141072120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_LoadingShaderFiles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_LoadingShaderFiles ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_LoadingShaderFiles>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_LoadingShaderFiles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_LoadingShaderFiles,*pFVar1
               ,L"Loading Shader Files","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_MaterialCompiling'' @ 1410721b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_MaterialCompiling__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_MaterialCompiling ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialCompiling>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_MaterialCompiling");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_MaterialCompiling,*pFVar1,
               L"Material Compiling","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_MaterialLoading'' @ 141072240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_MaterialLoading__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_MaterialLoading ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialLoading>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_MaterialLoading");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_MaterialLoading,*pFVar1,
               L"Material Loading","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_MaterialShaders'' @ 1410722d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_MaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_MaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_MaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_MaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_MaterialShaders,*pFVar1,
               L"Total Material Shader Compiling Time","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NiagaraShaders'' @ 141072360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NiagaraShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NiagaraShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NiagaraShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NiagaraShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NiagaraShaders,*pFVar1,
               L"Total Niagara Shader Compiling Time","STATGROUP_ShaderCompiling","STATCAT_Advanced"
               ,L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders'' @ 1410723f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumLitMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumLitMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumLitMaterialShaders,
               *pFVar1,L"Num Lit Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders'' @ 141072480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumMaskedMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumMaskedMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumMaskedMaterialShaders,
               *pFVar1,L"Num Masked Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced"
               ,L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders'' @ 141072510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumOpaqueMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumOpaqueMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumOpaqueMaterialShaders,
               *pFVar1,L"Num Opaque Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced"
               ,L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders'' @ 1410725a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumParticleMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumParticleMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumParticleMaterialShaders
               ,*pFVar1,L"Num Particle Material Shaders","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders'' @ 141072630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSkinnedMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumSkinnedMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumSkinnedMaterialShaders,
               *pFVar1,L"Num Skinned Material Shaders","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders'' @ 1410726c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumSpecialMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumSpecialMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumSpecialMaterialShaders,
               *pFVar1,L"Num Special Material Shaders","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders'' @ 141072750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumTotalMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumTotalMaterialShaders,
               *pFVar1,L"Num Total Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumTotalNiagaraShaders'' @ 1410727e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumTotalNiagaraShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumTotalNiagaraShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalNiagaraShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumTotalNiagaraShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumTotalNiagaraShaders,
               *pFVar1,L"Num Total Niagara Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders'' @ 141072870

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTotalOpenColorIOShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumTotalOpenColorIOShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumTotalOpenColorIOShaders
               ,*pFVar1,L"Num Total OpenColorIO Shaders","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders'' @ 141072900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumTransparentMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumTransparentMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ShaderCompiling_NumTransparentMaterialShaders,*pFVar1,
               L"Num Transparent Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders'' @ 141072990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_NumUnlitMaterialShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_NumUnlitMaterialShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_NumUnlitMaterialShaders,
               *pFVar1,L"Num Unlit Material Shaders","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_OpenColorIOShaders'' @ 141072a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_OpenColorIOShaders__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_OpenColorIOShaders ==
      (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_OpenColorIOShaders>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_OpenColorIOShaders");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_OpenColorIOShaders,*pFVar1
               ,L"Total OpenColorIO Shader Compiling Time","STATGROUP_ShaderCompiling",
               "STATCAT_Advanced",L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ShaderCompiling_RHI'' @ 141072ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ShaderCompiling_RHI__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ShaderCompiling_RHI == (FThreadSafeStaticStat<FStat_STAT_ShaderCompiling_RHI>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_ShaderCompiling_RHI");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ShaderCompiling_RHI,*pFVar1,
               L"RHI Compile Time","STATGROUP_ShaderCompiling","STATCAT_Advanced",
               L"Shader Compiling",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_NumShaderMaps'' @ 141072b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_NumShaderMaps__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_NumShaderMaps ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_NumShaderMaps");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar1,
               L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression"
               ,true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering'' @ 141072bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMapsUsedForRendering>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_NumShaderMapsUsedForRendering");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMapsUsedForRendering,
               *pFVar1,L"Num ShaderMaps Used","STATGROUP_Shaders","STATCAT_Advanced",
               L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_NumShadersCreated'' @ 141072c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_NumShadersCreated__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_NumShadersCreated ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_NumShadersCreated");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersCreated,*pFVar1,
               L"Num Shaders Created","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_NumShadersLoaded'' @ 141072cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_NumShadersLoaded__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_NumShadersLoaded ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_NumShadersLoaded");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,*pFVar1,
               L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",
               true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_RTShaderLoadTime'' @ 141072d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_RTShaderLoadTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_RTShaderLoadTime ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_RTShaderLoadTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_RTShaderLoadTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_RTShaderLoadTime,*pFVar1,
               L"RT Shader Load Time","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_ShaderMemory'' @ 141072e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_ShaderMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_ShaderMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_ShaderMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,*pFVar1,
               L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_ShaderPreloadMemory'' @ 141072ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_ShaderPreloadMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_ShaderPreloadMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderPreloadMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_ShaderPreloadMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderPreloadMemory,*pFVar1,
               L"Shader Preload Mem","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Shaders_ShaderResourceMemory'' @ 141072f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Shaders_ShaderResourceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Shaders_ShaderResourceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderResourceMemory,*pFVar1,
               L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",L"Shader Compression",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'UE_SHADER_CACHE_VERSION'' @ 141072fc0

void __cdecl _dynamic_initializer_for__UE_SHADER_CACHE_VERSION__(void)

{
  bool bVar1;
  FString local_18;
  
  FString::FString(&local_18,"B04528D6-1A2C-44C8-A742-E7D497D3562C");
  bVar1 = FGuid::Parse(&local_18,&UE_SHADER_CACHE_VERSION);
  if (!bVar1) {
    UE_SHADER_CACHE_VERSION.C = 0;
    UE_SHADER_CACHE_VERSION.D = 0;
    UE_SHADER_CACHE_VERSION.A = 0;
    UE_SHADER_CACHE_VERSION.B = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_Shaders'' @ 141073020

void __cdecl _dynamic_initializer_for___GCsvCategory_Shaders__(void)

{
  FString::operator=(&_GCsvCategory_Shaders.Name,L"Shaders");
  _GCsvCategory_Shaders.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_Shaders.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_Shaders__);
  return;
}

// <lambda_invoker_cdecl> @ 145e38770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
<lambda_5>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FOutputDevice *param_2)

{
  FShaderLibrariesCollection *this;
  <lambda_1> local_res10 [3];
  
  this = FShaderLibrariesCollection::Impl;
  local_res10[0].Out = param_2;
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    FOutputDevice::Log(param_2,
                       L"ShaderLibraryName,LogicalName,OwnerName,Id,NumShaders,NumShaderMaps,LibrarySizeKb,RHILibrarySizeKb,ShaderMapsSizeKb"
                      );
    FShaderLibrariesCollection::
    IterateNamedShaderLibrariesSafe<_<lambda_5>::operator()_::__l2::<lambda_1>_&>(this,local_res10);
    return;
  }
  if (2 < (byte)LogShaderLibrary._0_1_) {
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_ShaderLibraries_151159a60,
               (FLogCategoryBase *)&LogShaderLibrary);
    return;
  }
  return;
}

// operator<<<unsigned_int,unsigned_char> @ 145e38870

FArchive * __cdecl
operator<<<unsigned_int,unsigned_char>
          (FArchive *param_1,TTuple<unsigned_int,unsigned_char> *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->field_0x4 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x4,1);
  return param_1;
}

// operator<<<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator> @ 145e38920

FArchive * __cdecl
operator<<<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
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
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145e3eaae;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_145e3eaae:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145e3eb8b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_145e3eb8b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator> @ 145e38930

FArchive * __cdecl
operator<<<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145e3ed4e;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145e3ed4e:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145e3ee2b;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145e3ee2b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x10) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator> @ 145e38940

FArchive * __cdecl
operator<<<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145e3f00c;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145e3f00c:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145e3f0e7;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145e3f0e7:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator> @ 145e38950

FArchive * __cdecl
operator<<<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145e3f2dc;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145e3f2dc:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145e3f3b7;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145e3f3b7:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x40);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x3c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 7) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator> @ 145e38960

FArchive * __cdecl
operator<<<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
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
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_145e3f5ac;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_145e3f5ac:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_145e3f687;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_145e3f687:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x30);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x2c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FGenericShaderStat,TSizedDefaultAllocator<32>_> @ 145e38970

FArchive * __cdecl
operator<<<FGenericShaderStat,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGenericShaderStat,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FGenericShaderStat *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar10 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FGenericShaderStat,int>
                ((FGenericShaderStat *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FGenericShaderStat::StreamArchive
                        ((FGenericShaderStat *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FGenericShaderStat,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FGenericShaderStat *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
              DefaultConstructItems<FGenericShaderStat,int>(this,1);
              FGenericShaderStat::StreamArchive(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<FShaderCompilerError,TSizedDefaultAllocator<32>_> @ 145e38980

FArchive * __cdecl
operator<<<FShaderCompilerError,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FShaderCompilerError *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x50);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FShaderCompilerError,int>
                ((FShaderCompilerError *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x33334)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FShaderCompilerError *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x50));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x850,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FShaderCompilerError *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x50);
              DefaultConstructItems<FShaderCompilerError,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
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

// operator<<<FUniformResourceEntry,TSizedDefaultAllocator<32>_> @ 145e38990

FArchive * __cdecl
operator<<<FUniformResourceEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FUniformResourceEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FUniformResourceEntry *pFVar10;
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
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FUniformResourceEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FUniformResourceEntry,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FUniformResourceEntry *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FUniformResourceEntry,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
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

// operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145e389a0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned_int,unsigned_char> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned_int,unsigned_char> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
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
        goto LAB_145e38c8c;
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
LAB_145e38c8c:
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
        operator<<<unsigned_int,unsigned_char>
                  (param_1,(TTuple<unsigned_int,unsigned_char> *)
                           ((longlong)local_50.CurrentBitIndex * 0x10 + *(longlong *)local_58));
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
                (0x10,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
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
    pTVar12 = (TTuple<unsigned_int,unsigned_char> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<unsigned_int,unsigned_char> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned_int,unsigned_char> *)0x0) {
          *(undefined4 *)local_78.Pointer = 0;
          *(undefined1 *)((longlong)local_78.Pointer + 4) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned_int,unsigned_char>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned_int,unsigned_char> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145e38d00

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<FName,unsigned_int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<FName,unsigned_int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
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
        goto LAB_145e38ffc;
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
LAB_145e38ffc:
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
        operator<<<FName,unsigned_int>
                  (param_1,(TTuple<FName,unsigned_int> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
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
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
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
    pTVar12 = (TTuple<FName,unsigned_int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<FName,unsigned_int> *)0x0;
        if (local_78.Pointer != (TTuple<FName,unsigned_int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xc) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<FName,unsigned_int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FName,unsigned_int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145e39070

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FString *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145e3938c;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_145e3938c:
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
        pFVar8 = (FString *)((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        operator<<(param_1,(FParameterAllocation *)(pFVar8 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FString *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          *(undefined4 *)
           ((longlong)
            &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data + 2) =
               0;
          *(undefined2 *)
           ((longlong)
            &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data + 6) =
               8;
          (((FString *)((longlong)local_78.Pointer + 0x10))->Data).ArrayNum = -1;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<(param_1,(FParameterAllocation *)(pFVar11 + 1));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145e39410

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,FUniformBufferEntry> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FString,FUniformBufferEntry> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 6,(longlong)*(int *)&param_2->field_0xc << 6);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145e3972c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_145e3972c:
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
        operator<<<FString,FUniformBufferEntry>
                  (param_1,(TTuple<FString,FUniformBufferEntry> *)
                           ((longlong)local_50.CurrentBitIndex * 0x40 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,FUniformBufferEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FString,FUniformBufferEntry> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x40 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x40 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FString,FUniformBufferEntry> *)0x0;
        if (local_78.Pointer != (TTuple<FString,FUniformBufferEntry> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined2 *)((longlong)local_78.Pointer + 0x34) = 1;
          *(undefined4 *)((longlong)local_78.Pointer + 0x38) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FString,FUniformBufferEntry>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FString,FUniformBufferEntry> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 145e397a0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FString *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FString *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x30,(longlong)*(int *)&param_2->field_0xc * 0x30);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_145e39abc;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_145e39abc:
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
        pFVar8 = (FString *)((longlong)local_50.CurrentBitIndex * 0x30 + *(longlong *)local_58);
        operator<<(param_1,pFVar8);
        operator<<<bool,float,int,unsigned_int,FString>
                  (param_1,(TVariant<bool,float,int,unsigned_int,FString> *)(pFVar8 + 1));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FString *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x30,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x30);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x30) = 0xffffffff;
          }
        }
        TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FString *)0x0;
        if (local_78.Pointer != (FString *)0x0) {
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          ((local_78.Pointer)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (local_78.Pointer)->ArrayNum = 0;
          (local_78.Pointer)->ArrayMax = 0;
          *(undefined1 *)
           &(((FString *)((longlong)local_78.Pointer + 0x10))->Data).AllocatorInstance.Data = 0;
          *(undefined1 *)
           &(((FString *)((longlong)local_78.Pointer + 0x20))->Data).AllocatorInstance.Data = 0;
          (((FString *)((longlong)local_78.Pointer + 0x20))->Data).ArrayNum = -1;
          pFVar11 = local_78.Pointer;
        }
        operator<<(param_1,pFVar11);
        operator<<<bool,float,int,unsigned_int,FString>
                  (param_1,(TVariant<bool,float,int,unsigned_int,FString> *)(pFVar11 + 1));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FString *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FString,FUniformBufferEntry> @ 145e39b40

FArchive * __cdecl
operator<<<FString,FUniformBufferEntry>
          (FArchive *param_1,TTuple<FString,FUniformBufferEntry> *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  TRawPtrProxy<TArray<wchar_t,TSizedDefaultAllocator<32>_>_> local_res8;
  
  operator<<(param_1,(FString *)param_2);
  operator<<(param_1,(FString *)&param_2->field_0x10);
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar3 = operator_new(0x10);
    local_res8.Object = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar3 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar3->ArrayNum = 0;
      pTVar3->ArrayMax = 0;
      local_res8.Object = pTVar3;
    }
    TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1>::
    operator=<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>
              ((TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1> *)&param_2->field_0x20,
               &local_res8);
  }
  TArrayPrivateFriend::Serialize<wchar_t,TSizedDefaultAllocator<32>_>
            (param_1,*(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)&param_2->field_0x20);
  puVar2 = &param_2->field_0x30;
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar2);
    }
  }
  else {
    *(undefined4 *)puVar2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x34,1);
  }
  else {
    param_2->field_0x34 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x35,1);
    return param_1;
  }
  param_2->field_0x35 = *puVar2;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  return param_1;
}

// operator<<<bool,float,int,unsigned_int,FString> @ 145e39c90

FArchive * __cdecl
operator<<<bool,float,int,unsigned_int,FString>
          (FArchive *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  ulonglong uVar5;
  byte local_res8 [16];
  uchar local_res18 [8];
  <lambda_1> local_res20;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res18[0] = param_2->TypeIndex;
    if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
    }
    else {
      local_res18[0] = *(uchar *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    local_res20.Ar = param_1;
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>,0,1,2,3,4,0,TVariant<bool,float,int,unsigned_int,class_FString>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'
      ::__l2::Invokers[param_2->TypeIndex])(&local_res20,param_2);
    return param_1;
  }
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (4 < local_res8[0]) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Index < sizeof...(Ts)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x12a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FArchive *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar5 = (ulonglong)local_res8[0];
  if (4 < uVar5) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Loaders)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FArchive *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TVariantLoadFromArchiveLookup<bool,float,int,unsigned_int,FString>::Load(unsigned___int64,FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'
              ::__l2::Loaders)[uVar5])(param_1,param_2);
  return param_1;
}

// operator<<<wchar_t,TSizedDefaultAllocator<32>_> @ 145e39dd0

FArchive * __cdecl
operator<<<wchar_t,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<wchar_t,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 2,(longlong)param_2->ArrayMax * 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
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
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x800001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,`TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::Remove'::__l2::<lambda_1>_> @ 145e3a9c0

int __thiscall
TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
::
Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::Remove_::__l2::<lambda_1>_>
          (TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
           *this,FString *param_1,<lambda_1> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  FBucket *SRWLock;
  
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
  SRWLock = this->Buckets + uVar6 % 0x1f;
  if ((SRWLock == (FBucket *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  puVar3 = *(undefined8 **)param_2;
  iVar7 = 0;
  if (*(int *)&(SRWLock->Map).field_0x8 != *(int *)&(SRWLock->Map).field_0x34) {
    puVar10 = *(undefined1 **)&(SRWLock->Map).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(SRWLock->Map).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    ((longlong)*(int *)&(SRWLock->Map).field_0x48 - 1U & (longlong)(int)uVar6) * 4);
    while (iVar7 = 0, iVar8 != -1) {
      puVar1 = (undefined8 *)(*(longlong *)&(SRWLock->Map).field_0x0 + (longlong)iVar8 * 0x48);
      iVar7 = *(int *)(puVar3 + 1);
      iVar2 = *(int *)(puVar1 + 1);
      if (iVar2 == iVar7) {
        if (1 < iVar2) {
          iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar1,(wchar_t *)*puVar3);
          bVar5 = iVar7 == 0;
          goto LAB_145e3aac3;
        }
LAB_145e3aad4:
        TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
                         *)&SRWLock->Map,iVar8);
        iVar7 = 1;
        break;
      }
      bVar5 = iVar2 + iVar7 == 1;
LAB_145e3aac3:
      if (bVar5) goto LAB_145e3aad4;
      iVar8 = *(int *)(puVar1 + 8);
    }
  }
  if (SRWLock != (FBucket *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return iVar7;
}

// ConstructItems<FShaderCompilerError,FShaderCompilerError,int> @ 145e3ab20

void __cdecl
ConstructItems<FShaderCompilerError,FShaderCompilerError,int>
          (void *param_1,FShaderCompilerError *param_2,int param_3)

{
  FString *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->StrippedErrorMessage;
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,
                       (FString *)((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)this)
                      );
      FString::FString(this + -1,pFVar1 + -1);
      FString::FString(this,pFVar1);
      FString::FString(this + 1,pFVar1 + 1);
      FString::FString(this + 2,pFVar1 + 2);
      pFVar1 = pFVar1 + 5;
      this = this + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FGenericShaderStat,int> @ 145e3ae10

void __cdecl DefaultConstructItems<FGenericShaderStat,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 4;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined1 *)(lVar1 + 4) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x30;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderCompilerError,int> @ 145e3ae50

void __cdecl DefaultConstructItems<FShaderCompilerError,int>(void *param_1,int param_2)

{
  FString *this;
  
  if (param_2 != 0) {
    this = (FString *)((longlong)param_1 + 0x20);
    do {
      FString::FString(this + -2,L"");
      FString::FString(this + -1,L"");
      FString::FString(this,L"");
      FString::FString(this + 1,L"");
      FString::FString(this + 2,L"");
      this = this + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FShaderPreprocessDependency,int> @ 145e3aee0

void __cdecl DefaultConstructItems<FShaderPreprocessDependency,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FUniformResourceEntry,int> @ 145e3af30

void __cdecl DefaultConstructItems<FUniformResourceEntry,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 9;
    do {
      *(undefined4 *)(lVar1 + -1) = 0;
      lVar1 = lVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGenericShaderStat,int> @ 145e3afb0

void __cdecl DestructItems<FGenericShaderStat,int>(FGenericShaderStat *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<bool,float,int,unsigned_int,FString> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->Value;
    do {
      bVar1 = pTVar4->TypeIndex;
      if ((4 < (ulonglong)bVar1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,float,int,unsigned_int,FString>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar1])(pTVar4);
      pTVar4 = pTVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderCompilerError,int> @ 145e3b040

void __cdecl DestructItems<FShaderCompilerError,int>(FShaderCompilerError *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->HighlightedLine;
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
      pFVar1 = pFVar2[-2].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FShaderCompilerError *)(pFVar2 + -3))->ErrorVirtualFilePath).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderPreprocessDependency,int> @ 145e3b0c0

void __cdecl
DestructItems<FShaderPreprocessDependency,int>(FShaderPreprocessDependency *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ResultPath;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (((FSharedReferencer<1> *)(pTVar2 + 2))->ReferenceController);
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
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FShaderDiagnosticRemapper::FSourceBlock,int> @ 145e3b120

void __cdecl
DestructItems<FShaderDiagnosticRemapper::FSourceBlock,int>(FSourceBlock *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->OriginalPath;
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

// DestructItems<TRefCountPtr<FSharedShaderCompilerEnvironment>,int> @ 145e3b160

void __cdecl
DestructItems<TRefCountPtr<FSharedShaderCompilerEnvironment>,int>
          (TRefCountPtr<FSharedShaderCompilerEnvironment> *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FSharedShaderCompilerEnvironment *pFVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar3 = param_1->Reference;
    if (pFVar3 != (FSharedShaderCompilerEnvironment *)0x0) {
      puVar1 = &pFVar3->field_0x8;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int> @ 145e3b1c0

void __cdecl
DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
          (TRefCountPtr<FShaderCommonCompileJob> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FShaderCommonCompileJob *)0x0) {
      FShaderCommonCompileJob::Release(param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TRefCountPtr<FShaderCompileJob>,int> @ 145e3b200

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
DestructItems<TRefCountPtr<FShaderCompileJob>,int>
          (TRefCountPtr<FShaderCompileJob> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->Reference != (FShaderCompileJob *)0x0) {
      FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)param_1->Reference);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int> @ 145e3b240

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int>
          (TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_> *param_1,
          int param_2)

{
  FShaderLibraryInstance *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FShaderLibraryInstance *)0x0) {
      FShaderLibraryInstance::~FShaderLibraryInstance(this);
      operator_delete(this,0xb30);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// HeapSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_1>_>_> @ 145e3cd00

void __cdecl
AlgoImpl::
HeapSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_1>_>_>
          (FShaderCodeValidationStride *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationStride,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_1>_>
          param_4)

{
  FShaderCodeValidationStride *pFVar1;
  FShaderCodeValidationStride FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_145e3cde6:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            FVar2 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar2;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  if (param_1[(longlong)iVar9 + 2].BindPoint < param_1[iVar5].BindPoint) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1 + iVar8;
                if (param_1[iVar5].BindPoint <= pFVar1->BindPoint) break;
                FVar2 = *pFVar1;
                *pFVar1 = param_1[iVar5];
                param_1[iVar5] = FVar2;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].BindPoint < param_1[iVar7].BindPoint) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1 + iVar5;
    if (param_1[iVar7].BindPoint <= pFVar1->BindPoint) goto LAB_145e3cde6;
    FVar2 = *pFVar1;
    *pFVar1 = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_2>_>_> @ 145e3ceb0

void __cdecl
AlgoImpl::
HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_2>_>_>
          (FShaderCodeValidationType *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationType,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_2>_>
          param_4)

{
  FShaderCodeValidationType *pFVar1;
  FShaderCodeValidationType FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_145e3cf96:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            FVar2 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar2;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  if (param_1[(longlong)iVar9 + 2].BindPoint < param_1[iVar5].BindPoint) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1 + iVar8;
                if (param_1[iVar5].BindPoint <= pFVar1->BindPoint) break;
                FVar2 = *pFVar1;
                *pFVar1 = param_1[iVar5];
                param_1[iVar5] = FVar2;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].BindPoint < param_1[iVar7].BindPoint) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1 + iVar5;
    if (param_1[iVar7].BindPoint <= pFVar1->BindPoint) goto LAB_145e3cf96;
    FVar2 = *pFVar1;
    *pFVar1 = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_3>_>_> @ 145e3d060

void __cdecl
AlgoImpl::
HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_3>_>_>
          (FShaderCodeValidationType *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationType,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_3>_>
          param_4)

{
  FShaderCodeValidationType *pFVar1;
  FShaderCodeValidationType FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_145e3d146:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            FVar2 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar2;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  if (param_1[(longlong)iVar9 + 2].BindPoint < param_1[iVar5].BindPoint) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1 + iVar8;
                if (param_1[iVar5].BindPoint <= pFVar1->BindPoint) break;
                FVar2 = *pFVar1;
                *pFVar1 = param_1[iVar5];
                param_1[iVar5] = FVar2;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].BindPoint < param_1[iVar7].BindPoint) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1 + iVar5;
    if (param_1[iVar7].BindPoint <= pFVar1->BindPoint) goto LAB_145e3d146;
    FVar2 = *pFVar1;
    *pFVar1 = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// HeapSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_4>_>_> @ 145e3d210

void __cdecl
AlgoImpl::
HeapSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_4>_>_>
          (FShaderCodeValidationUBSize *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationUBSize,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_4>_>
          param_4)

{
  FShaderCodeValidationUBSize *pFVar1;
  FShaderCodeValidationUBSize FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar8 = iVar6;
  iVar9 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_145e3d2f6:
      if (iVar9 == 0) {
        iVar6 = param_2 + -1;
        lVar10 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar8 = 0;
            FVar2 = *param_1;
            *param_1 = param_1[lVar10];
            param_1[lVar10] = FVar2;
            if (1 < iVar6) {
              do {
                iVar9 = iVar8 * 2;
                iVar5 = iVar9 + 1;
                if (iVar9 + 2 < iVar6) {
                  if (param_1[(longlong)iVar9 + 2].BindPoint < param_1[iVar5].BindPoint) {
                    iVar5 = iVar9;
                  }
                  iVar5 = iVar5 + 1;
                }
                pFVar1 = param_1 + iVar8;
                if (param_1[iVar5].BindPoint <= pFVar1->BindPoint) break;
                FVar2 = *pFVar1;
                *pFVar1 = param_1[iVar5];
                param_1[iVar5] = FVar2;
                iVar8 = iVar5;
              } while (iVar5 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar5 = iVar9 + -1;
      iVar6 = iVar8 + -2;
      iVar8 = iVar6;
      iVar9 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar7 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[(longlong)iVar6 + 2].BindPoint < param_1[iVar7].BindPoint) {
        iVar7 = iVar6;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1 + iVar5;
    if (param_1[iVar7].BindPoint <= pFVar1->BindPoint) goto LAB_145e3d2f6;
    FVar2 = *pFVar1;
    *pFVar1 = param_1[iVar7];
    iVar6 = iVar7 * 2 + 1;
    param_1[iVar7] = FVar2;
    iVar5 = iVar7;
  } while( true );
}

// IntroSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_1>_>_> @ 145e3d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_1>_>_>
          (FShaderCodeValidationStride *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationStride,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_1>_>
          param_4)

{
  FShaderCodeValidationStride *pFVar1;
  FShaderCodeValidationStride FVar2;
  int iVar3;
  FShaderCodeValidationStride *pFVar4;
  FShaderCodeValidationStride **ppFVar5;
  FShaderCodeValidationStride *pFVar6;
  FShaderCodeValidationStride *pFVar7;
  FShaderCodeValidationStride *pFVar8;
  FShaderCodeValidationStride *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FShaderCodeValidationStride *local_338;
  FShaderCodeValidationStride *local_328;
  FShaderCodeValidationStride *local_320;
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
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_145e3d470:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145e3d4a0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145e3d4a9;
          goto LAB_145e3d4b2;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->BindPoint < pFVar1->BindPoint) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e3d56c;
      }
LAB_145e3d55b:
      local_338 = pFVar1;
      HeapSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_1>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145e3d56c:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145e3d4a9:
  if (pFVar4->BindPoint <= pFVar9->BindPoint) goto LAB_145e3d4a0;
LAB_145e3d4b2:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->BindPoint <= pFVar6->BindPoint);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145e3d4a0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_145e3d56c;
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
    if (pFVar8 <= pFVar4) goto LAB_145e3d56c;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145e3d55b;
  goto LAB_145e3d470;
}

// IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_2>_>_> @ 145e3d600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_2>_>_>
          (FShaderCodeValidationType *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationType,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_2>_>
          param_4)

{
  FShaderCodeValidationType *pFVar1;
  FShaderCodeValidationType FVar2;
  int iVar3;
  FShaderCodeValidationType *pFVar4;
  FShaderCodeValidationType **ppFVar5;
  FShaderCodeValidationType *pFVar6;
  FShaderCodeValidationType *pFVar7;
  FShaderCodeValidationType *pFVar8;
  FShaderCodeValidationType *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FShaderCodeValidationType *local_338;
  FShaderCodeValidationType *local_328;
  FShaderCodeValidationType *local_320;
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
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_145e3d6b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145e3d6e0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145e3d6e9;
          goto LAB_145e3d6f2;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->BindPoint < pFVar1->BindPoint) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e3d7ac;
      }
LAB_145e3d79b:
      local_338 = pFVar1;
      HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_2>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145e3d7ac:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145e3d6e9:
  if (pFVar4->BindPoint <= pFVar9->BindPoint) goto LAB_145e3d6e0;
LAB_145e3d6f2:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->BindPoint <= pFVar6->BindPoint);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145e3d6e0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_145e3d7ac;
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
    if (pFVar8 <= pFVar4) goto LAB_145e3d7ac;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145e3d79b;
  goto LAB_145e3d6b0;
}

// IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_3>_>_> @ 145e3d840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_3>_>_>
          (FShaderCodeValidationType *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationType,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_3>_>
          param_4)

{
  FShaderCodeValidationType *pFVar1;
  FShaderCodeValidationType FVar2;
  int iVar3;
  FShaderCodeValidationType *pFVar4;
  FShaderCodeValidationType **ppFVar5;
  FShaderCodeValidationType *pFVar6;
  FShaderCodeValidationType *pFVar7;
  FShaderCodeValidationType *pFVar8;
  FShaderCodeValidationType *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FShaderCodeValidationType *local_338;
  FShaderCodeValidationType *local_328;
  FShaderCodeValidationType *local_320;
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
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_145e3d8f0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145e3d920:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145e3d929;
          goto LAB_145e3d932;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->BindPoint < pFVar1->BindPoint) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e3d9ec;
      }
LAB_145e3d9db:
      local_338 = pFVar1;
      HeapSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_3>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145e3d9ec:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145e3d929:
  if (pFVar4->BindPoint <= pFVar9->BindPoint) goto LAB_145e3d920;
LAB_145e3d932:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->BindPoint <= pFVar6->BindPoint);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145e3d920;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffffcU)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_145e3d9ec;
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
    if (pFVar8 <= pFVar4) goto LAB_145e3d9ec;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 2) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145e3d9db;
  goto LAB_145e3d8f0;
}

// IntroSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,`FShaderCompilerOutput::SerializeShaderCodeValidation'::__l5::<lambda_4>_>_> @ 145e3da80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_4>_>_>
          (FShaderCodeValidationUBSize *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FShaderCodeValidationUBSize,_public:_void___cdecl_FShaderCompilerOutput::SerializeShaderCodeValidation(void)_::_5_::<lambda_4>_>
          param_4)

{
  FShaderCodeValidationUBSize *pFVar1;
  FShaderCodeValidationUBSize FVar2;
  int iVar3;
  FShaderCodeValidationUBSize *pFVar4;
  FShaderCodeValidationUBSize **ppFVar5;
  FShaderCodeValidationUBSize *pFVar6;
  FShaderCodeValidationUBSize *pFVar7;
  FShaderCodeValidationUBSize *pFVar8;
  FShaderCodeValidationUBSize *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FShaderCodeValidationUBSize *local_338;
  FShaderCodeValidationUBSize *local_328;
  FShaderCodeValidationUBSize *local_320;
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
LAB_145e3db30:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_145e3db60:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000145e3db69;
          goto LAB_145e3db72;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->BindPoint < pFVar1->BindPoint) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_145e3dc2e;
      }
LAB_145e3dc1d:
      local_338 = pFVar1;
      HeapSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_4>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_145e3dc2e:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000145e3db69:
  if (pFVar4->BindPoint <= pFVar9->BindPoint) goto LAB_145e3db60;
LAB_145e3db72:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->BindPoint <= pFVar6->BindPoint);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_145e3db60;
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
    if (pFVar6 <= pFVar9 + 1) goto LAB_145e3dc2e;
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
    if (pFVar8 <= pFVar4) goto LAB_145e3dc2e;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_145e3dc1d;
  goto LAB_145e3db30;
}

// IterateNamedShaderLibrariesSafe<`<lambda_5>::operator()'::__l2::<lambda_1>_&> @ 145e3dd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderLibrariesCollection::
IterateNamedShaderLibrariesSafe<_<lambda_5>::operator()_::__l2::<lambda_1>_&>
          (FShaderLibrariesCollection *this,<lambda_1> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FString *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  iVar3 = *(int *)&(this->NamedLibrariesStack).field_0x28;
  puVar1 = &(this->NamedLibrariesStack).field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145e3de1d;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145e3de1d:
  uVar11 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NamedLibrariesStack).field_0x8 -
                       *(int *)&(this->NamedLibrariesStack).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->NamedLibrariesStack).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->NamedLibrariesStack).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145e3df20;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_145e3df20:
  while( true ) {
    if (*(int *)&(this->NamedLibrariesStack).field_0x8 -
        *(int *)&(this->NamedLibrariesStack).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FString *)
             ((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)&this->NamedLibrariesStack);
    `<lambda_5>::operator()'::__l2::<lambda_1>::operator()
              (param_1,pFVar9,(FNamedShaderLibrary *)pFVar9[1].Data.AllocatorInstance.Data);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000145e3df93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->NamedLibrariesMutex);
  return;
}

// IterateStructureMetadataDependencies<`FShaderCompileWorkerUtil::WriteTasks'::__l17::<lambda_1>_> @ 145e3dfa0

void __thiscall
FShaderParametersMetadata::
IterateStructureMetadataDependencies<_FShaderCompileWorkerUtil::WriteTasks_::__l17::<lambda_1>_>
          (FShaderParametersMetadata *this,<lambda_1> param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FShaderParametersMetadata *local_res8;
  
  iVar1 = (this->Members).ArrayNum;
  pFVar3 = (this->Members).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(FShaderParametersMetadata **)(pFVar3 + 0x28) != (FShaderParametersMetadata *)0x0) {
      IterateStructureMetadataDependencies<_FShaderCompileWorkerUtil::WriteTasks_::__l17::<lambda_1>_>
                (*(FShaderParametersMetadata **)(pFVar3 + 0x28),param_1);
    }
    pFVar3 = pFVar3 + 0x30;
  }
  local_res8 = this;
  TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FShaderParametersMetadata_const_*_const_&>
            (param_1.AllShaderParameterStructures,&local_res8);
  return;
}

// Replace<TArrayView<char,int>,char> @ 145e3e980

void __cdecl
Algo::Replace<TArrayView<char,int>,char>(TArrayView<char,int> *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1->DataPtr;
  pcVar2 = pcVar1 + param_1->ArrayNum;
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
    if (*pcVar1 == *param_2) {
      *pcVar1 = *param_3;
    }
  }
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e3ffe0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000150610aa9) overlaps instruction at (ram,0x000150610aa7)
    */
/* WARNING: Removing unreachable block (ram,0x000150610aa4) */
/* WARNING: Removing unreachable block (ram,0x00015061372a) */
/* WARNING: Removing unreachable block (ram,0x0001506109c9) */
/* WARNING: Removing unreachable block (ram,0x000150613728) */

void __cdecl
Visit<`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  FArchive *pFVar7;
  undefined2 uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 uVar11;
  char cVar12;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar13;
  undefined1 *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool in_CF;
  bool in_ZF;
  
  uVar11 = SUB81(param_2,0);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar4 = param_2->TypeIndex;
  pbVar10 = (byte *)(ulonglong)bVar4;
  uVar8 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    ::operator<<(param_1->Ar,(bool *)param_2);
    return;
  case 2:
    pFVar7 = param_1->Ar;
    puVar13 = (undefined4 *)**(undefined8 **)&pFVar7->field_0x8;
    if (puVar13 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar7->field_0x8)[1]) {
      *(undefined4 *)&param_2->_padding_ = *puVar13;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
      return;
    }
    if ((pFVar7->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000145e40085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,uVar11,4);
    return;
  case 3:
    pFVar7 = param_1->Ar;
    puVar13 = (undefined4 *)**(undefined8 **)&pFVar7->field_0x8;
    if (puVar13 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar7->field_0x8)[1]) {
      *(undefined4 *)&param_2->_padding_ = *puVar13;
      **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
      return;
    }
    if ((pFVar7->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)param_2);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000145e400d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,uVar11,4);
    return;
  case 4:
    ::operator<<(param_1->Ar,(FString *)param_2);
    return;
  case 5:
    *(char *)CONCAT71(in_register_00000091,in_R10B) =
         *(char *)CONCAT71(in_register_00000091,in_R10B) + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    puVar13 = unaff_RSI;
    if (in_ZF) {
      if (!in_CF) {
        out(*(undefined1 *)unaff_RSI,uVar8);
        out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar8);
        *(undefined1 *)((longlong)unaff_RSI + 5) = *(undefined1 *)((longlong)unaff_RSI + 5);
        *pbVar10 = *pbVar10 & bVar4;
        *unaff_RBP = *unaff_RBP + cVar12;
        DAT_00000000 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xff00000000);
      *pcVar1 = *pcVar1 + cVar12;
      *pbVar10 = *pbVar10 & bVar4;
      puVar13 = unaff_RSI + 1;
      out(*unaff_RSI,uVar8);
    }
    *pbVar10 = *pbVar10;
    *(undefined1 *)&param_1->Ar = *(undefined1 *)&param_1->Ar;
    *pbVar10 = *pbVar10 & bVar4;
    uVar9 = *(int *)pbVar10 * 0x770065;
    pbVar10 = (byte *)(ulonglong)uVar9;
    *pbVar10 = *pbVar10 & (byte)uVar9;
    out(*puVar13,uVar8);
    *(char *)(puVar13 + 1) = *(char *)(puVar13 + 1) + (char)(uVar9 >> 8);
    *pbVar10 = *pbVar10 & (byte)uVar9;
    *unaff_RBP = *unaff_RBP + cVar12;
    *(undefined1 *)(ulonglong)(uVar9 & 0x6c006c00) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    bVar5 = *(byte *)(unaff_R15 + 0x6f + CONCAT71(in_register_00000091,in_R10B) * 2);
    if (unaff_BL < bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (unaff_BL != bVar5) {
      pbVar10[(longlong)
              (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>,0,1,2,3,4,0,TVariant<bool,float,int,unsigned_int,class_FString>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'
               ::__l2::Invokers[(longlong)pbVar10] + 0x61)] =
           pbVar10[(longlong)
                   (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>,0,1,2,3,4,0,TVariant<bool,float,int,unsigned_int,class_FString>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'
                    ::__l2::Invokers[(longlong)pbVar10] + 0x61)] + in_R10B;
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar12;
      iVar6 = *(int *)pbVar10;
      pcVar1 = (char *)((ulonglong)(uint)(iVar6 * 0x73) * 2 + 0x6f);
      *pcVar1 = *pcVar1 + (char)param_1;
      *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
           (char)((uint)(iVar6 * 0x73) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar11 = in(uVar8);
    *unaff_RDI = uVar11;
    *unaff_RBP = *unaff_RBP;
    uVar3 = in(uVar8);
    *(undefined4 *)(unaff_RDI + 1) = uVar3;
    *unaff_RBP = *unaff_RBP;
    out(*(undefined1 *)unaff_RSI,uVar8);
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x73);
    *pcVar1 = *pcVar1 + cVar12;
    *pbVar10 = *pbVar10;
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x6f);
    *pcVar1 = *pcVar1 + cVar12;
    *pbVar10 = *pbVar10;
    *(undefined1 *)&param_1->Ar = *(undefined1 *)&param_1->Ar;
    puVar2 = (undefined1 *)(in_FS_OFFSET + (longlong)pbVar10 * 2 + 0x20);
    *puVar2 = *puVar2;
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x6f);
    *pcVar1 = *pcVar1 + cVar12;
    *pbVar10 = *pbVar10;
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x68);
    *pcVar1 = *pcVar1 + cVar12;
    *(char *)&param_1->Ar = *(char *)&param_1->Ar + (char)((ulonglong)param_1 >> 8);
    *pbVar10 = *pbVar10 & bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pFVar7 = param_1->Ar;
  puVar13 = (undefined4 *)**(undefined8 **)&pFVar7->field_0x8;
  if (puVar13 + 1 <= (undefined4 *)(*(undefined8 **)&pFVar7->field_0x8)[1]) {
    *(undefined4 *)&param_2->_padding_ = *puVar13;
    **(longlong **)&pFVar7->field_0x8 = **(longlong **)&pFVar7->field_0x8 + 4;
    return;
  }
  if ((pFVar7->field_0x2a & 1) != 0) {
    FArchive::SerializeByteOrderSwapped(pFVar7,(uint *)param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e40035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar7 + 0x188))(pFVar7,uVar11,4);
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e40000

void __cdecl
UE::Core::Private::VisitApplyEncoded<1,0,`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  
  this = param_1->Ar;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)&param_2->_padding_ = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e40035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e40050

void __cdecl
UE::Core::Private::VisitApplyEncoded<2,0,`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  
  this = param_1->Ar;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)&param_2->_padding_ = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e40085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e400a0

void __cdecl
UE::Core::Private::VisitApplyEncoded<3,0,`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  
  this = param_1->Ar;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)&param_2->_padding_ = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e400d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e400f0

void __cdecl
UE::Core::Private::VisitApplyEncoded<4,0,`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  ::operator<<(param_1->Ar,(FString *)param_2);
  return;
}

// <lambda_1>,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e40100

void __cdecl
UE::Core::Private::VisitApplyEncoded<0,0,`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_TVariant<bool,float,int,unsigned_int,FString>__>
          (<lambda_1> *param_1,TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  ::operator<<(param_1->Ar,(bool *)param_2);
  return;
}

// <lambda_1>,0,1,2,3,4,0,TVariant<bool,float,int,unsigned_int,FString>_&> @ 145e40110

void __cdecl
UE::Core::Private::VisitImpl<`operator<<<bool,float,int,unsigned_int,FString>'::__l14::
<lambda_1>_0_1_2_3_4_0_TVariant<bool,float,int,unsigned_int,FString>__>
          (ulong64 param_1,<lambda_1> *param_2,TIntegerSequence<unsigned___int64,0,1,2,3,4> *param_3
          ,TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<bool,float,int,unsigned_int,FString> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000145e40126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>,0,1,2,3,4,0,TVariant<bool,float,int,unsigned_int,class_FString>&___ptr64>(unsigned___int64,`class_FArchive&___ptr64___cdecl_operator<<<bool,float,int,unsigned_int,FString>(FArchive&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'::`14'::<lambda_1>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<bool,float,int,unsigned_int,FString>&___ptr64)'
    ::__l2::Invokers[param_1])(param_2,param_5);
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_EShaderCompileJobStatus>_> @ 145e40130

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_EShaderCompileJobStatus>_>
          (_Atomic_padded<EShaderCompileJobStatus> *param_1)

{
  return (char *)param_1;
}

// get<1,TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_&> @ 145e40140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
* __cdecl get<1,TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_&>
                    (TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>
                     *param_1)

{
  return (TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>
          *)&param_1->field_0x10;
}

// get<0,TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_&> @ 145e40150

FString * __cdecl
get<0,TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>_&>
          (TTuple<FString,TUniquePtr<UE::ShaderLibrary::Private::FNamedShaderLibrary,TDefaultDelete<UE::ShaderLibrary::Private::FNamedShaderLibrary>_>_>
           *param_1)

{
  return (FString *)param_1;
}

// ~TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0> @ 145e42e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FShaderDiagnosticInfo::AddAndProcessErrorsForJob_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0> @ 145e42e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FShaderDiagnosticInfo::AddWarningsForJob_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1> @ 145e42e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FShaderCompileWorkerUtil::DumpDebugCompileInput_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0> @ 145e42e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FShaderCompileJob::GetInputHash_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1> @ 145e42eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FShaderLibraryInstance::PreloadShader_::__l5::<lambda_1>,0,1>(void *this)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__PreloadShader_FShaderLibraryInstance__QEAAXHPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30);
  if (*(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30) ==
      (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar1 = (TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x10);
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar1,*(int *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1> @ 145e42f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FShaderLibraryInstance::AddResource_::__l14::<lambda_1>,0,1>(void *this)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__O___AddResource_FShaderLibraryInstance__QEAA_AV__TRefCountPtr_VFShaderMapResource_SharedCode____HPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30);
  if (*(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30) ==
      (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar1 = (TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x10);
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar1,*(int *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1> @ 145e42f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FShaderLibrariesCollection::OnPakFileMounted_::__l14::<lambda_1>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__O___OnPakFileMounted_FShaderLibrariesCollection__QEAAXAEBUFMountedPakFileInfo_Private_ShaderLibrary_UE___Z__00_00_Function_Private_Core_UE__6B_
  ;
  pvVar1 = *(void **)((longlong)this + 0x10);
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

// operator<< @ 145e45a10

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FGenericShaderStat *param_2)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  FString local_18;
  
  FName::AppendString(&param_2->StatName,param_1);
  pTVar1 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"=",1);
  operator<<(pTVar1,&param_2->Value);
  if (param_2->TagName != (FName)0x0) {
    FName::ToString(&param_2->TagName,&local_18);
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L" (Tag=%s)");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2->Flags == Hidden) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L" (hidden)",9);
  }
  return param_1;
}

// operator<< @ 145e45ac0

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,
          TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TStringBuilderBase<wchar_t> *pTVar6;
  size_t sVar7;
  FString *pFVar8;
  wchar_t *_Str;
  int iVar9;
  
  bVar1 = param_2->TypeIndex;
  if ((4 < (ulonglong)bVar1) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TStringBuilderBase<wchar_t> *)(*pcVar4)();
    return pTVar6;
  }
  bVar2 = param_2->TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    if ((4 < (ulonglong)bVar2) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TStringBuilderBase<wchar_t> *)(*pcVar4)();
      return pTVar6;
    }
    bVar1 = param_2->TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
      if ((bVar1 != 1) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TStringBuilderBase<wchar_t> *)(*pcVar4)();
        return pTVar6;
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%f");
      return param_1;
    }
    if ((4 < (ulonglong)bVar1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TStringBuilderBase<wchar_t> *)(*pcVar4)();
      return pTVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
      TVariant<bool,float,int,unsigned_int,FString>::Get<int>(param_2);
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%d");
      return param_1;
    }
    bVar5 = TVariant<bool,float,int,unsigned_int,FString>::IsType<unsigned_int>(param_2);
    if (bVar5) {
      TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>(param_2);
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%u");
      return param_1;
    }
    bVar5 = TVariant<bool,float,int,unsigned_int,FString>::IsType<FString>(param_2);
    if (!bVar5) {
      return param_1;
    }
    pFVar8 = TVariant<bool,float,int,unsigned_int,FString>::Get<FString>(param_2);
    iVar3 = (pFVar8->Data).ArrayNum;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  else {
    if ((bVar2 != 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TStringBuilderBase<wchar_t> *)(*pcVar4)();
      return pTVar6;
    }
    _Str = L"false";
    if ((char)param_2->_padding_ != '\0') {
      _Str = (wchar_t *)&u_true;
    }
    sVar7 = wcslen(_Str);
    iVar9 = (int)sVar7;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,_Str,iVar9);
  return param_1;
}

// operator<< @ 145e45cc0

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCompileWorkerDiagnostics *param_2)

{
  double *pdVar1;
  undefined1 *puVar2;
  int *piVar3;
  double *pdVar4;
  int *piVar5;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->ErrorCode = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pdVar1 = &param_2->EntryPointTimestamp;
  puVar2 = &param_1->field_0x2a;
  pdVar4 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar1 = &param_2->BatchPreparationTime;
  pdVar4 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar1 = &param_2->BatchProcessTime;
  pdVar4 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  piVar3 = &param_2->BatchIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar3 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar2 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
  return param_1;
}

// operator<< @ 145e45e70

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCompilerError *param_2)

{
  FArchive *pFVar1;
  
  pFVar1 = operator<<(param_1,&param_2->ErrorVirtualFilePath);
  pFVar1 = operator<<(pFVar1,&param_2->ErrorLineString);
  pFVar1 = operator<<(pFVar1,&param_2->StrippedErrorMessage);
  pFVar1 = operator<<(pFVar1,&param_2->HighlightedLine);
  pFVar1 = operator<<(pFVar1,&param_2->HighlightedLineMarker);
  return pFVar1;
}

// operator<< @ 145e45ee0

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCompilerInput *param_2)

{
  uint *puVar1;
  EOfflineShaderCompilerType *pEVar2;
  uint *puVar3;
  EShaderDebugInfoFlags *pEVar4;
  EOfflineShaderCompilerType *pEVar5;
  ECompressor *pEVar6;
  ECompressionLevel *pEVar7;
  FName *pFVar8;
  FArchive *pFVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FString local_38;
  
  operator<<(param_1,&param_2->Target);
  FName::ToString(&param_2->ShaderFormat,&local_38);
  operator<<(param_1,&local_38);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar8 = FName::FName(&local_res8,(wchar_t *)FVar10.Data);
  param_2->ShaderFormat = *pFVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FName::ToString(&param_2->CompressionFormat,&local_38);
  operator<<(param_1,&local_38);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar8 = FName::FName(&local_res8,(wchar_t *)FVar10.Data);
  param_2->CompressionFormat = *pFVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FName::ToString(&param_2->ShaderPlatformName,&local_38);
  operator<<(param_1,&local_38);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar8 = FName::FName(&local_res8,(wchar_t *)FVar10.Data);
  param_2->ShaderPlatformName = *pFVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FName::ToString(&param_2->PreferredShaderCodeFormat,&local_38);
  operator<<(param_1,&local_38);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar8 = FName::FName(&local_res8,(wchar_t *)FVar10.Data);
  param_2->PreferredShaderCodeFormat = *pFVar8;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  operator<<(param_1,&param_2->VirtualSourceFilePath);
  operator<<(param_1,&param_2->EntryPointName);
  operator<<(param_1,&param_2->ShaderName);
  puVar1 = &param_2->SupportedHardwareMask;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&param_2->UsedOutputs)
  ;
  operator<<(param_1,&param_2->DumpDebugInfoRootPath);
  operator<<(param_1,&param_2->DumpDebugInfoPath);
  pEVar4 = (EShaderDebugInfoFlags *)**(undefined8 **)&param_1->field_0x8;
  if ((EShaderDebugInfoFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->DebugInfoFlags,1);
  }
  else {
    param_2->DebugInfoFlags = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->DebugExtension);
  operator<<(param_1,&param_2->DebugGroupName);
  operator<<(param_1,&param_2->DebugDescription);
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Hash,0x20);
  FShaderCompilerEnvironment::SerializeCompilationDependencies(&param_2->Environment,param_1);
  pEVar2 = &(param_2->ExtraSettings).OfflineCompiler;
  pFVar9 = operator<<(param_1,&(param_2->ExtraSettings).bExtractShaderSource);
  pFVar9 = operator<<(pFVar9,&(param_2->ExtraSettings).OfflineCompilerPath);
  pEVar5 = (EOfflineShaderCompilerType *)**(undefined8 **)&pFVar9->field_0x8;
  if ((EOfflineShaderCompilerType *)(*(undefined8 **)&pFVar9->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,pEVar2,1);
  }
  else {
    *pEVar2 = *pEVar5;
    **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 1;
  }
  pFVar9 = operator<<(pFVar9,&(param_2->ExtraSettings).GPUTarget);
  pFVar9 = operator<<(pFVar9,&(param_2->ExtraSettings).bDumpAll);
  pFVar9 = operator<<(pFVar9,&(param_2->ExtraSettings).bSaveCompilerStatsFiles);
  operator<<(pFVar9,&(param_2->ExtraSettings).bMobileMultiView);
  pEVar6 = (ECompressor *)**(undefined8 **)&param_1->field_0x8;
  if ((ECompressor *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar6 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OodleCompressor,1);
  }
  else {
    param_2->OodleCompressor = *pEVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar7 = (ECompressionLevel *)**(undefined8 **)&param_1->field_0x8;
  if ((ECompressionLevel *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar7 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OodleLevel,1);
  }
  else {
    param_2->OodleLevel = *pEVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  operator<<(param_1,&param_2->bCompilingForShaderPipeline);
  operator<<(param_1,&param_2->bIncludeUsedOutputs);
  operator<<(param_1,&param_2->bBindlessEnabled);
  return param_1;
}

// operator<< @ 145e46290

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCompilerOutput *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  TSetPrivateFriend::
  Serialize<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                      *)param_2);
  TArrayPrivateFriend::Serialize<FShaderCompilerError,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Errors);
  operator<<(param_1,&param_2->Target);
  operator<<(param_1,&param_2->bSerializingForCache);
  if (param_2->bSerializingForCache == false) {
    operator<<(param_1,&param_2->ShaderCode);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ValidateInputHash,0x20);
    operator<<(param_1,&param_2->CompileTime);
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OutputHash,0x14);
  puVar1 = &param_2->NumInstructions;
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
  puVar1 = &param_2->NumTextureSamplers;
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
  operator<<(param_1,&param_2->bSucceeded);
  operator<<(param_1,&param_2->ModifiedShaderSource);
  operator<<(param_1,&param_2->ModifiedEntryPointName);
  TArrayPrivateFriend::Serialize<FGenericShaderStat,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ShaderStatistics);
  return param_1;
}

// operator<< @ 145e46420

FArchive * __cdecl operator<<(FArchive *param_1,FShaderTarget *param_2)

{
  longlong *plVar1;
  uint local_res8 [2];
  uint local_res10 [2];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = (param_2->field0_0x0).Packed & 0xf;
  local_res8[0] = (param_2->field0_0x0).Packed >> 4 & 0xffff;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (param_2->field0_0x0).Packed = (local_res8[0] & 0xffff) << 4 | local_res10[0] & 0xf;
  }
  return param_1;
}

// operator<< @ 145e46510

FArchive * __cdecl operator<<(FArchive *param_1,FUniformResourceEntry *param_2)

{
  ushort *puVar1;
  uchar *puVar2;
  ushort *puVar3;
  
  if ((param_1->field_0x28 & 1) != 0) {
    param_2->UniformBufferMemberName = (wchar_t *)0x0;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->UniformBufferNameLength,1);
  }
  else {
    param_2->UniformBufferNameLength = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Type,1);
  }
  else {
    param_2->Type = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->ResourceIndex;
  puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if (puVar3 + 1 <= (ushort *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return param_1;
}

// operator<< @ 145e46610

FArchive * __cdecl operator<<(FArchive *param_1,FRHIShaderBindingLayout *param_2)

{
  uint *puVar1;
  EShaderBindingLayoutFlags *pEVar2;
  uint *puVar3;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Hash);
    }
  }
  else {
    param_2->Hash = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar2 = (EShaderBindingLayoutFlags *)**(undefined8 **)&param_1->field_0x8;
  if ((EShaderBindingLayoutFlags *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Flags,1);
  }
  else {
    param_2->Flags = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = &param_2->NumUniformBufferEntries;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  operator<<<FRHIUniformBufferShaderBindingLayout,8,4294967295>
            (param_1,&param_2->UniformBufferEntries);
  return param_1;
}

// operator<< @ 145e46710

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCode *param_2)

{
  int *piVar1;
  ECompressor *pEVar2;
  ECompressionLevel *pEVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  FString local_38;
  FCompressedBuffer local_28;
  
  if ((param_1->field_0x28 & 1) == 0) {
    local_28.CompressedData.Segments.ArrayMax = 1;
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
    local_28.CompressedData.Segments.AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    local_28.CompressedData.Segments.ArrayNum = 0;
    FShaderCode::FinalizeShaderCode(param_2,&local_28);
  }
  else {
    param_2->OptionalDataSize = -1;
  }
  operator<<(param_1,&(param_2->ShaderCodeResource).Code);
  operator<<(param_1,&(param_2->ShaderCodeResource).Symbols);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->UncompressedSize,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->UncompressedSize);
    }
  }
  else {
    param_2->UncompressedSize = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FName::ToString(&param_2->CompressionFormat,&local_38);
  operator<<(param_1,&local_38);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar6 = FName::FName(&local_res8,(wchar_t *)FVar8.Data);
  param_2->CompressionFormat = *pFVar6;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pEVar2 = (ECompressor *)**(undefined8 **)&param_1->field_0x8;
  if ((ECompressor *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OodleCompressor,1);
  }
  else {
    param_2->OodleCompressor = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  pEVar3 = (ECompressionLevel *)**(undefined8 **)&param_1->field_0x8;
  if ((ECompressionLevel *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->OodleLevel,1);
  }
  else {
    param_2->OodleLevel = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->ShaderCodeSize,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->ShaderCodeSize);
    }
  }
  else {
    param_2->ShaderCodeSize = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_2->UncompressedSize != 0) && (param_2->ShaderCodeSize < 1)) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("Output.UncompressedSize == 0 || Output.ShaderCodeSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x108f,
                       L"FShaderCode::operator<<(): invalid shader code size for a compressed shader: ShaderCodeSize=%d, UncompressedSize=%d"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArchive *)(*pcVar4)();
      return pFVar7;
    }
  }
  return param_1;
}

// operator<< @ 145e46920

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCodeResource *param_2)

{
  operator<<(param_1,&param_2->Header);
  operator<<(param_1,&param_2->Code);
  operator<<(param_1,&param_2->Symbols);
  return param_1;
}

// operator<< @ 145e46970

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArchive * __cdecl operator<<(FArchive *param_1,FShaderCompilerDefinitions *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  wchar_t wVar15;
  uint uVar16;
  uint uVar17;
  FName FVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FArchive *pFVar23;
  FName *pFVar24;
  char *pcVar25;
  uint *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  uint uVar31;
  wchar_t *pwVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  TArray<EShaderCompilerDefineVariant,TSizedDefaultAllocator<32>_> *pTVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStack_1968 [32];
  FName *local_1948;
  FName *local_1940;
  longlong local_1938;
  longlong local_1930;
  undefined8 local_1928;
  FScriptContainerElement local_1918;
  uint local_1914;
  uint local_1910 [2];
  FName *local_1908;
  FName local_1900;
  uint local_18f8 [2];
  uint local_18f0;
  FName local_18ec;
  undefined4 local_18e4;
  FName local_18e0;
  FName local_18d8 [2];
  char local_18c8 [8];
  undefined8 auStack_18c0 [129];
  char local_14b8 [8];
  undefined8 auStack_14b0 [129];
  wchar_t local_10a8 [2];
  uint auStack_10a4 [519];
  wchar_t local_888 [2];
  uint auStack_884 [519];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1968;
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return param_1;
    }
    operator<<(param_1,&param_2->ValueCount);
    uVar17 = _UNK_1506e9cec;
    uVar16 = _UNK_1506e9ce8;
    uVar20 = _UNK_1506e9ce4;
    uVar31 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
    uVar27 = 0;
    local_18f0 = 0;
    if (param_2->ValueCount != 0) {
      do {
        pTVar36 = &param_2->ValueTypes;
        local_1900.ComparisonIndex.Value = 0;
        local_1900.Number = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          local_1910[0] = FName::ToStringInternal(&local_1900,local_888,0x40b);
          uVar21 = local_1910[0] + 1;
          if (uVar21 != 0) {
            uVar28 = uVar27;
            if (3 < uVar21) {
              if (uVar21 < 0x20) {
LAB_145e47061:
                do {
                  uVar35 = (uint)*(undefined8 *)(local_888 + uVar28) & uVar31;
                  uVar34 = (uint)((ulonglong)*(undefined8 *)(local_888 + uVar28) >> 0x20) & uVar20;
                  sVar7 = (short)uVar35;
                  sVar8 = (short)(uVar35 >> 0x10);
                  sVar9 = (short)uVar34;
                  sVar10 = (short)(uVar34 >> 0x10);
                  *(uint *)(local_14b8 + uVar28) =
                       CONCAT13((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar34 >> 0x10) -
                                (0xff < sVar10),
                                CONCAT12((0 < sVar9) * (sVar9 < 0x100) * (char)uVar34 -
                                         (0xff < sVar9),
                                         CONCAT11((0 < sVar8) * (sVar8 < 0x100) *
                                                  (char)(uVar35 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar35 -
                                                  (0xff < sVar7))));
                  uVar35 = (int)uVar28 + 4;
                  uVar28 = (ulonglong)uVar35;
                } while (uVar35 < (uVar21 & 0xfffffffc));
              }
              else {
                uVar35 = 0x10;
                do {
                  lVar33 = uVar28 * 2;
                  uVar30 = (ulonglong)(uVar35 - 8);
                  uVar34 = *(uint *)(local_888 + uVar28) & uVar31;
                  uVar37 = *(uint *)((longlong)auStack_884 + lVar33) & uVar20;
                  uVar38 = *(uint *)((longlong)auStack_884 + lVar33 + 4) & uVar16;
                  uVar39 = *(uint *)((longlong)auStack_884 + lVar33 + 8) & uVar17;
                  sVar7 = (short)uVar34;
                  sVar8 = (short)(uVar34 >> 0x10);
                  sVar9 = (short)uVar37;
                  sVar10 = (short)(uVar37 >> 0x10);
                  sVar11 = (short)uVar38;
                  sVar12 = (short)(uVar38 >> 0x10);
                  sVar13 = (short)uVar39;
                  sVar14 = (short)(uVar39 >> 0x10);
                  *(ulonglong *)(local_14b8 + uVar28) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar39 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar39 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar38 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar38 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar37 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar37 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar34 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar34 -
                                                  (0xff < sVar7))))))));
                  uVar34 = (int)uVar28 + 0x20;
                  uVar28 = (ulonglong)uVar34;
                  lVar33 = uVar30 * 2;
                  uVar37 = *(uint *)(local_888 + uVar30) & uVar31;
                  uVar38 = *(uint *)((longlong)auStack_884 + lVar33) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_884 + lVar33 + 4) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_884 + lVar33 + 8) & uVar17;
                  sVar7 = (short)uVar37;
                  sVar8 = (short)(uVar37 >> 0x10);
                  sVar9 = (short)uVar38;
                  sVar10 = (short)(uVar38 >> 0x10);
                  sVar11 = (short)uVar39;
                  sVar12 = (short)(uVar39 >> 0x10);
                  sVar13 = (short)uVar40;
                  sVar14 = (short)(uVar40 >> 0x10);
                  *(ulonglong *)(local_14b8 + uVar30) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar40 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar40 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar39 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar39 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar38 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar38 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar37 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar37 -
                                                  (0xff < sVar7))))))));
                  uVar30 = (ulonglong)uVar35;
                  lVar33 = uVar30 * 2;
                  uVar37 = *(uint *)(local_888 + uVar30) & uVar31;
                  uVar38 = *(uint *)((longlong)auStack_884 + lVar33) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_884 + lVar33 + 4) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_884 + lVar33 + 8) & uVar17;
                  sVar7 = (short)uVar37;
                  sVar8 = (short)(uVar37 >> 0x10);
                  sVar9 = (short)uVar38;
                  sVar10 = (short)(uVar38 >> 0x10);
                  sVar11 = (short)uVar39;
                  sVar12 = (short)(uVar39 >> 0x10);
                  sVar13 = (short)uVar40;
                  sVar14 = (short)(uVar40 >> 0x10);
                  *(ulonglong *)(local_14b8 + uVar30) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar40 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar40 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar39 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar39 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar38 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar38 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar37 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar37 -
                                                  (0xff < sVar7))))))));
                  uVar30 = (ulonglong)(uVar35 + 8);
                  lVar33 = uVar30 * 2;
                  uVar35 = uVar35 + 0x20;
                  uVar37 = *(uint *)(local_888 + uVar30) & uVar31;
                  uVar38 = *(uint *)((longlong)auStack_884 + lVar33) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_884 + lVar33 + 4) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_884 + lVar33 + 8) & uVar17;
                  sVar7 = (short)uVar37;
                  sVar8 = (short)(uVar37 >> 0x10);
                  sVar9 = (short)uVar38;
                  sVar10 = (short)(uVar38 >> 0x10);
                  sVar11 = (short)uVar39;
                  sVar12 = (short)(uVar39 >> 0x10);
                  sVar13 = (short)uVar40;
                  sVar14 = (short)(uVar40 >> 0x10);
                  *(ulonglong *)(local_14b8 + uVar30) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar40 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar40 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar39 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar39 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar38 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar38 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar37 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar37 -
                                                  (0xff < sVar7))))))));
                } while (uVar34 < uVar21 - (uVar21 & 0x1f));
                if (3 < (uVar21 & 0x1f)) goto LAB_145e47061;
              }
              if (uVar21 <= (uint)uVar28) goto LAB_145e470c6;
            }
            pcVar25 = local_14b8 + uVar28;
            uVar30 = (ulonglong)(uVar21 - (int)uVar28);
            pwVar32 = local_888 + uVar28;
            do {
              wVar15 = *pwVar32;
              pwVar32 = pwVar32 + 1;
              *pcVar25 = (char)wVar15;
              pcVar25 = pcVar25 + 1;
              uVar30 = uVar30 - 1;
            } while (uVar30 != 0);
          }
LAB_145e470c6:
          plVar4 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1910,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_1910);
            }
          }
          else {
            local_1910[0] = *(uint *)*plVar4;
            *plVar4 = *plVar4 + 4;
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_14b8,local_1910[0] + 1);
        }
        else {
          plVar4 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_1910,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_1910);
            }
          }
          else {
            local_1910[0] = *(uint *)*plVar4;
            *plVar4 = *plVar4 + 4;
          }
          if ((0x40a < local_1910[0]) &&
             (bVar19 = FDebug::CheckVerifyFailedImpl2
                                 ("StringLength < FName::StringBufferSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderCompilerDefinitions.h"
                                  ,0x1bf,L""), bVar19)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FArchive *)(*pcVar6)();
            return pFVar23;
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_14b8,local_1910[0] + 1);
          pFVar24 = FName::FName(local_18d8,local_14b8);
          local_1900 = *pFVar24;
        }
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18f8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_18f8);
          }
        }
        else {
          local_18f8[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        FVar18 = local_1900;
        uVar21 = GetTypeHash(local_1900.ComparisonIndex.Value);
        uVar21 = uVar21 + FVar18.Number;
        local_1908 = (FName *)CONCAT44(local_1908._4_4_,uVar21);
        uVar21 = FShaderCompilerDefinitions::FindMapIndex(param_2,FVar18,uVar21);
        if (uVar21 == 0xffffffff) {
          pFVar24 = (FName *)(param_2->Pairs).AllocatorInstance.Data;
          local_18ec = FVar18;
          local_18e4 = 0;
          if ((pFVar24 <= &local_18ec) &&
             (lVar33 = (longlong)(param_2->Pairs).ArrayMax,
             &local_18ec < (FName *)((longlong)pFVar24 + lVar33 * 0xc))) {
            local_1930 = (longlong)(param_2->Pairs).ArrayNum;
            local_1928 = 0xc;
            local_1948 = &local_18ec;
            local_1940 = pFVar24;
            local_1938 = lVar33;
            bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              pFVar23 = (FArchive *)(*pcVar6)();
              return pFVar23;
            }
          }
          uVar21 = (param_2->Pairs).ArrayNum;
          piVar1 = &(param_2->Pairs).ArrayMax;
          if (uVar21 == *piVar1) {
            uVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&(param_2->Pairs).AllocatorInstance,piVar1);
          }
          (param_2->Pairs).ArrayNum = uVar21 + 1;
          local_1918 = (FScriptContainerElement)0x0;
          pFVar5 = (param_2->Pairs).AllocatorInstance.Data;
          *(FName *)(pFVar5 + (longlong)(int)uVar21 * 0xc) = local_18ec;
          *(undefined4 *)(pFVar5 + (longlong)(int)uVar21 * 0xc + 8) = local_18e4;
          pFVar24 = (FName *)(pTVar36->AllocatorInstance).Data;
          if ((pFVar24 <= (FName *)&local_1918) &&
             (lVar33 = (longlong)(param_2->ValueTypes).ArrayMax,
             &local_1918 < (undefined8 *)((longlong)&(pFVar24->ComparisonIndex).Value + lVar33))) {
            local_1930 = (longlong)(param_2->ValueTypes).ArrayNum;
            local_1928 = 1;
            local_1948 = (FName *)&local_1918;
            local_1940 = pFVar24;
            local_1938 = lVar33;
            bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              pFVar23 = (FArchive *)(*pcVar6)();
              return pFVar23;
            }
          }
          iVar22 = (param_2->ValueTypes).ArrayNum;
          piVar1 = &(param_2->ValueTypes).ArrayMax;
          if (iVar22 == *piVar1) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&pTVar36->AllocatorInstance,piVar1);
          }
          (param_2->ValueTypes).ArrayNum = iVar22 + 1;
          (pTVar36->AllocatorInstance).Data[iVar22] = local_1918;
          FHashTable::Add(&param_2->KeyHashTable,(uint)local_1908,uVar21);
        }
        FVar18 = local_1900;
        iVar22 = (param_2->Pairs).ArrayNum;
        local_1908 = (FName *)CONCAT44(local_1908._4_4_,local_18f8[0]);
        uVar35 = 0;
        if ((int)uVar21 < iVar22) {
          uVar35 = ~uVar21 >> 0x1f;
        }
        if (uVar35 == 0) {
          local_1948 = (FName *)(longlong)(int)uVar21;
          local_1940 = (FName *)(longlong)iVar22;
          bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FArchive *)(*pcVar6)();
            return pFVar23;
          }
        }
        pFVar5 = (param_2->Pairs).AllocatorInstance.Data;
        pFVar24 = (FName *)(longlong)(int)uVar21;
        *(FName *)(pFVar5 + (longlong)pFVar24 * 0xc) = FVar18;
        *(uint *)(pFVar5 + (longlong)pFVar24 * 0xc + 8) = (uint)local_1908;
        iVar22 = (param_2->ValueTypes).ArrayNum;
        uVar35 = 0;
        if ((int)uVar21 < iVar22) {
          uVar35 = ~uVar21 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (local_1948 = pFVar24, local_1940 = (FName *)(longlong)iVar22,
           bVar19 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar6 = (code *)swi(3);
          pFVar23 = (FArchive *)(*pcVar6)();
          return pFVar23;
        }
        pFVar29 = (param_2->ValueTypes).AllocatorInstance.Data + (longlong)pFVar24;
        pFVar5 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
        if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar5 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar29,1);
        }
        else {
          *pFVar29 = *pFVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        local_18f0 = local_18f0 + 1;
      } while (local_18f0 < param_2->ValueCount);
    }
  }
  else {
    puVar26 = &param_2->ValueCount;
    puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar26);
      }
    }
    else {
      *puVar26 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    iVar22 = (param_2->Pairs).ArrayNum;
    uVar31 = 0;
    if (0 < iVar22) {
      do {
        iVar2 = (param_2->ValueTypes).ArrayNum;
        uVar20 = 0;
        if ((int)uVar31 < iVar2) {
          uVar20 = ~uVar31 >> 0x1f;
        }
        if (uVar20 == 0) {
          local_1948 = (FName *)(ulonglong)uVar31;
          local_1940 = (FName *)(longlong)iVar2;
          bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FArchive *)(*pcVar6)();
            return pFVar23;
          }
        }
      } while (((param_2->ValueTypes).AllocatorInstance.Data[uVar31] == (FScriptContainerElement)0x0
               ) && (uVar31 = uVar31 + 1, (int)uVar31 < iVar22));
    }
    uVar21 = _UNK_1506e9cec;
    uVar17 = _UNK_1506e9ce8;
    uVar16 = _UNK_1506e9ce4;
    uVar20 = ___xmm_00ff00ff00ff00ff00ff00ff00ff00ff;
    if ((int)uVar31 < (param_2->Pairs).ArrayNum) {
      do {
        iVar22 = (param_2->Pairs).ArrayNum;
        uVar35 = 0;
        if ((int)uVar31 < iVar22) {
          uVar35 = ~uVar31 >> 0x1f;
        }
        if (uVar35 == 0) {
          local_1948 = (FName *)(longlong)(int)uVar31;
          local_1940 = (FName *)(longlong)iVar22;
          bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FArchive *)(*pcVar6)();
            return pFVar23;
          }
        }
        local_1908 = (FName *)((param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar31 * 0xc
                              );
        if ((param_1->field_0x28 & 1) == 0) {
          local_1914 = FName::ToStringInternal(local_1908,local_10a8,0x40b);
          uVar27 = 0;
          uVar35 = local_1914 + 1;
          if (uVar35 != 0) {
            if (3 < uVar35) {
              if (uVar35 < 0x20) {
LAB_145e46c75:
                do {
                  uVar34 = (uint)*(undefined8 *)(local_10a8 + uVar27) & uVar20;
                  uVar37 = (uint)((ulonglong)*(undefined8 *)(local_10a8 + uVar27) >> 0x20) & uVar16;
                  sVar7 = (short)uVar34;
                  sVar8 = (short)(uVar34 >> 0x10);
                  sVar9 = (short)uVar37;
                  sVar10 = (short)(uVar37 >> 0x10);
                  *(uint *)(local_18c8 + uVar27) =
                       CONCAT13((0 < sVar10) * (sVar10 < 0x100) * (char)(uVar37 >> 0x10) -
                                (0xff < sVar10),
                                CONCAT12((0 < sVar9) * (sVar9 < 0x100) * (char)uVar37 -
                                         (0xff < sVar9),
                                         CONCAT11((0 < sVar8) * (sVar8 < 0x100) *
                                                  (char)(uVar34 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar34 -
                                                  (0xff < sVar7))));
                  uVar34 = (int)uVar27 + 4;
                  uVar27 = (ulonglong)uVar34;
                } while (uVar34 < (uVar35 & 0xfffffffc));
              }
              else {
                uVar34 = 0x10;
                do {
                  lVar33 = uVar27 * 2;
                  uVar28 = (ulonglong)(uVar34 - 8);
                  uVar37 = *(uint *)(local_10a8 + uVar27) & uVar20;
                  uVar38 = *(uint *)((longlong)auStack_10a4 + lVar33) & uVar16;
                  uVar39 = *(uint *)((longlong)auStack_10a4 + lVar33 + 4) & uVar17;
                  uVar40 = *(uint *)((longlong)auStack_10a4 + lVar33 + 8) & uVar21;
                  sVar7 = (short)uVar37;
                  sVar8 = (short)(uVar37 >> 0x10);
                  sVar9 = (short)uVar38;
                  sVar10 = (short)(uVar38 >> 0x10);
                  sVar11 = (short)uVar39;
                  sVar12 = (short)(uVar39 >> 0x10);
                  sVar13 = (short)uVar40;
                  sVar14 = (short)(uVar40 >> 0x10);
                  *(ulonglong *)(local_18c8 + uVar27) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar40 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar40 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar39 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar39 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar38 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar38 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar37 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar37 -
                                                  (0xff < sVar7))))))));
                  uVar37 = (int)uVar27 + 0x20;
                  uVar27 = (ulonglong)uVar37;
                  lVar33 = uVar28 * 2;
                  uVar38 = *(uint *)(local_10a8 + uVar28) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_10a4 + lVar33) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_10a4 + lVar33 + 4) & uVar17;
                  uVar41 = *(uint *)((longlong)auStack_10a4 + lVar33 + 8) & uVar21;
                  sVar7 = (short)uVar38;
                  sVar8 = (short)(uVar38 >> 0x10);
                  sVar9 = (short)uVar39;
                  sVar10 = (short)(uVar39 >> 0x10);
                  sVar11 = (short)uVar40;
                  sVar12 = (short)(uVar40 >> 0x10);
                  sVar13 = (short)uVar41;
                  sVar14 = (short)(uVar41 >> 0x10);
                  *(ulonglong *)(local_18c8 + uVar28) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar41 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar41 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar40 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar40 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar39 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar39 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar38 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar38 -
                                                  (0xff < sVar7))))))));
                  uVar28 = (ulonglong)uVar34;
                  lVar33 = uVar28 * 2;
                  uVar38 = *(uint *)(local_10a8 + uVar28) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_10a4 + lVar33) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_10a4 + lVar33 + 4) & uVar17;
                  uVar41 = *(uint *)((longlong)auStack_10a4 + lVar33 + 8) & uVar21;
                  sVar7 = (short)uVar38;
                  sVar8 = (short)(uVar38 >> 0x10);
                  sVar9 = (short)uVar39;
                  sVar10 = (short)(uVar39 >> 0x10);
                  sVar11 = (short)uVar40;
                  sVar12 = (short)(uVar40 >> 0x10);
                  sVar13 = (short)uVar41;
                  sVar14 = (short)(uVar41 >> 0x10);
                  *(ulonglong *)(local_18c8 + uVar28) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar41 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar41 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar40 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar40 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar39 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar39 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar38 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar38 -
                                                  (0xff < sVar7))))))));
                  uVar28 = (ulonglong)(uVar34 + 8);
                  lVar33 = uVar28 * 2;
                  uVar34 = uVar34 + 0x20;
                  uVar38 = *(uint *)(local_10a8 + uVar28) & uVar20;
                  uVar39 = *(uint *)((longlong)auStack_10a4 + lVar33) & uVar16;
                  uVar40 = *(uint *)((longlong)auStack_10a4 + lVar33 + 4) & uVar17;
                  uVar41 = *(uint *)((longlong)auStack_10a4 + lVar33 + 8) & uVar21;
                  sVar7 = (short)uVar38;
                  sVar8 = (short)(uVar38 >> 0x10);
                  sVar9 = (short)uVar39;
                  sVar10 = (short)(uVar39 >> 0x10);
                  sVar11 = (short)uVar40;
                  sVar12 = (short)(uVar40 >> 0x10);
                  sVar13 = (short)uVar41;
                  sVar14 = (short)(uVar41 >> 0x10);
                  *(ulonglong *)(local_18c8 + uVar28) =
                       CONCAT17((0 < sVar14) * (sVar14 < 0x100) * (char)(uVar41 >> 0x10) -
                                (0xff < sVar14),
                                CONCAT16((0 < sVar13) * (sVar13 < 0x100) * (char)uVar41 -
                                         (0xff < sVar13),
                                         CONCAT15((0 < sVar12) * (sVar12 < 0x100) *
                                                  (char)(uVar40 >> 0x10) - (0xff < sVar12),
                                                  CONCAT14((0 < sVar11) * (sVar11 < 0x100) *
                                                           (char)uVar40 - (0xff < sVar11),
                                                           CONCAT13((0 < sVar10) * (sVar10 < 0x100)
                                                                    * (char)(uVar39 >> 0x10) -
                                                                    (0xff < sVar10),
                                                                    CONCAT12((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             (char)uVar39 -
                                                                             (0xff < sVar9),
                                                                             CONCAT11((0 < sVar8) *
                                                                                      (sVar8 < 0x100
                                                                                      ) * (char)(
                                                  uVar38 >> 0x10) - (0xff < sVar8),
                                                  (0 < sVar7) * (sVar7 < 0x100) * (char)uVar38 -
                                                  (0xff < sVar7))))))));
                } while (uVar37 < uVar35 - (uVar35 & 0x1f));
                if (3 < (uVar35 & 0x1f)) goto LAB_145e46c75;
              }
              if (uVar35 <= (uint)uVar27) goto LAB_145e46cd4;
            }
            pcVar25 = local_18c8 + uVar27;
            uVar28 = (ulonglong)(uVar35 - (int)uVar27);
            pwVar32 = local_10a8 + uVar27;
            do {
              wVar15 = *pwVar32;
              pwVar32 = pwVar32 + 1;
              *pcVar25 = (char)wVar15;
              pcVar25 = pcVar25 + 1;
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
          }
LAB_145e46cd4:
          plVar4 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1914,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1914);
            }
          }
          else {
            local_1914 = *(uint *)*plVar4;
            *plVar4 = *plVar4 + 4;
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18c8,local_1914 + 1);
        }
        else {
          plVar4 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1914,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_1914);
            }
          }
          else {
            local_1914 = *(uint *)*plVar4;
            *plVar4 = *plVar4 + 4;
          }
          if ((0x40a < local_1914) &&
             (bVar19 = FDebug::CheckVerifyFailedImpl2
                                 ("StringLength < FName::StringBufferSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderCompilerDefinitions.h"
                                  ,0x1bf,L""), bVar19)) {
            pcVar6 = (code *)swi(3);
            pFVar23 = (FArchive *)(*pcVar6)();
            return pFVar23;
          }
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_18c8,local_1914 + 1);
          pFVar24 = FName::FName(&local_18e0,local_18c8);
          *local_1908 = *pFVar24;
        }
        pFVar24 = local_1908 + 1;
        puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar24,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar24);
          }
        }
        else {
          (pFVar24->ComparisonIndex).Value = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar22 = (param_2->ValueTypes).ArrayNum;
        uVar35 = 0;
        if ((int)uVar31 < iVar22) {
          uVar35 = ~uVar31 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (local_1948 = (FName *)(longlong)(int)uVar31, local_1940 = (FName *)(longlong)iVar22,
           bVar19 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar19)) {
          pcVar6 = (code *)swi(3);
          pFVar23 = (FArchive *)(*pcVar6)();
          return pFVar23;
        }
        pFVar29 = (param_2->ValueTypes).AllocatorInstance.Data + (int)uVar31;
        pFVar5 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
        if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar5 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar29,1);
        }
        else {
          *pFVar29 = *pFVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        iVar22 = (param_2->Pairs).ArrayNum;
        pFVar24 = local_1940;
        do {
          uVar31 = uVar31 + 1;
          local_1940 = pFVar24;
          if (iVar22 <= (int)uVar31) break;
          iVar2 = (param_2->ValueTypes).ArrayNum;
          local_1940 = (FName *)(longlong)iVar2;
          uVar35 = 0;
          if ((int)uVar31 < iVar2) {
            uVar35 = ~uVar31 >> 0x1f;
          }
          if (uVar35 == 0) {
            local_1948 = (FName *)(longlong)(int)uVar31;
            bVar19 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            pFVar24 = local_1940;
            if (bVar19) {
              pcVar6 = (code *)swi(3);
              pFVar23 = (FArchive *)(*pcVar6)();
              return pFVar23;
            }
          }
          local_1940 = pFVar24;
          pFVar24 = local_1940;
        } while ((param_2->ValueTypes).AllocatorInstance.Data[(int)uVar31] ==
                 (FScriptContainerElement)0x0);
      } while ((int)uVar31 < (param_2->Pairs).ArrayNum);
    }
  }
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->StringValues);
  return param_1;
}

// operator<< @ 145e47460

FArchive * __cdecl operator<<(FArchive *param_1,FSharedBuffer *param_2)

{
  FBufferOwner *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  void *pvVar4;
  FSharedBuffer FVar5;
  void *pvVar6;
  void *local_res8;
  FUniqueBuffer local_res10;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18;
  
  pFVar1 = (param_2->Owner).Owner;
  pvVar6 = (void *)0x0;
  local_res8 = pvVar6;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    local_res8 = (void *)pFVar1->Size;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_res8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_res8);
    }
  }
  else {
    local_res8 = *(void **)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  pvVar4 = local_res8;
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x28 & 4) != 0) && (local_res8 != (void *)0x0)) {
      pFVar1 = (param_2->Owner).Owner;
      pcVar3 = *(code **)(*(longlong *)param_1 + 0x188);
      if (pFVar1 != (FBufferOwner *)0x0) {
        if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
          (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
        }
        pvVar6 = pFVar1->Data;
      }
      (*pcVar3)(param_1,pvVar6,pvVar4);
    }
  }
  else {
    FSharedBuffer::Reset(param_2);
    if (local_res8 != (void *)0x0) {
      FUniqueBuffer::Alloc((ulong64)&local_res10);
      pvVar4 = local_res8;
      pcVar3 = *(code **)(*(longlong *)param_1 + 0x188);
      if (local_res10.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res10.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_res10.Owner.Owner + 8))(local_res10.Owner.Owner);
        }
        pvVar6 = *(void **)((longlong)local_res10.Owner.Owner + 8);
      }
      (*pcVar3)(param_1,pvVar6,pvVar4);
      FVar5 = FUniqueBuffer::MoveToShared(&local_res10);
      FSharedBuffer::operator=(param_2,(FSharedBuffer *)FVar5.Owner.Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res18);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10.Owner);
    }
  }
  return param_1;
}

// operator== @ 145e475f0

bool __cdecl
operator==(TVariant<bool,float,int,unsigned_int,FString> *param_1,
          TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  FString *pFVar12;
  FString *pFVar13;
  
  bVar2 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar2) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar1 = &param_2->TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
    bVar2 = *puVar1;
    if ((4 < (ulonglong)bVar2) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
      if ((param_1->TypeIndex != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar6 = param_1->_padding_;
      if ((*puVar1 != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      return (char)lVar6 == (char)param_2->_padding_;
    }
  }
  bVar2 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar2) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
    bVar2 = *puVar1;
    if ((4 < (ulonglong)bVar2) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
      if ((param_1->TypeIndex != '\x01') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if ((*puVar1 != '\x01') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(float *)&param_2->_padding_ == *(float *)&param_1->_padding_) {
        return true;
      }
      return false;
    }
  }
  bVar2 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar2) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
    bVar2 = *puVar1;
    if ((4 < (ulonglong)bVar2) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') {
      piVar10 = TVariant<bool,float,int,unsigned_int,FString>::Get<int>(param_1);
      iVar9 = *piVar10;
      piVar10 = TVariant<bool,float,int,unsigned_int,FString>::Get<int>(param_2);
      return iVar9 == *piVar10;
    }
  }
  bVar2 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar2) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<unsigned_int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar2) != '\0') &&
     (bVar7 = TVariant<bool,float,int,unsigned_int,FString>::IsType<unsigned_int>(param_2), bVar7))
  {
    puVar11 = TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>(param_1);
    uVar3 = *puVar11;
    puVar11 = TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>(param_2);
    return uVar3 == *puVar11;
  }
  bVar2 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar2) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar2) == '\0') ||
     (bVar7 = TVariant<bool,float,int,unsigned_int,FString>::IsType<FString>(param_2), !bVar7)) {
    return false;
  }
  pFVar12 = TVariant<bool,float,int,unsigned_int,FString>::Get<FString>(param_2);
  pFVar13 = TVariant<bool,float,int,unsigned_int,FString>::Get<FString>(param_1);
  iVar9 = (pFVar12->Data).ArrayNum;
  iVar4 = (pFVar13->Data).ArrayNum;
  if (iVar4 != iVar9) {
    return iVar9 + iVar4 == 1;
  }
  if (iVar4 < 2) {
    return true;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp
                    ((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
  return iVar9 == 0;
}

// operator< @ 145e47a70

bool __cdecl
operator<(TVariant<bool,float,int,unsigned_int,FString> *param_1,
         TVariant<bool,float,int,unsigned_int,FString> *param_2)

{
  uchar *puVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  FString *pFVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  
  bVar3 = param_1->TypeIndex;
  pwVar15 = L"";
  if ((4 < (ulonglong)bVar3) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  puVar1 = &param_2->TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
    bVar3 = *puVar1;
    if ((4 < (ulonglong)bVar3) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
      if ((param_1->TypeIndex != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar6 = param_1->_padding_;
      if ((*puVar1 != '\0') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      return (byte)lVar6 < (byte)param_2->_padding_;
    }
  }
  bVar3 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar3) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
    bVar3 = *puVar1;
    if ((4 < (ulonglong)bVar3) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
      if ((param_1->TypeIndex != '\x01') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      fVar2 = *(float *)&param_1->_padding_;
      if ((*puVar1 != '\x01') &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      return fVar2 < *(float *)&param_2->_padding_;
    }
  }
  bVar3 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar3) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
    bVar3 = *puVar1;
    if ((4 < (ulonglong)bVar3) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') {
      piVar10 = TVariant<bool,float,int,unsigned_int,FString>::Get<int>(param_1);
      iVar9 = *piVar10;
      piVar10 = TVariant<bool,float,int,unsigned_int,FString>::Get<int>(param_2);
      return iVar9 < *piVar10;
    }
  }
  bVar3 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar3) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<unsigned_int,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar3) == '\0') ||
     (bVar7 = TVariant<bool,float,int,unsigned_int,FString>::IsType<unsigned_int>(param_2), !bVar7))
  {
    bVar3 = param_1->TypeIndex;
    if ((4 < (ulonglong)bVar3) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,bool,float,int,unsigned_int,FString>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar3) == '\0') ||
       (bVar7 = TVariant<bool,float,int,unsigned_int,FString>::IsType<FString>(param_2), !bVar7)) {
      bVar7 = false;
    }
    else {
      pFVar12 = TVariant<bool,float,int,unsigned_int,FString>::Get<FString>(param_2);
      pFVar13 = TVariant<bool,float,int,unsigned_int,FString>::Get<FString>(param_1);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      if ((pFVar13->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp(pwVar15,pwVar14);
      bVar7 = SUB41((uint)iVar9 >> 0x1f,0);
    }
  }
  else {
    puVar11 = TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>(param_1);
    uVar4 = *puVar11;
    puVar11 = TVariant<bool,float,int,unsigned_int,FString>::Get<unsigned_int>(param_2);
    bVar7 = uVar4 < *puVar11;
  }
  return bVar7;
}

// operator() @ 145e47e70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`<lambda_5>::operator()'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FNamedShaderLibrary *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong local_res20;
  FName local_80;
  FScriptContainerElement *local_78;
  FPlatformRWLock *local_70;
  FString local_68 [2];
  
  local_70 = &param_2->ComponentsMutex;
  AcquireSRWLockShared((PSRWLOCK)local_70);
  uVar1 = (param_2->Components).ArrayNum;
  uVar4 = (ulonglong)(int)uVar1;
  pFVar8 = (param_2->Components).AllocatorInstance.Data;
  local_78 = pFVar8 + uVar4 * 8;
  while( true ) {
    pFVar3 = local_78;
    lVar7 = 0;
    if ((param_2->Components).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (pFVar8 == pFVar3) break;
    local_res20 = **(longlong **)pFVar8;
    local_80 = *(FName *)(local_res20 + 0x10);
    ::FName::ToString(&local_80,local_68);
    (**(code **)(*(longlong *)**(undefined8 **)pFVar8 + 0x20))();
    lVar6 = *(longlong *)pFVar8;
    do {
      AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0xa18));
      ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0xa18));
      lVar7 = lVar7 + 8;
      lVar6 = lVar6 + 8;
    } while (lVar7 < 0x100);
    (**(code **)(*(longlong *)**(undefined8 **)pFVar8 + 0x40))();
    lVar6 = *(longlong *)pFVar8;
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0xb18));
    lVar5 = *(longlong *)(lVar6 + 0xa08);
    iVar2 = *(int *)(lVar6 + 0xa10);
    lVar7 = lVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (*(int *)(lVar6 + 0xa10) != iVar2) {
        `TCheckedPointerIterator<FShaderMapResource_SharedCode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res20);
      }
      if (lVar5 == lVar7) break;
      lVar5 = lVar5 + 8;
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0xb18));
    FOutputDevice::LogfImpl(*(FOutputDevice **)this,L"%s,%s,%s,%x,%d,%d,%.3f,%.3f,%.3f");
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 8;
    uVar4 = (ulonglong)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e4816f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)local_70);
  return;
}

// `vector_deleting_destructor'`adjustor{32}' @ 145e49294

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FShaderMapResource_SharedCode::`vector deleting
   destructor'`adjustor{32}' (unsigned int) __ptr64 */

void * __thiscall
FShaderMapResource_SharedCode::_vector_deleting_destructor__adjustor_32__
          (FShaderMapResource_SharedCode *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FShaderMapResource_SharedCode *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 145e492b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e492e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49310

void * __thiscall
IBaseDelegateInstance<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FShaderLibrariesCollection,void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e493a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e493d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(IPlugin_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49400

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49430

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TArrayView<FSHAHash_const_,int>,TFunctionRef<FIoRequest___cdecl(FIoChunkId_const_&,TRefCountPtr<FBaseGraphTask>)>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e494a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e494e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::PreloadShader'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__PreloadShader_FShaderLibraryInstance__QEAAXHPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30);
  if (*(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30) ==
      (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar1 = (TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x10);
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar1,*(int *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e495d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibraryInstance::AddResource'::__l14::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRefCountPtr<FBaseGraphTask> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__O___AddResource_FShaderLibraryInstance__QEAA_AV__TRefCountPtr_VFShaderMapResource_SharedCode____HPEAVFArchive___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30);
  if (*(TRefCountPtr<FBaseGraphTask> **)((longlong)this + 0x30) ==
      (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar1 = (TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x10);
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar1,*(int *)((longlong)this + 0x38));
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FShaderLibrariesCollection::OnPakFileMounted'::__l14::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__O___OnPakFileMounted_FShaderLibrariesCollection__QEAAXAEBUFMountedPakFileInfo_Private_ShaderLibrary_UE___Z__00_00_Function_Private_Core_UE__6B_
  ;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49690

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FShaderCompileJobStatus,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FShaderCompileJobStatus,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e496d0

void * __thiscall
TMemoryHasher<FBlake3,FBlake3Hash>::_scalar_deleting_destructor_
          (TMemoryHasher<FBlake3,FBlake3Hash> *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x810);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49710

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShaderPreprocessDependencies,SharedPointerInternals::DefaultDeleter<FShaderPreprocessDependencies>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FShaderPreprocessDependencies,SharedPointerInternals::DefaultDeleter<FShaderPreprocessDependencies>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49750

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UE::ShaderLibrary::Private::FNamedShaderLibrary::_scalar_deleting_destructor_
          (FNamedShaderLibrary *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  void *pvVar6;
  
  DestructItems<TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_>,int>
            ((TUniquePtr<FShaderLibraryInstance,TDefaultDelete<FShaderLibraryInstance>_> *)
             (this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ComponentsMutex);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComponentsMutex);
  }
  (this->PresentChunks).HashSize = 0;
  FVar2 = (this->PresentChunks).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PresentChunks).Elements);
  pFVar1 = (this->BaseDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LogicalName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
`FShaderCodeLibraryPluginUnmountedCallback'::__l2::FShaderCodeLibraryCleanup::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &`FShaderCodeLibraryPluginUnmountedCallback'::`2'::FShaderCodeLibraryCleanup::_vftable_;
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    FShaderLibrariesCollection::CloseLibrary
              (FShaderLibrariesCollection::Impl,(FString *)((longlong)this + 8));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  *(undefined ***)this = &___7FDeferredCleanupInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e498f0

void * __thiscall
FShaderCommonCompileJob::_scalar_deleting_destructor_(FShaderCommonCompileJob *this,uint param_1)

{
  ~FShaderCommonCompileJob(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49930

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
FShaderCompileJob::_scalar_deleting_destructor_(FShaderCompileJob *this,uint param_1)

{
  ~FShaderCompileJob(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x800);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FShaderMapResource_SharedCode::_scalar_deleting_destructor_
          (FShaderMapResource_SharedCode *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  FShaderMapResource::~FShaderMapResource((FShaderMapResource *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e499c0

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
FShaderPipelineCompileJob::_scalar_deleting_destructor_
          (FShaderPipelineCompileJob *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TRefCountPtr<FShaderCompileJob>,int>
            ((TRefCountPtr<FShaderCompileJob> *)(this->StageJobs).AllocatorInstance.Data,
             (this->StageJobs).ArrayNum);
  pFVar1 = (this->StageJobs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FShaderCommonCompileJob::~FShaderCommonCompileJob((FShaderCommonCompileJob *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 145e49a30

void * __thiscall
FShaderPreprocessDependencies::_scalar_deleting_destructor_
          (FShaderPreprocessDependencies *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->ByResult).IndexSize != 0) {
    (this->ByResult).HashMask = 0;
    (this->ByResult).IndexSize = 0;
    operator_delete__((this->ByResult).Hash);
    (this->ByResult).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ByResult).NextIndex);
    (this->ByResult).NextIndex = (uint *)0x0;
  }
  if ((this->BySource).IndexSize != 0) {
    (this->BySource).HashMask = 0;
    (this->BySource).IndexSize = 0;
    operator_delete__((this->BySource).Hash);
    (this->BySource).Hash = FHashTable::EmptyHash;
    operator_delete__((this->BySource).NextIndex);
    (this->BySource).NextIndex = (uint *)0x0;
  }
  DestructItems<FShaderPreprocessDependency,int>
            ((FShaderPreprocessDependency *)(this->Dependencies).AllocatorInstance.Data,
             (this->Dependencies).ArrayNum);
  pFVar1 = (this->Dependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// AddPreprocessDependency @ 145e4ad10

void __cdecl
AddPreprocessDependency(FShaderPreprocessDependencies *param_1,FShaderPreprocessDependency *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *_Str2;
  FShaderPreprocessDependency *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  
  if (((param_2->StrippedSource).Object == (TArray<char,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Dependency.StrippedSource.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0xb71,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = 0;
  for (uVar9 = (param_1->BySource).Hash
               [(param_1->BySource).HashMask & (uint)(param_2->PathInSourceHash).Hash];
      uVar9 != 0xffffffff; uVar9 = (param_1->BySource).NextIndex[uVar9]) {
    uVar6 = uVar12;
    if ((int)uVar9 < (param_1->Dependencies).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_2->PathInSource).ArrayNum;
    pFVar2 = (param_2->ParentPath).AllocatorInstance.Data;
    _Str2 = (param_2->PathInSource).AllocatorInstance.Data;
    pFVar11 = (param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50;
    if (*(ulong64 *)pFVar11 == (param_2->PathInSourceHash).Hash) {
      if ((*(int *)(pFVar11 + 0x10) < 1) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((**(char **)(pFVar11 + 8) == '/') ||
          (iVar7 = FGenericPlatformStricmp::Stricmp(*(char **)(pFVar11 + 0x18),(char *)pFVar2),
          iVar7 == 0)) &&
         (iVar8 = strncmp(*(char **)(pFVar11 + 8),(char *)_Str2,(longlong)(iVar8 + -1)), iVar8 == 0)
         ) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(char **)(pFVar11 + 0x28),
                           (char *)(param_2->ResultPath).AllocatorInstance.Data);
        if (iVar8 == 0) {
          return;
        }
        bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("!FCStringAnsi::Stricmp(TestDependency.ResultPath.GetData(), Dependency.ResultPath.GetData())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0xb7c,L"");
        if (!bVar5) {
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pFVar3 = (FShaderPreprocessDependency *)(param_1->Dependencies).AllocatorInstance.Data;
  if (((pFVar3 <= param_2) && (param_2 < pFVar3 + (param_1->Dependencies).ArrayMax)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = (param_1->Dependencies).ArrayNum;
  piVar1 = &(param_1->Dependencies).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)param_1,piVar1);
  }
  (param_1->Dependencies).ArrayNum = uVar9 + 1;
  FShaderPreprocessDependency::FShaderPreprocessDependency
            ((FShaderPreprocessDependency *)
             ((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50),param_2)
  ;
  FHashTable::Add(&param_1->BySource,(uint)(param_2->PathInSourceHash).Hash,uVar9);
  for (uVar6 = (param_1->ByResult).Hash[(param_1->ByResult).HashMask & param_2->ResultPathHash];
      uVar6 != 0xffffffff; uVar6 = (param_1->ByResult).NextIndex[uVar6]) {
    uVar10 = uVar12;
    if ((int)uVar6 < (param_1->Dependencies).ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_1->Dependencies).AllocatorInstance.Data;
    if ((*(uint *)(pFVar2 + (longlong)(int)uVar6 * 0x50 + 0x38) == param_2->ResultPathHash) &&
       (iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(char **)(pFVar2 + (longlong)(int)uVar6 * 0x50 + 0x28),
                           (char *)(param_2->ResultPath).AllocatorInstance.Data), iVar8 == 0))
    break;
  }
  iVar8 = (param_1->Dependencies).ArrayNum;
  if (uVar6 == 0xffffffff) {
    if ((int)uVar9 < iVar8) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50 + 0x3c) =
         uVar9;
    FHashTable::Add(&param_1->ByResult,param_2->ResultPathHash,uVar9);
  }
  else {
    if ((int)uVar9 < iVar8) {
      uVar12 = ~uVar9 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)((param_1->Dependencies).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50 + 0x3c) =
         uVar6;
  }
  return;
}

// AddShaderSourceDirectoryMapping @ 145e4b4e0

void __cdecl AddShaderSourceDirectoryMapping(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0xfe8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AddShaderSourceFileEntry @ 145e4b520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
AddShaderSourceFileEntry
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          EShaderPlatform param_3,FName *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iVar5;
  bVar4 = CheckVirtualShaderFilePath
                    (&local_18,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  pwVar6 = L"";
  if (!bVar4) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("CheckVirtualShaderFilePath(VirtualFilePath)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x890,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(param_1,param_2);
  if (!bVar4) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= param_2) && (param_2 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
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
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_2
                    );
    if ((param_2->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    InternalGetShaderIncludes(pwVar6,pwVar6,param_1,param_3,100,false,param_4,true);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddShaderSourceSharedVirtualDirectory @ 145e4b6b0

void __cdecl AddShaderSourceSharedVirtualDirectory(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x100f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// AllShaderSourceDirectoryMappings @ 145e4b8a0

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
AllShaderSourceDirectoryMappings(void)

{
  return &GShaderSourceDirectoryMappings;
}

// AllowDebugViewmodes @ 145e4b8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl AllowDebugViewmodes(EShaderPlatform param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarForceDebugViewModes.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_145e4b8d8;
    }
  }
  lVar3 = 0;
LAB_145e4b8d8:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 1) {
    return true;
  }
  return false;
}

// AllowDebugViewmodes @ 145e4b900

bool __cdecl AllowDebugViewmodes(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarForceDebugViewModes.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] == 1;
    }
  }
  return pTVar1->ShadowedValue[0] == 1;
}

// AllowGlobalShaderLoad @ 145e4b950

bool __cdecl AllowGlobalShaderLoad(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      pwVar1 = FCommandLine::Get();
      bNoShaderCompile = FParse::Param(pwVar1,L"NoShaderCompile");
      _Init_thread_footer(&_TSS0);
    }
  }
  if ((bNoShaderCompile == false) &&
     ((PRIVATE_GIsRunningCommandlet == false || (PRIVATE_GAllowCommandletRendering != false)))) {
    return true;
  }
  return false;
}

// AllowShaderCompiling @ 145e4b9f0

bool __cdecl AllowShaderCompiling(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (_TSS0 <= *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
     ) goto LAB_145e4ba17;
  _Init_thread_header(&_TSS0);
  if (_TSS0 != -1) goto LAB_145e4ba17;
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"NoShaderCompile");
  if (bVar1) {
LAB_145e4ba6b:
    bNoShaderCompile = true;
  }
  else {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"PrecompiledShadersOnly");
    bNoShaderCompile = false;
    if (bVar1) goto LAB_145e4ba6b;
  }
  _Init_thread_footer(&_TSS0);
LAB_145e4ba17:
  return bNoShaderCompile == false;
}

// AppendFNameAsUTF8 @ 145e4c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl AppendFNameAsUTF8(TStringBuilderBase<char> *param_1,FName *param_2)

{
  char *_Str;
  bool bVar1;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  ulong64 uVar6;
  undefined1 auStack_208 [32];
  TStringBuilderBase<wchar_t> local_1e8;
  wchar_t local_1c8 [128];
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar1 = FName::TryAppendAnsiString(param_2,param_1);
  if (!bVar1) {
    local_1e8.Base = local_1c8;
    local_1e8.CurPos = local_1c8;
    local_1e8.End = (wchar_t *)&local_c8;
    local_1e8.bIsDynamic = false;
    local_1e8.bIsExternal = false;
    FName::AppendString(param_2,&local_1e8);
    if (local_1e8.End <
        (TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *)(local_1e8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1e8,1);
    }
    iVar5 = 0;
    *local_1e8.CurPos = L'\0';
    pTVar2 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_c8,local_1e8.Base);
    _Str = pTVar2->Ptr;
    if (_Str != (char *)0x0) {
      sVar3 = strlen(_Str);
      iVar5 = (int)sVar3;
    }
    uVar6 = (ulong64)iVar5;
    if (param_1->End < param_1->CurPos + uVar6) {
      TStringBuilderBase<char>::Extend(param_1,uVar6);
    }
    if (iVar5 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,_Str,uVar6);
      param_1->CurPos = (char *)((longlong)pvVar4 + uVar6);
    }
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1e8);
  }
  return;
}

// AppendSanitizedFName @ 145e4c470

void __cdecl
AppendSanitizedFName(TStringBuilderBase<wchar_t> *param_1,FName *param_2,wchar_t param_3)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<wchar_t,int> *pTVar4;
  wchar_t *pwVar5;
  int iVar6;
  TArrayView<wchar_t,int> local_28;
  TArrayView<wchar_t,int> local_18;
  
  pwVar1 = param_1->CurPos;
  pwVar5 = param_1->Base;
  FName::AppendString(param_2,param_1);
  local_28.DataPtr = param_1->Base;
  local_28.ArrayNum = (int)((longlong)param_1->CurPos - (longlong)local_28.DataPtr >> 1);
  if ((local_28.ArrayNum < 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)((longlong)pwVar1 - (longlong)pwVar5 >> 1);
  pTVar4 = TArrayView<wchar_t,int>::Slice
                     (&local_28,&local_18,iVar6,
                      (int)((longlong)param_1->CurPos - (longlong)param_1->Base >> 1) - iVar6);
  pwVar5 = pTVar4->DataPtr;
  pwVar1 = pwVar5 + pTVar4->ArrayNum;
  for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 1) {
    if (*pwVar5 == param_3) {
      *pwVar5 = L' ';
    }
  }
  return;
}

// AppendSanitizedFNameAsUTF8 @ 145e4c540

void __cdecl
AppendSanitizedFNameAsUTF8(TStringBuilderBase<char> *param_1,FName *param_2,char param_3)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<char,int> *pTVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  TArrayView<char,int> local_28;
  TArrayView<char,int> local_18;
  
  iVar6 = *(int *)&param_1->CurPos - *(int *)&param_1->Base;
  AppendFNameAsUTF8(param_1,param_2);
  local_28.DataPtr = param_1->Base;
  local_28.ArrayNum = *(int *)&param_1->CurPos - (int)local_28.DataPtr;
  if ((local_28.ArrayNum < 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar3 = TArrayView<char,int>::Slice
                     (&local_28,&local_18,iVar6,
                      (*(int *)&param_1->CurPos - *(int *)&param_1->Base) - iVar6);
  pcVar4 = pTVar3->DataPtr;
  pcVar5 = pcVar4 + pTVar3->ArrayNum;
  for (; pcVar4 != pcVar5; pcVar4 = pcVar4 + 1) {
    if (*pcVar4 == param_3) {
      *pcVar4 = ' ';
    }
  }
  return;
}

// CheckShaderHashCacheInclude @ 145e4cfb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl CheckShaderHashCacheInclude(FString *param_1,EShaderPlatform param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  bVar2 = FShaderHashCache::ShouldIgnoreInclude(&GShaderHashCache,param_1,param_2);
  if ((bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!bIgnoreInclude",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0xdc0,
                         L"Shader compiler is trying to include %s, which is not located in IShaderFormat::GetPlatformIncludeDirectory for %s."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e4d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  return;
}

// CheckVirtualShaderFilePath @ 145e4d060

bool __cdecl
CheckVirtualShaderFilePath
          (TStringView<wchar_t> *param_1,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar11 = (FScriptContainerElement *)0x0;
  bVar10 = true;
  if ((param_1->Size < 1) || (*param_1->DataPtr != L'/')) {
    pFVar3 = FString::ConstructFromPtrSize
                       ((FString *)&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pFVar6 = pFVar11;
    if (&local_78 != pFVar3) {
      pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
    FString::PrintfImpl((FString *)&local_88,
                        L"Virtual shader source file name \"%s\" should be absolute from the virtual root directory \"/\"."
                       );
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pwVar5 = local_88.DataPtr;
    local_a8.DataPtr = (wchar_t *)0x0;
    iVar1 = local_88.Size;
    local_a8.Size = iVar1;
    if (iVar1 == 0) {
      local_a8._8_8_ = local_88._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_a8,iVar1,(int *)&local_a8.field_0xc);
      memcpy(local_a8.DataPtr,pwVar5,(longlong)iVar1 * 2);
    }
    ReportVirtualShaderFilePathError(param_2,(FString *)&local_a8);
    bVar10 = false;
    if (local_88.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_88.DataPtr);
    }
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.Size = param_1->Size;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.Size = 2;
  local_88.DataPtr = L"..";
  iVar1 = UE::String::FindFirst(&local_a8,&local_88,CaseSensitive);
  if (iVar1 != -1) {
    pFVar3 = FString::ConstructFromPtrSize
                       ((FString *)&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    pFVar6 = pFVar11;
    if (&local_68 != pFVar3) {
      pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
    FString::PrintfImpl((FString *)&local_88,
                        L"Virtual shader source file name \"%s\" should have relative directories (\"../\") collapsed."
                       );
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    pwVar5 = local_88.DataPtr;
    local_a8.DataPtr = (wchar_t *)0x0;
    iVar1 = local_88.Size;
    local_a8.Size = iVar1;
    if (iVar1 == 0) {
      local_a8._8_8_ = local_88._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_a8,iVar1,(int *)&local_a8.field_0xc);
      memcpy(local_a8.DataPtr,pwVar5,(longlong)iVar1 * 2);
    }
    ReportVirtualShaderFilePathError(param_2,(FString *)&local_a8);
    bVar10 = false;
    if (local_88.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_88.DataPtr);
    }
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8._8_8_ = *(undefined8 *)&param_1->Size;
  local_88.Size = 1;
  local_88.DataPtr = L"\\";
  iVar1 = UE::String::FindFirst(&local_a8,&local_88,CaseSensitive);
  if (iVar1 != -1) {
    pFVar3 = FString::ConstructFromPtrSize
                       ((FString *)&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (&local_58 != pFVar3) {
      pFVar11 = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_a8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_a8.DataPtr);
    }
    FString::PrintfImpl((FString *)&local_88,
                        L"Backslashes are not permitted in virtual shader source file name \"%s\"");
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    pwVar5 = local_88.DataPtr;
    local_a8.DataPtr = (wchar_t *)0x0;
    iVar1 = local_88.Size;
    local_a8.Size = iVar1;
    if (iVar1 == 0) {
      local_a8._8_8_ = local_88._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_a8,iVar1,(int *)&local_a8.field_0xc);
      memcpy(local_a8.DataPtr,pwVar5,(longlong)iVar1 * 2);
    }
    ReportVirtualShaderFilePathError(param_2,(FString *)&local_a8);
    bVar10 = false;
    if (local_88.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_88.DataPtr);
    }
  }
  FPathViews::GetExtension(&local_98,param_1,false);
  pFVar11 = GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data +
            (longlong)GShaderSourceSharedVirtualDirectories.ArrayNum * 0x10;
  for (FVar8 = GShaderSourceSharedVirtualDirectories.AllocatorInstance; FVar8.Data != pFVar11;
      FVar8.Data = FVar8.Data + 0x10) {
    iVar1 = *(int *)(FVar8.Data + 8) + -1;
    if (*(int *)(FVar8.Data + 8) == 0) {
      iVar1 = 0;
    }
    iVar2 = param_1->Size;
    if (iVar1 < param_1->Size) {
      iVar2 = iVar1;
    }
    iVar9 = 0;
    if (0 < iVar2) {
      iVar9 = iVar2;
    }
    if ((iVar1 == iVar9) &&
       ((((iVar1 == 0 || (iVar9 == 0)) ||
         (iVar2 = FGenericPlatformStricmp::Strnicmp
                            (*(wchar_t **)FVar8.Data,param_1->DataPtr,(longlong)iVar9), iVar2 == 0))
        && (iVar1 == iVar9)))) {
      if ((local_98.Size == 1) &&
         (iVar1 = FGenericPlatformStricmp::Strnicmp(local_98.DataPtr,L"h",1), iVar1 == 0)) {
        return bVar10;
      }
      pFVar3 = FString::ConstructFromPtrSize
                         ((FString *)&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
      pFVar11 = (FScriptContainerElement *)0x0;
      if (&local_48 != pFVar3) {
        pFVar11 = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      if (local_a8.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_a8.DataPtr);
      }
      pwVar5 = 
      L"Extension on virtual shader source file name \"%s\" is wrong. Only .h is allowed for shared headers that are shared between C++ and shader code."
      ;
      goto LAB_145e4d543;
    }
  }
  iVar1 = param_1->Size;
  if (0xc < param_1->Size) {
    iVar1 = 0xc;
  }
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if ((iVar2 == 0xc) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(L"/ThirdParty/",param_1->DataPtr,0xc), iVar1 == 0))
  {
    return bVar10;
  }
  if (local_98.Size == 0) goto LAB_145e4d503;
  uVar7 = (ulong64)local_98.Size;
  iVar1 = FGenericPlatformStricmp::Strnicmp(local_98.DataPtr,L"usf",uVar7);
  if ((iVar1 != 0) || (L"usf"[uVar7] != L'\0')) {
    if (local_98.Size == 0) goto LAB_145e4d503;
    iVar1 = FGenericPlatformStricmp::Strnicmp(local_98.DataPtr,L"ush",(longlong)local_98.Size);
    if ((iVar1 != 0) || (L"ush"[local_98.Size] != L'\0')) goto LAB_145e4d503;
  }
  iVar1 = param_1->Size;
  lVar4 = (longlong)iVar1;
  if (8 < iVar1) {
    iVar1 = 8;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar2 != 8) {
    return bVar10;
  }
  iVar1 = FGenericPlatformStricmp::Strnicmp(L".usf.usf",param_1->DataPtr + (lVar4 - iVar2),8);
  if (iVar1 != 0) {
    return bVar10;
  }
LAB_145e4d503:
  pFVar3 = FString::ConstructFromPtrSize
                     ((FString *)&local_a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_38 != pFVar3) {
    pFVar11 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_a8.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_a8.DataPtr);
  }
  pwVar5 = 
  L"Extension on virtual shader source file name \"%s\" is wrong. Only .usf or .ush allowed.";
LAB_145e4d543:
  FString::PrintfImpl((FString *)&local_88,pwVar5);
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pwVar5 = local_88.DataPtr;
  local_a8.DataPtr = (wchar_t *)0x0;
  iVar1 = local_88.Size;
  local_a8.Size = iVar1;
  if (iVar1 == 0) {
    local_a8._8_8_ = local_88._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_a8,iVar1,(int *)&local_a8.field_0xc);
    memcpy(local_a8.DataPtr,pwVar5,(longlong)iVar1 * 2);
  }
  ReportVirtualShaderFilePathError(param_2,(FString *)&local_a8);
  if (local_88.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_88.DataPtr);
  }
  return false;
}

// CompileShader @ 145e4e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
CompileShader(TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> *param_1,
             FShaderCompilerInput *param_2,FShaderCompilerOutput *param_3,FString *param_4,
             int *param_5)

{
  undefined1 auStack_858 [32];
  FShaderCompileJob local_838;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_858;
  FShaderCompileJob::FShaderCompileJob(&local_838);
  FShaderCompilerInput::operator=(&local_838.Input,param_2);
  CompileShader(param_1,&local_838,param_4,param_5);
  FShaderCompilerOutput::operator=(param_3,&local_838.Output);
  FShaderCompileJob::~FShaderCompileJob(&local_838);
  return;
}

// CompileShader @ 145e4e2d0

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
CompileShader(TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> *param_1,
             FShaderCompileJob *param_2,FString *param_3,int *param_4)

{
  int *piVar1;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar2;
  FSharedShaderCompilerEnvironment *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IShaderFormat *pIVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2093,"CompileShader",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
               ,0x82d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2093);
  }
  pIVar7 = FindShaderFormat((param_2->Input).ShaderFormat,param_1);
  if (pIVar7 == (IShaderFormat *)0x0) {
    FName::ToString(&(param_2->Input).ShaderFormat,&local_38);
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (param_2->Input).SharedEnvironment.Reference;
  if (pFVar3 != (FSharedShaderCompilerEnvironment *)0x0) {
    FShaderCompilerEnvironment::Merge
              (&(param_2->Input).Environment,(FShaderCompilerEnvironment *)&pFVar3->field_0x10);
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FInternalShaderCompilerFunctions::CompileShaderInternal
            (pIVar7,param_2,param_3,&local_a8,&local_b8,param_4);
  if (((param_2->Output).bSucceeded == false) &&
     ((1 < local_a8.Data.ArrayNum || (1 < local_b8.Data.ArrayNum)))) {
    FString::FString(&local_88,L"");
    FString::FString(&local_78,L"");
    FString::FString(&local_68,L"");
    FString::FString(&local_58,L"");
    FString::FString(&local_48,L"");
    FString::PrintfImpl(&local_98,
                        L"Exception encountered in platform compiler: %s\nException Callstack:\n%s")
    ;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pTVar2 = &(param_2->Output).Errors;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_98.Data.ArrayNum;
    local_68.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    if (((pFVar8 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar8 + (longlong)(param_2->Output).Errors.ArrayMax * 0x50)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (param_2->Output).Errors.ArrayNum;
    piVar1 = &(param_2->Output).Errors.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_2->Output).Errors.ArrayNum = iVar6 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x50;
    FString::FString((FString *)pFVar8,&local_88);
    FString::FString((FString *)(pFVar8 + 0x10),&local_78);
    FString::FString((FString *)(pFVar8 + 0x20),&local_68);
    FString::FString((FString *)(pFVar8 + 0x30),&local_58);
    FString::FString((FString *)(pFVar8 + 0x40),&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  *(byte *)&param_2->_padding_ =
       (byte)param_2->_padding_ ^
       ((param_2->Output).bSucceeded * '\x02' ^ (byte)param_2->_padding_) & 2;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CompileShaderPipeline @ 145e4e990

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
CompileShaderPipeline
          (TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FShaderPipelineCompileJob *param_2,FString *param_3,int *param_4)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FShaderCompileJob *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FShaderCompileJob *pFVar15;
  FShaderCompileJob *pFVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  
  if (((param_2->StageJobs).ArrayNum < 1) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("PipelineJob->StageJobs.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x84b,L"Pipeline %s has zero jobs!"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = 0;
  bVar9 = true;
  if (0 < (param_2->StageJobs).ArrayNum) {
    lVar14 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (param_2->StageJobs).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)((param_2->StageJobs).AllocatorInstance.Data + lVar14);
      lVar11 = 0;
      if (*(char *)(lVar5 + 0x30) == '\0') {
        lVar11 = lVar5;
      }
      uVar12 = *(uint *)(lVar11 + 0xd8) & 0xf;
      if ((uVar12 != 0) && (uVar12 != 3)) {
        bVar9 = false;
        break;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (param_2->StageJobs).ArrayNum);
  }
  uVar13 = 0;
  if (0 < (param_2->StageJobs).ArrayNum) {
    lVar14 = 0;
    pFVar15 = (FShaderCompileJob *)0x0;
    do {
      uVar12 = 0;
      if ((int)uVar13 < (param_2->StageJobs).ArrayNum) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = *(FShaderCompileJob **)((param_2->StageJobs).AllocatorInstance.Data + lVar14);
      pFVar16 = (FShaderCompileJob *)0x0;
      if ((char)pFVar6->_padding_ == '\0') {
        pFVar16 = pFVar6;
      }
      if (((pFVar15 == (FShaderCompileJob *)0x0) &&
          ((pFVar16->Input).bIncludeUsedOutputs = false,
          (pFVar16->Input).bCompilingForShaderPipeline != true)) &&
         (bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("CurrentJob->Input.bCompilingForShaderPipeline == true",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                              ,0x866,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((bVar9) && (pFVar15 != (FShaderCompileJob *)0x0)) &&
         ((pFVar15->Output).bSupportsQueryingUsedAttributes != false)) {
        pTVar17 = &(pFVar15->Output).UsedAttributes;
        (pFVar16->Input).bCompilingForShaderPipeline = true;
        (pFVar16->Input).bIncludeUsedOutputs = true;
        pTVar2 = &(pFVar16->Input).UsedOutputs;
        if (pTVar2 != pTVar17) {
          DestructItems<FString,int>
                    ((FString *)(pTVar2->AllocatorInstance).Data,
                     (pFVar16->Input).UsedOutputs.ArrayNum);
          iVar3 = (pFVar15->Output).UsedAttributes.ArrayNum;
          piVar1 = &(pFVar16->Input).UsedOutputs.ArrayMax;
          pFVar7 = (pTVar17->AllocatorInstance).Data;
          iVar4 = *piVar1;
          (pFVar16->Input).UsedOutputs.ArrayNum = iVar3;
          if ((iVar3 == 0) && (iVar4 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
            ConstructItems<FString,FString,int>
                      ((pTVar2->AllocatorInstance).Data,(FString *)pFVar7,iVar3);
          }
        }
      }
      CompileShader(param_1,pFVar16,param_3,param_4);
      bVar10 = (pFVar16->Output).bSucceeded;
      uVar13 = uVar13 + 1;
      *(byte *)&pFVar16->_padding_ =
           (byte)pFVar16->_padding_ ^ (bVar10 * '\x02' ^ (byte)pFVar16->_padding_) & 2;
      iVar3 = (param_2->StageJobs).ArrayNum;
      if (bVar10 == false) {
        if (iVar3 <= (int)uVar13) {
          return;
        }
        lVar14 = (longlong)(int)uVar13 * 8;
        while( true ) {
          uVar12 = 0;
          if ((int)uVar13 < (param_2->StageJobs).ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) break;
          uVar13 = uVar13 + 1;
          lVar5 = *(longlong *)((param_2->StageJobs).AllocatorInstance.Data + lVar14);
          lVar14 = lVar14 + 8;
          *(undefined4 *)(lVar5 + 0x640) = *(undefined4 *)(lVar5 + 0xd8);
          *(undefined8 *)(lVar5 + 0x6c4) = *(undefined8 *)(lVar5 + 0x1a8);
          *(undefined8 *)(lVar5 + 0x6cc) = *(undefined8 *)(lVar5 + 0x1b0);
          *(undefined8 *)(lVar5 + 0x6d4) = *(undefined8 *)(lVar5 + 0x1b8);
          *(undefined8 *)(lVar5 + 0x6dc) = *(undefined8 *)(lVar5 + 0x1c0);
          if ((param_2->StageJobs).ArrayNum <= (int)uVar13) {
            return;
          }
        }
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar14 = lVar14 + 8;
      pFVar15 = pFVar16;
    } while ((int)uVar13 < iVar3);
  }
  *(byte *)&param_2->_padding_ = (byte)param_2->_padding_ | 2;
  return;
}

// ConditionalPreprocessShader @ 145e4f950

/* WARNING: Removing unreachable block (ram,0x000145e68374) */
/* WARNING: Removing unreachable block (ram,0x000145e68382) */
/* WARNING: Removing unreachable block (ram,0x000145e68390) */
/* WARNING: Removing unreachable block (ram,0x000145e6839e) */
/* WARNING: Removing unreachable block (ram,0x000145e683ac) */
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

bool __cdecl ConditionalPreprocessShader(FShaderCommonCompileJob *param_1)

{
  FParameters *pFVar1;
  int iVar2;
  FParameters FVar3;
  code *pcVar4;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IShaderFormat *pIVar10;
  FScriptContainerElement *pFVar11;
  FShaderCompileJob *pFVar12;
  FParameters *pFVar13;
  undefined1 auStackX_8 [8];
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FScriptContainerElement *pFStack_58;
  undefined8 uStack_50;
  FString FStack_48;
  FString FStack_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    TargetPlatformManager = GetTargetPlatformManagerRef();
    _Init_thread_footer(&_TSS0);
  }
  pFVar12 = (FShaderCompileJob *)0x0;
  if (param_1->Type == Single) {
    pFVar12 = (FShaderCompileJob *)param_1;
  }
  if (pFVar12 == (FShaderCompileJob *)0x0) {
    pFVar12 = (FShaderCompileJob *)0x0;
    if (param_1->Type == Pipeline) {
      pFVar12 = (FShaderCompileJob *)param_1;
    }
    if (pFVar12 == (FShaderCompileJob *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x81e,L"Unknown shader compile job type or bad job pointer");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      bVar6 = false;
    }
    else {
      pFVar13 = (pFVar12->ShaderParameters).Object;
      bVar6 = false;
      iVar2 = *(int *)&(pFVar12->ShaderParameters).SharedReferenceCount.ReferenceController;
      pFVar1 = pFVar13 + iVar2;
      while( true ) {
        if (*(int *)&(pFVar12->ShaderParameters).SharedReferenceCount.ReferenceController != iVar2)
        {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        if (pFVar13 == pFVar1) break;
        FVar3 = *pFVar13;
        pIVar10 = (IShaderFormat *)
                  (**(code **)((longlong)*TargetPlatformManager + 0x50))
                            (TargetPlatformManager,*(FName *)((longlong)FVar3 + 0xdc));
        if (bVar6) {
          switch(*(byte *)&(((FShaderCompilerInput *)((longlong)FVar3 + 0xd8))->Target).field0_0x0 &
                 0xf) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
          }
          FString::PrintfImpl(&FStack_88,
                              L"Preprocessing %s stage skipped due to earlier stage preprocessing failure."
                             );
          pTVar5 = (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)
                   ((longlong)FVar3 + 0x630);
          FString::FString(&FStack_78,L"");
          FString::FString(&FStack_68,L"");
          pFStack_58 = FStack_88.Data.AllocatorInstance.Data;
          uStack_50._0_4_ = FStack_88.Data.ArrayNum;
          uStack_50._4_4_ = FStack_88.Data.ArrayMax;
          FStack_88.Data.ArrayNum = 0;
          FStack_88.Data.ArrayMax = 0;
          FStack_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FString::FString(&FStack_48,L"");
          FString::FString(&FStack_38,L"");
          pFVar11 = (pTVar5->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&FStack_78) &&
              ((FScriptContainerElement *)&FStack_78 <
               pFVar11 + (longlong)*(int *)((longlong)FVar3 + 0x63c) * 0x50)) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar9 = *(int *)((longlong)FVar3 + 0x638);
          if (iVar9 == *(int *)((longlong)FVar3 + 0x63c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,(ForAnyElementType *)pTVar5,(int *)((longlong)FVar3 + 0x63c));
          }
          *(int *)((longlong)FVar3 + 0x638) = iVar9 + 1;
          pFVar11 = (pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = FStack_78.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 8) = FStack_78.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = FStack_78.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x10) = FStack_68.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x18) = FStack_68.Data.ArrayNum;
          *(int *)(pFVar11 + 0x1c) = FStack_68.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x20) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x20) = pFStack_58;
          *(int *)(pFVar11 + 0x28) = (int)uStack_50;
          *(int *)(pFVar11 + 0x2c) = uStack_50._4_4_;
          *(undefined8 *)(pFVar11 + 0x30) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x30) = FStack_48.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x38) = FStack_48.Data.ArrayNum;
          *(int *)(pFVar11 + 0x3c) = FStack_48.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x40) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x40) = FStack_38.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x48) = FStack_38.Data.ArrayNum;
          *(int *)(pFVar11 + 0x4c) = FStack_38.Data.ArrayMax;
          FStack_38.Data.ArrayNum = 0;
          FStack_38.Data.ArrayMax = 0;
          FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_48.Data.ArrayNum = 0;
          FStack_48.Data.ArrayMax = 0;
          FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uStack_50 = 0;
          pFStack_58 = (FScriptContainerElement *)0x0;
          FStack_68.Data.ArrayNum = 0;
          FStack_68.Data.ArrayMax = 0;
          FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FStack_78.Data.ArrayNum = 0;
          FStack_78.Data.ArrayMax = 0;
          FStack_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
          }
          pFVar13 = pFVar13 + 1;
        }
        else {
          bVar6 = FInternalShaderCompilerFunctions::PreprocessShaderInternal
                            (pIVar10,(FShaderCompileJob *)FVar3);
          bVar6 = !bVar6;
          pFVar13 = pFVar13 + 1;
        }
      }
      bVar6 = !bVar6;
    }
    return bVar6;
  }
  pIVar10 = (IShaderFormat *)
            (**(code **)((longlong)*TargetPlatformManager + 0x50))
                      (TargetPlatformManager,(pFVar12->Input).ShaderFormat);
  bVar6 = FInternalShaderCompilerFunctions::PreprocessShaderInternal(pIVar10,pFVar12);
  return bVar6;
}

// DiagnoseLeakingShaderMapResourceRefs @ 145e51f10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DiagnoseLeakingShaderMapResourceRefs(FShaderMapResource_SharedCode *param_1)

{
  FRHIShaderLibrary *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FShaderLibrariesCollection::GatherShaderMapResourceReferences
            (FShaderLibrariesCollection::Impl,param_1,&local_48);
  iVar2 = local_48.ArrayNum;
  pFVar5 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FVar3.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar3.Data == pFVar5) break;
    if (1 < local_28.Data.ArrayNum) {
      FString::AppendChars(&local_28,L", ",2);
    }
    iVar6 = *(int *)(FVar3.Data + 8) + -1;
    if (*(int *)(FVar3.Data + 8) == 0) {
      iVar6 = 0;
    }
    FString::AppendChars(&local_28,*(wchar_t **)FVar3.Data,iVar6);
    FVar3.Data = FVar3.Data + 0x10;
  }
  if ((1 < local_28.Data.ArrayNum) && (2 < (byte)LogShaderLibrary._0_1_)) {
    pFVar1 = (param_1->LibraryInstance->Library).Reference;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (pFVar1->LibraryName).Data.ArrayNum;
    lVar4 = (longlong)local_30;
    pFVar5 = (pFVar1->LibraryName).Data.AllocatorInstance.Data;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,pFVar5,lVar4 * 2);
    }
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// DumpShaderCompileJobArtifact @ 145e52860

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

void __cdecl DumpShaderCompileJobArtifact(FShaderCompileJob *param_1,wchar_t *param_2)

{
  size_t sVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  ForAnyElementType FVar4;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  FShaderCompilerInput::GetOrCreateShaderDebugInfoPath(&param_1->Input,&local_38);
  local_10 = 0;
  local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  local_28.Size = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_28.Size = 0;
  }
  local_18 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_10 = (undefined4)sVar1;
  }
  FPaths::CombineInternal(&local_48,&local_28,2);
  pIVar2 = IFileManager::Get();
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,FVar4.Data,0);
  if (pFVar3 != (FArchive *)0x0) {
    FShaderCompileJob::SerializeWorkerInput(param_1,pFVar3);
    FShaderCompileJob::SerializeWorkerOutputInner(param_1,pFVar3,true);
    (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ExceptionCodeToString @ 145e52df0

bool __cdecl ExceptionCodeToString(ulong param_1,FString *param_2)

{
  if (param_1 < 0xc0000006) {
    if (param_1 == 0xc0000005) {
      FString::operator=(param_2,L"EXCEPTION_ACCESS_VIOLATION");
      return true;
    }
    if (param_1 == 0x80000001) {
      FString::operator=(param_2,L"EXCEPTION_GUARD_PAGE");
      return true;
    }
    if (param_1 == 0x80000002) {
      FString::operator=(param_2,L"EXCEPTION_DATATYPE_MISALIGNMENT");
      return true;
    }
    if (param_1 == 0x80000003) {
      FString::operator=(param_2,L"EXCEPTION_BREAKPOINT");
      return true;
    }
    if (param_1 == 0x80000004) {
      FString::operator=(param_2,L"EXCEPTION_SINGLE_STEP");
      return true;
    }
    if (param_1 == 0x80000029) {
      FString::operator=(param_2,L"STATUS_UNWIND_CONSOLIDATE");
      return true;
    }
  }
  else if (param_1 < 0xe06d7364) {
    if (param_1 == 0xe06d7363) {
      FString::operator=(param_2,L"CPP_EXCEPTION");
      return true;
    }
    switch(param_1) {
    case 0xc0000006:
      FString::operator=(param_2,L"EXCEPTION_IN_PAGE_ERROR");
      return true;
    case 0xc0000008:
      FString::operator=(param_2,L"EXCEPTION_INVALID_HANDLE");
      return true;
    case 0xc000001d:
      FString::operator=(param_2,L"EXCEPTION_ILLEGAL_INSTRUCTION");
      return true;
    case 0xc0000025:
      FString::operator=(param_2,L"EXCEPTION_NONCONTINUABLE_EXCEPTION");
      return true;
    case 0xc0000026:
      FString::operator=(param_2,L"EXCEPTION_INVALID_DISPOSITION");
      return true;
    case 0xc000008c:
      FString::operator=(param_2,L"EXCEPTION_ARRAY_BOUNDS_EXCEEDED");
      return true;
    case 0xc000008d:
      FString::operator=(param_2,L"EXCEPTION_FLT_DENORMAL_OPERAND");
      return true;
    case 0xc000008e:
      FString::operator=(param_2,L"EXCEPTION_FLT_DIVIDE_BY_ZERO");
      return true;
    case 0xc000008f:
      FString::operator=(param_2,L"EXCEPTION_FLT_INEXACT_RESULT");
      return true;
    case 0xc0000090:
      FString::operator=(param_2,L"EXCEPTION_FLT_INVALID_OPERATION");
      return true;
    case 0xc0000091:
      FString::operator=(param_2,L"EXCEPTION_FLT_OVERFLOW");
      return true;
    case 0xc0000092:
      FString::operator=(param_2,L"EXCEPTION_FLT_STACK_CHECK");
      return true;
    case 0xc0000093:
      FString::operator=(param_2,L"EXCEPTION_FLT_UNDERFLOW");
      return true;
    case 0xc0000094:
      FString::operator=(param_2,L"EXCEPTION_INT_DIVIDE_BY_ZERO");
      return true;
    case 0xc0000095:
      FString::operator=(param_2,L"EXCEPTION_INT_OVERFLOW");
      return true;
    case 0xc0000096:
      FString::operator=(param_2,L"EXCEPTION_PRIV_INSTRUCTION");
      return true;
    case 0xc00000fd:
      FString::operator=(param_2,L"EXCEPTION_STACK_OVERFLOW");
      return true;
    }
  }
  return false;
}

// ExtractSourceLocationFromCompilerMessage @ 145e53560

bool __cdecl
ExtractSourceLocationFromCompilerMessage
          (FString *param_1,FString *param_2,int *param_3,int *param_4,wchar_t *param_5,
          wchar_t *param_6,wchar_t *param_7)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  size_t sVar13;
  FString *pFVar14;
  int iVar15;
  int iVar16;
  wchar_t *pwVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  iVar6 = (param_1->Data).ArrayNum;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  iVar8 = 0;
  iVar6 = iVar8;
  if ((2 < iVar5) &&
     (iVar5 = iswalpha(*(wint_t *)(param_1->Data).AllocatorInstance.Data), iVar5 != 0)) {
    iVar5 = (param_1->Data).ArrayNum;
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if ((iVar7 < 2) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x3a) {
      iVar5 = (param_1->Data).ArrayNum;
      iVar7 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar7 = iVar8;
      }
      if ((iVar7 < 3) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((*(short *)((param_1->Data).AllocatorInstance.Data + 4) == 0x2f) ||
         (pwVar9 = FString::operator[](param_1,2), *pwVar9 == L'\\')) {
        iVar6 = 3;
      }
    }
  }
  sVar10 = wcslen(param_5);
  if (param_5 != (wchar_t *)0x0) {
    sVar11 = wcslen(param_5);
    iVar5 = FString::Find(param_1,param_5,(int)sVar11,IgnoreCase,FromStart,iVar6);
    if ((iVar5 != -1) && (iVar5 != iVar6)) {
      iVar6 = (param_1->Data).ArrayNum;
      iVar18 = iVar5 + (int)sVar10;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = iVar8;
      }
      if (iVar18 < iVar7) {
        if ((iVar18 < 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = iswdigit(*(wint_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar18 * 2))
        ;
        if ((iVar6 != 0) && (sVar11 = wcslen(param_6), param_6 != (wchar_t *)0x0)) {
          sVar12 = wcslen(param_6);
          iVar6 = FString::Find(param_1,param_6,(int)sVar12,IgnoreCase,FromStart,iVar18);
          if (iVar6 != -1) {
            iVar7 = (param_1->Data).ArrayNum;
            iVar20 = (int)sVar11 + iVar6;
            iVar15 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar15 = 0;
            }
            if (iVar20 < iVar15) {
              pwVar9 = FString::operator[](param_1,iVar20);
              iVar7 = iswdigit(*pwVar9);
              if ((iVar7 != 0) && (sVar12 = wcslen(param_7), param_7 != (wchar_t *)0x0)) {
                sVar13 = wcslen(param_7);
                iVar7 = FString::Find(param_1,param_7,(int)sVar13,IgnoreCase,FromStart,iVar20);
                if (iVar7 != -1) {
                  iVar15 = (param_1->Data).ArrayNum;
                  iVar16 = iVar15 + -1;
                  if (iVar15 == 0) {
                    iVar16 = 0;
                  }
                  if (iVar7 < iVar16) {
                    pwVar9 = L"";
                    if (iVar5 < iVar16) {
                      iVar16 = iVar5;
                    }
                    iVar19 = iVar8;
                    if (0 < iVar16) {
                      iVar19 = iVar16;
                    }
                    if (iVar15 == 0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                    }
                    FString::ConstructFromPtrSize(&local_90,pwVar17,iVar19);
                    if (param_2 != &local_90) {
                      pFVar1 = (param_2->Data).AllocatorInstance.Data;
                      if (pFVar1 != (FScriptContainerElement *)0x0) {
                        FMemory::Free(pFVar1);
                      }
                      (param_2->Data).AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
                      (param_2->Data).ArrayNum = local_90.Data.ArrayNum;
                      (param_2->Data).ArrayMax = local_90.Data.ArrayMax;
                      local_90.Data.ArrayNum = 0;
                      local_90.Data.ArrayMax = 0;
                      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    }
                    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_90.Data.AllocatorInstance.Data);
                    }
                    pFVar14 = FString::Mid(param_1,&local_70,iVar18,(iVar6 - iVar5) - (int)sVar10);
                    if ((pFVar14->Data).ArrayNum == 0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                    }
                    iVar5 = _wtoi(pwVar17);
                    *param_3 = iVar5;
                    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_70.Data.AllocatorInstance.Data);
                    }
                    pFVar14 = FString::Mid(param_1,local_60,iVar20,(iVar7 - iVar6) - (int)sVar11);
                    if ((pFVar14->Data).ArrayNum == 0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                    }
                    iVar6 = _wtoi(pwVar17);
                    *param_4 = iVar6;
                    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                    }
                    iVar6 = (param_1->Data).ArrayNum;
                    iVar5 = iVar6 + -1;
                    if (iVar6 == 0) {
                      iVar5 = 0;
                    }
                    local_98 = (int)sVar12;
                    local_98 = (iVar5 - iVar7) - local_98;
                    if (iVar6 != 0) {
                      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
                    }
                    iVar6 = iVar5;
                    if (local_98 < iVar5) {
                      iVar6 = local_98;
                    }
                    if (0 < iVar6) {
                      iVar8 = iVar6;
                    }
                    FString::FString(&local_80,
                                     (wchar_t *)
                                     ((longlong)pwVar9 + ((longlong)iVar5 - (longlong)iVar8) * 2));
                    if (param_1 != &local_80) {
                      pFVar1 = (param_1->Data).AllocatorInstance.Data;
                      if (pFVar1 != (FScriptContainerElement *)0x0) {
                        FMemory::Free(pFVar1);
                      }
                      (param_1->Data).AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
                      (param_1->Data).ArrayNum = local_80.Data.ArrayNum;
                      (param_1->Data).ArrayMax = local_80.Data.ArrayMax;
                      local_80.Data.ArrayNum = 0;
                      local_80.Data.ArrayMax = 0;
                      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    }
                    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_80.Data.AllocatorInstance.Data);
                    }
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// FShaderCodeLibraryPluginMountedCallback @ 145e53d20

void __cdecl FShaderCodeLibraryPluginMountedCallback(IPlugin *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    pFVar4 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
    if (UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._8_4_ !=
        UE::ShaderLibrary::Private::PluginsToIgnoreOnMount.Elements._52_4_) {
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar5 = L"";
        iVar3 = 0;
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
      iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                        (&UE::ShaderLibrary::Private::PluginsToIgnoreOnMount,uVar2,pFVar4);
      if (iVar3 != 0) {
        return;
      }
    }
    FShaderCodeLibrary::OpenPluginShaderLibrary(param_1,true);
  }
  return;
}

// FShaderCodeLibraryPluginUnmountedCallback @ 145e53e30

void __cdecl FShaderCodeLibraryPluginUnmountedCallback(IPlugin *param_1)

{
  char cVar1;
  FDeferredCleanupInterface *pFVar2;
  FString *pFVar3;
  
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x68))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (cVar1 != '\0') {
      pFVar2 = operator_new(0x18);
      if (pFVar2 != (FDeferredCleanupInterface *)0x0) {
        pFVar3 = (FString *)(**(code **)(*(longlong *)param_1 + 8))(param_1);
        *pFVar2 = (FDeferredCleanupInterface)
                  &`FShaderCodeLibraryPluginUnmountedCallback'::`2'::FShaderCodeLibraryCleanup::
                   _vftable_;
        FString::FString((FString *)(pFVar2 + 1),pFVar3);
        BeginCleanup(pFVar2);
        return;
      }
      BeginCleanup((FDeferredCleanupInterface *)0x0);
    }
  }
  return;
}

// FShaderLibraryPakFileMountedCallback @ 145e53ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FShaderLibraryPakFileMountedCallback(IPakFile *param_1)

{
  FString *pFVar1;
  FString local_48;
  FMountedPakFileInfo local_38;
  
  (**(code **)((longlong)*param_1 + 0x10))();
  if (5 < (byte)LogShaderLibrary._0_1_) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
    (**(code **)((longlong)*param_1 + 0x10))(param_1);
    (**(code **)*param_1)(param_1);
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
  }
  pFVar1 = (FString *)(**(code **)*param_1)(param_1);
  FString::FString(&local_38.PakFilename,pFVar1);
  pFVar1 = (FString *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  FString::FString(&local_38.MountPoint,pFVar1);
  local_38.ChunkId = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
  TSet<UE::ShaderLibrary::Private::FMountedPakFileInfo,DefaultKeyFuncs<UE::ShaderLibrary::Private::FMountedPakFileInfo,0>,FDefaultSetAllocator>
  ::Emplace<UE::ShaderLibrary::Private::FMountedPakFileInfo_const_&>
            (&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles,
             (FMountedPakFileInfo *)&stack0x00000008,(bool *)&local_38);
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
  if (FShaderLibrariesCollection::Impl == (FShaderLibrariesCollection *)0x0) {
    if (5 < (byte)LogShaderLibrary._0_1_) {
      FString::PrintfImpl(&local_48,L"ChunkID:%d Root:%s File:%s");
      UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FShaderLibrariesCollection::OnPakFileMounted(FShaderLibrariesCollection::Impl,&local_38);
  }
  if (local_38.MountPoint.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.MountPoint.Data.AllocatorInstance.Data);
  }
  if (local_38.PakFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.PakFilename.Data.AllocatorInstance.Data);
  }
  return;
}

// FindFirstInclude @ 145e541b0

wchar_t * __cdecl FindFirstInclude(wchar_t *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar2 = wcsstr(param_1,L"#");
  while( true ) {
    pwVar4 = pwVar2;
    if (pwVar2 == (wchar_t *)0x0) {
      return (wchar_t *)0x0;
    }
    do {
      do {
        pwVar3 = pwVar4;
        pwVar4 = pwVar3 + 1;
      } while (*pwVar4 == L' ');
    } while (*pwVar4 == L'\t');
    iVar1 = FGenericPlatformStricmp::Strnicmp(pwVar4,L"include",7);
    pwVar3 = pwVar3 + 8;
    if (iVar1 != 0) {
      pwVar3 = pwVar4;
    }
    if ((*pwVar3 == L' ') || (*pwVar3 == L'\t')) break;
    if (*pwVar2 == L'\0') {
      return (wchar_t *)0x0;
    }
    pwVar2 = wcsstr(pwVar2 + 1,L"#");
  }
  return pwVar2;
}

// FindShaderFormat @ 145e54880

IShaderFormat * __cdecl
FindShaderFormat(FName param_1,TArray<IShaderFormat_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IShaderFormat *pIVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  void *local_28;
  undefined8 local_20;
  ulonglong uVar9;
  
  iVar10 = param_2->ArrayNum;
  uVar6 = 0;
  uVar7 = uVar6;
  uVar12 = uVar6;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar7;
      local_28 = (void *)0x0;
      local_20 = 0;
      uVar4 = 0;
      if ((int)uVar11 < iVar10) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IShaderFormat *)(*pcVar2)();
        return pIVar5;
      }
      plVar1 = *(longlong **)((param_2->AllocatorInstance).Data + uVar12);
      (**(code **)(*plVar1 + 8))(plVar1,&local_28);
      uVar7 = uVar6;
      uVar9 = uVar6;
      iVar10 = (int)local_20;
      if (0 < (int)local_20) {
        do {
          uVar8 = (uint)uVar9;
          uVar4 = 0;
          if ((int)uVar8 < iVar10) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pIVar5 = (IShaderFormat *)(*pcVar2)();
              return pIVar5;
            }
            iVar10 = (int)local_20;
          }
          if (*(FName *)(uVar7 + (longlong)local_28) == param_1) {
            uVar4 = 0;
            if ((int)uVar11 < param_2->ArrayNum) {
              uVar4 = ~uVar11 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pIVar5 = (IShaderFormat *)(*pcVar2)();
              return pIVar5;
            }
            pIVar5 = *(IShaderFormat **)
                      ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8);
            if (local_28 == (void *)0x0) {
              return pIVar5;
            }
            FMemory::Free(local_28);
            return pIVar5;
          }
          uVar7 = uVar7 + 8;
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((int)(uVar8 + 1) < iVar10);
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      iVar10 = param_2->ArrayNum;
      uVar7 = (ulonglong)(uVar11 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar11 + 1) < iVar10);
  }
  return (IShaderFormat *)0x0;
}

// FixupShaderFilePath @ 145e55420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FixupShaderFilePath(FString *param_1,EShaderPlatform param_2,FName *param_3)

{
  ReplaceVirtualFilePathForShaderPlatform(param_1,param_2);
  ReplaceVirtualFilePathForShaderAutogen(param_1,param_2,param_3);
  return;
}

// FixupUnsanitizedNames @ 145e55460

void __cdecl
FixupUnsanitizedNames(FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *this;
  int iVar4;
  ForAnyElementType FVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  FString local_38;
  FString local_28;
  
  local_38.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
    iVar6 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    iVar6 = local_38.Data.ArrayNum;
  }
  for (FVar5.Data = local_38.Data.AllocatorInstance.Data;
      FVar5.Data != local_38.Data.AllocatorInstance.Data + (longlong)iVar6 * 2;
      FVar5.Data = FVar5.Data + 2) {
    if (*(short *)FVar5.Data == 0x28) {
      iVar8 = (int)((longlong)FVar5.Data - (longlong)local_38.Data.AllocatorInstance.Data >> 1);
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
      if (iVar8 != -1) goto LAB_145e55518;
      break;
    }
  }
  goto LAB_145e556f1;
joined_r0x000145e55571:
  if (iVar4 <= lVar7) goto LAB_145e55642;
  if (iVar8 < 0) {
code_r0x000145e555a7:
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    iVar6 = local_38.Data.ArrayNum;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    if (iVar3 <= iVar8) goto code_r0x000145e555a7;
  }
  if (*(short *)(local_38.Data.AllocatorInstance.Data + lVar7 * 2) == 0x2c) {
    if (iVar8 < 0) {
code_r0x000145e555ff:
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
      if (iVar3 <= iVar8) goto code_r0x000145e555ff;
    }
    *(undefined2 *)(local_38.Data.AllocatorInstance.Data + lVar7 * 2) = 0x20;
    iVar6 = local_38.Data.ArrayNum;
  }
  iVar8 = iVar8 + 1;
  lVar7 = lVar7 + 1;
  goto joined_r0x000145e55571;
LAB_145e55642:
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  this = FString::TrimStartAndEnd(&local_38,&local_28);
  FString::ParseIntoArray(this,param_2,L",",false);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((param_2->ArrayNum != 0xb) && (param_2->ArrayNum != 0xc)) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("OutFields.Num() == 11 || OutFields.Num() == 12",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                         ,0x265,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  goto LAB_145e556f1;
  while (FVar5.Data = FVar5.Data + 2,
        FVar5.Data != local_38.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) {
LAB_145e55518:
    if (*(short *)FVar5.Data == 0x29) {
      iVar4 = (int)((longlong)FVar5.Data - (longlong)local_38.Data.AllocatorInstance.Data >> 1);
      if ((((iVar4 != -1) && (iVar8 < iVar4)) && (-1 < iVar8)) && (-1 < iVar4)) {
        iVar8 = iVar8 + 1;
        lVar7 = (longlong)iVar8;
        goto joined_r0x000145e55571;
      }
      break;
    }
  }
LAB_145e556f1:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// FlushShaderFileCache @ 145e55730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FlushShaderFileCache(void)

{
  int iVar1;
  code *pcVar2;
  TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  *pTVar3;
  bool bVar4;
  FShaderHashCache *pFVar5;
  undefined1 *this;
  TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  *SRWLock;
  
  if (4 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  pFVar5 = &GShaderHashCache;
  do {
    TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
             *)&pFVar5->Platforms[0].ShaderHashCache);
    pFVar5 = (FShaderHashCache *)(pFVar5->Platforms + 1);
  } while (pFVar5 != (FShaderHashCache *)0x1551949f0);
  ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  SRWLock = &GShaderFileCache;
  pTVar3 = &GShaderFileCache;
  do {
    this = &pTVar3->field_0x8;
    if ((SRWLock ==
         (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
          *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    iVar1 = *(int *)(this + 0x48);
    if (1 >= iVar1) {
      TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
    if (*(int *)(this + 0xc) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)this,0,(int *)(this + 0xc));
    }
    *(undefined4 *)(this + 0x30) = 0xffffffff;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    if ((*(int *)(this + 0x2c) < 0) || (0x80 < *(int *)(this + 0x2c))) {
      *(undefined4 *)(this + 0x2c) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(this + 0x10),0);
    }
    if (1 < iVar1) {
      *(undefined4 *)(this + 0x48) = 1;
      TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
                *)this);
    }
    if (SRWLock !=
        (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
         *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    SRWLock = (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
               *)&SRWLock->field_0x58;
    pTVar3 = (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)(this + 0x50);
  } while (SRWLock !=
           (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)&GSCWErrorCode);
  if (4 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  return;
}

// GetAllVirtualShaderSourcePaths @ 145e563d0

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
GetAllVirtualShaderSourcePaths
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,EShaderPlatform param_2,
          FName *param_3)

{
  TLinkedList<FVertexFactoryType_*> *pTVar1;
  FVertexFactoryType *pFVar2;
  TLinkedList<FShaderType_*> *pTVar3;
  ForAnyElementType FVar4;
  TLinkedList<FVertexFactoryType_*> **ppTVar5;
  FString *pFVar6;
  TLinkedList<FShaderType_*> **ppTVar7;
  wchar_t *pwVar8;
  int iVar9;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ppTVar5 = FVertexFactoryType::GetTypeList();
  for (pTVar1 = *ppTVar5; pTVar1 != (TLinkedList<FVertexFactoryType_*> *)0x0;
      pTVar1 = (TLinkedList<FVertexFactoryType_*> *)pTVar1->_padding_) {
    pFVar2 = pTVar1->Element;
    if (pFVar2 != (FVertexFactoryType *)0x0) {
      FString::FString(&local_48,pFVar2->ShaderFilename);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = local_48.Data.ArrayNum;
      local_58.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_58,iVar9,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
      }
      AddShaderSourceFileEntry(param_1,&local_58,param_2,param_3);
      if ((pFVar2->Flags & IncludesFwdShader) != None) {
        if ((pFVar2->ShaderFwdFilename).Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar2->ShaderFwdFilename).Data.AllocatorInstance.Data;
        }
        pFVar6 = FString::FString(&local_38,pwVar8);
        AddShaderSourceFileEntry(param_1,pFVar6,param_2,param_3);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  ppTVar7 = FShaderType::GetTypeList();
  for (pTVar3 = *ppTVar7; pTVar3 != (TLinkedList<FShaderType_*> *)0x0;
      pTVar3 = (TLinkedList<FShaderType_*> *)pTVar3->_padding_) {
    if (pTVar3->Element != (FShaderType *)0x0) {
      FString::FString(&local_48,pTVar3->Element->SourceFilename);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = local_48.Data.ArrayNum;
      local_58.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_58,iVar9,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,FVar4.Data,(longlong)iVar9 * 2);
      }
      AddShaderSourceFileEntry(param_1,&local_58,param_2,param_3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar6 = FString::FString(&local_38,L"/Engine/Public/ShaderVersion.ush");
  AddShaderSourceFileEntry(param_1,pFVar6,param_2,param_3);
  pFVar6 = FString::FString(&local_38,L"/Engine/Private/MaterialTemplate.ush");
  AddShaderSourceFileEntry(param_1,pFVar6,param_2,param_3);
  pFVar6 = FString::FString(&local_38,L"/Engine/Private/Common.ush");
  AddShaderSourceFileEntry(param_1,pFVar6,param_2,param_3);
  pFVar6 = FString::FString(&local_38,L"/Engine/Private/Definitions.usf");
  AddShaderSourceFileEntry(param_1,pFVar6,param_2,param_3);
  return;
}

// GetBuildMachineArtifactBasePath @ 145e56840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetBuildMachineArtifactBasePath(void)

{
  FString *pFVar1;
  size_t sVar2;
  undefined1 auStack_a8 [32];
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetBuildMachineArtifactBasePath'::__l2::
             _dynamic_atexit_destructor_for__ArtifactBasePath__);
      _Init_thread_footer(&_TSS0);
    }
  }
  if (ArtifactBasePath.Data.ArrayNum < 2) {
    pFVar1 = FPaths::EngineDir(&local_78);
    if ((pFVar1->Data).ArrayNum == 0) {
      local_68.DataPtr = L"";
    }
    else {
      local_68.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    }
    local_68.Size = 0;
    if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
      sVar2 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar2;
    }
    local_50 = 8;
    local_58 = L"Programs";
    local_40 = 0xe;
    local_48 = L"AutomationTool";
    local_30 = 5;
    local_38 = L"Saved";
    local_28 = L"Logs";
    local_20 = 4;
    FPaths::CombineInternal(&local_88,&local_68,5);
    if (ArtifactBasePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(ArtifactBasePath.Data.AllocatorInstance.Data);
    }
    ArtifactBasePath.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    ArtifactBasePath.Data.ArrayNum = local_88.Data.ArrayNum;
    ArtifactBasePath.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return &ArtifactBasePath;
}

// GetCodeArchiveFilename @ 145e569e0

FString * __cdecl
GetCodeArchiveFilename
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2,FName param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  uint uVar5;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res20 = param_3;
  pFVar3 = FName::ToString(&local_res20,&local_28);
  FString::PrintfImpl(&local_48,L"ShaderArchive-%s-");
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_58.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar4 != -1)) {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar4 + 2;
LAB_145e56a78:
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar2 == 0) {
      local_58.Data.ArrayMax = 0;
      goto LAB_145e56acd;
    }
  }
  else {
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar2 = iVar4 + 1;
    if (iVar1 == 0) goto LAB_145e56a78;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar5 = iVar1 + iVar2;
  if ((int)uVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar5,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_145e56acd:
  FString::PathAppend(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  FString::ConcatFF(&local_38,&local_58,pFVar3);
  FString::ConcatFF(__return_storage_ptr__,&local_38,&ShaderExtension);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCompilerFlagsDictionary @ 145e56b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TMap<FString,ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,ECompilerFlags,0>_>
* __cdecl GetCompilerFlagsDictionary(void)

{
  undefined1 auStack_678 [32];
  ECompilerFlags local_658 [44];
  initializer_list<TPairInitializer<FString_const_&,ECompilerFlags_const_&>_> local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  TPairInitializer<FString_const_&,ECompilerFlags_const_&> local_2d8;
  FString *local_2c8;
  ECompilerFlags *local_2c0;
  FString *local_2b8;
  ECompilerFlags *local_2b0;
  FString *local_2a8;
  ECompilerFlags *local_2a0;
  FString *local_298;
  ECompilerFlags *local_290;
  FString *local_288;
  ECompilerFlags *local_280;
  FString *local_278;
  ECompilerFlags *local_270;
  FString *local_268;
  ECompilerFlags *local_260;
  FString *local_258;
  ECompilerFlags *local_250;
  FString *local_248;
  ECompilerFlags *local_240;
  FString *local_238;
  ECompilerFlags *local_230;
  FString *local_228;
  ECompilerFlags *local_220;
  FString *local_218;
  ECompilerFlags *local_210;
  FString *local_208;
  ECompilerFlags *local_200;
  FString *local_1f8;
  ECompilerFlags *local_1f0;
  FString *local_1e8;
  ECompilerFlags *local_1e0;
  FString *local_1d8;
  ECompilerFlags *local_1d0;
  FString *local_1c8;
  ECompilerFlags *local_1c0;
  FString *local_1b8;
  ECompilerFlags *local_1b0;
  FString *local_1a8;
  ECompilerFlags *local_1a0;
  FString *local_198;
  ECompilerFlags *local_190;
  FString *local_188;
  ECompilerFlags *local_180;
  FString *local_178;
  ECompilerFlags *local_170;
  FString *local_168;
  ECompilerFlags *local_160;
  FString *local_158;
  ECompilerFlags *local_150;
  FString *local_148;
  ECompilerFlags *local_140;
  FString *local_138;
  ECompilerFlags *local_130;
  FString *local_128;
  ECompilerFlags *local_120;
  FString *local_118;
  ECompilerFlags *local_110;
  FString *local_108;
  ECompilerFlags *local_100;
  FString *local_f8;
  ECompilerFlags *local_f0;
  FString *local_e8;
  ECompilerFlags *local_e0;
  FString *local_d8;
  ECompilerFlags *local_d0;
  FString *local_c8;
  ECompilerFlags *local_c0;
  FString *local_b8;
  ECompilerFlags *local_b0;
  FString *local_a8;
  ECompilerFlags *local_a0;
  FString *local_98;
  ECompilerFlags *local_90;
  FString *local_88;
  ECompilerFlags *local_80;
  FString *local_78;
  ECompilerFlags *local_70;
  FString *local_68;
  ECompilerFlags *local_60;
  FString *local_58;
  ECompilerFlags *local_50;
  FString *local_48;
  ECompilerFlags *local_40;
  FString *local_38;
  ECompilerFlags *local_30;
  FString *local_28;
  ECompilerFlags *local_20;
  TPairInitializer<FString_const_&,ECompilerFlags_const_&> local_18;
  
  local_18.Key = (FString *)(__security_cookie.value ^ (ulonglong)auStack_678);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FString::FString(&local_2e8,L"PreferFlowControl");
    local_2d8.Key = &local_2e8;
    local_658[0] = CFLAG_PreferFlowControl;
    local_2d8.Value = local_658;
    FString::FString(&local_2f8,L"Debug");
    local_2c8 = &local_2f8;
    local_658[1] = 1;
    local_2c0 = local_658 + 1;
    FString::FString(&local_308,L"AvoidFlowControl");
    local_2b8 = &local_308;
    local_658[2] = 2;
    local_2b0 = local_658 + 2;
    FString::FString(&local_318,L"SkipValidation");
    local_2a8 = &local_318;
    local_658[3] = 3;
    local_2a0 = local_658 + 3;
    FString::FString(&local_328,L"StandardOptimization");
    local_298 = &local_328;
    local_658[4] = 4;
    local_290 = local_658 + 4;
    FString::FString(&local_338,L"ForceOptimization");
    local_288 = &local_338;
    local_658[5] = 5;
    local_280 = local_658 + 5;
    FString::FString(&local_348,L"GenerateSymbols");
    local_278 = &local_348;
    local_658[6] = 6;
    local_270 = local_658 + 6;
    FString::FString(&local_358,L"ExtraShaderData");
    local_268 = &local_358;
    local_658[7] = 7;
    local_260 = local_658 + 7;
    FString::FString(&local_368,L"AllowUniqueSymbols");
    local_258 = &local_368;
    local_658[8] = 8;
    local_250 = local_658 + 8;
    FString::FString(&local_378,L"NoFastMath");
    local_248 = &local_378;
    local_658[9] = 9;
    local_240 = local_658 + 9;
    FString::FString(&local_388,L"ZeroInitialise");
    local_238 = &local_388;
    local_658[10] = 10;
    local_230 = local_658 + 10;
    FString::FString(&local_398,L"BoundsChecking");
    local_228 = &local_398;
    local_658[0xb] = 0xb;
    local_220 = local_658 + 0xb;
    FString::FString(&local_3a8,L"ForceRemoveUnusedInterpolators");
    local_218 = &local_3a8;
    local_658[0xc] = 0xc;
    local_210 = local_658 + 0xc;
    FString::FString(&local_3b8,L"VertexToGeometryShader");
    local_208 = &local_3b8;
    local_658[0xd] = 0xd;
    local_200 = local_658 + 0xd;
    FString::FString(&local_3c8,L"VertexToPrimitiveShader");
    local_1f8 = &local_3c8;
    local_658[0xe] = 0xe;
    local_1f0 = local_658 + 0xe;
    FString::FString(&local_3d8,L"VertexUseAutoCulling");
    local_1e8 = &local_3d8;
    local_658[0xf] = 0xf;
    local_1e0 = local_658 + 0xf;
    FString::FString(&local_3e8,L"Archive");
    local_1d8 = &local_3e8;
    local_658[0x10] = 0x10;
    local_1d0 = local_658 + 0x10;
    FString::FString(&local_3f8,L"UsesExternalTexture");
    local_1c8 = &local_3f8;
    local_658[0x11] = 0x11;
    local_1c0 = local_658 + 0x11;
    FString::FString(&local_408,L"UseEmulatedUB");
    local_1b8 = &local_408;
    local_658[0x12] = 0x12;
    local_1b0 = local_658 + 0x12;
    FString::FString(&local_418,L"WaveOperations");
    local_1a8 = &local_418;
    local_658[0x13] = 0x13;
    local_1a0 = local_658 + 0x13;
    FString::FString(&local_428,L"ForceDXC");
    local_198 = &local_428;
    local_658[0x14] = 0x14;
    local_190 = local_658 + 0x14;
    FString::FString(&local_438,L"SkipOptimizations");
    local_188 = &local_438;
    local_658[0x15] = 0x15;
    local_180 = local_658 + 0x15;
    FString::FString(&local_448,L"SkipOptimizationsDXC");
    local_178 = &local_448;
    local_658[0x16] = 0x16;
    local_170 = local_658 + 0x16;
    FString::FString(&local_458,L"AllowTypedUAVLoads");
    local_168 = &local_458;
    local_658[0x17] = 0x17;
    local_160 = local_658 + 0x17;
    FString::FString(&local_468,L"Wave32");
    local_158 = &local_468;
    local_658[0x18] = 0x18;
    local_150 = local_658 + 0x18;
    FString::FString(&local_478,L"InlineRayTracing");
    local_148 = &local_478;
    local_658[0x19] = 0x19;
    local_140 = local_658 + 0x19;
    FString::FString(&local_488,L"AllowRealTypes");
    local_138 = &local_488;
    local_658[0x1a] = 0x1a;
    local_130 = local_658 + 0x1a;
    FString::FString(&local_498,L"PrecompileWithDXC");
    local_128 = &local_498;
    local_658[0x1b] = 0x1b;
    local_120 = local_658 + 0x1b;
    FString::FString(&local_4a8,L"HLSL2021");
    local_118 = &local_4a8;
    local_658[0x1c] = 0x1c;
    local_110 = local_658 + 0x1c;
    FString::FString(&local_4b8,L"WarningsAsErrors");
    local_108 = &local_4b8;
    local_658[0x1d] = 0x1d;
    local_100 = local_658 + 0x1d;
    FString::FString(&local_4c8,L"ForceBindful");
    local_f8 = &local_4c8;
    local_658[0x1e] = 0x20;
    local_f0 = local_658 + 0x1e;
    FString::FString(&local_4d8,L"RemoveDeadCode");
    local_e8 = &local_4d8;
    local_658[0x1f] = 0x21;
    local_e0 = local_658 + 0x1f;
    FString::FString(&local_4e8,L"CullBeforeFetch");
    local_d8 = &local_4e8;
    local_658[0x20] = 0x22;
    local_d0 = local_658 + 0x20;
    FString::FString(&local_4f8,L"WarpCulling");
    local_c8 = &local_4f8;
    local_658[0x21] = 0x23;
    local_c0 = local_658 + 0x21;
    FString::FString(&local_508,L"GenerateSymbolsInfo");
    local_b8 = &local_508;
    local_658[0x22] = 0x24;
    local_b0 = local_658 + 0x22;
    FString::FString(&local_518,L"RootConstants");
    local_a8 = &local_518;
    local_658[0x23] = 0x25;
    local_a0 = local_658 + 0x23;
    FString::FString(&local_528,L"CheckForDerivativeOps");
    local_98 = &local_528;
    local_658[0x24] = 0x26;
    local_90 = local_658 + 0x24;
    FString::FString(&local_538,L"IndirectDraw");
    local_88 = &local_538;
    local_658[0x25] = 0x27;
    local_80 = local_658 + 0x25;
    FString::FString(&local_548,L"ShaderBundle");
    local_78 = &local_548;
    local_658[0x26] = 0x28;
    local_70 = local_658 + 0x26;
    FString::FString(&local_558,L"DisableSourceStripping");
    local_68 = &local_558;
    local_658[0x27] = 0x29;
    local_60 = local_658 + 0x27;
    FString::FString(&local_568,L"ShaderBindingLayout");
    local_658[0x28] = 0x2a;
    local_58 = &local_568;
    local_50 = local_658 + 0x28;
    FString::FString(&local_578,L"OutputAnalysisArtifacts");
    local_658[0x29] = 0x2b;
    local_40 = local_658 + 0x29;
    local_48 = &local_578;
    FString::FString(&local_588,L"ForceSpirvDebugInfo");
    local_38 = &local_588;
    local_658[0x2a] = 0x2c;
    local_30 = local_658 + 0x2a;
    FString::FString(&local_598,L"SupportsMinimalBindless");
    local_28 = &local_598;
    local_658[0x2b] = 0x2d;
    local_20 = local_658 + 0x2b;
    local_5a8._First = &local_2d8;
    local_5a8._Last = &local_18;
    TMap<FString,enum_ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>_>
    ::
    TMap<FString,enum_ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>_>
              (&CompilerFlagsDictionary,&local_5a8);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
    if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_528.Data.AllocatorInstance.Data);
    }
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
    }
    if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
    }
    if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
    }
    if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
    }
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
    }
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_478.Data.AllocatorInstance.Data);
    }
    if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.Data.AllocatorInstance.Data);
    }
    if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_458.Data.AllocatorInstance.Data);
    }
    if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_448.Data.AllocatorInstance.Data);
    }
    if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data.AllocatorInstance.Data);
    }
    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data.AllocatorInstance.Data);
    }
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    atexit(`GetCompilerFlagsDictionary'::__l2::
           _dynamic_atexit_destructor_for__CompilerFlagsDictionary__);
    _Init_thread_footer(&_TSS0);
  }
  return &CompilerFlagsDictionary;
}

// GetFormatVersionMap @ 145e587b0

TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_> *
__cdecl GetFormatVersionMap(TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                            *__return_storage_ptr__)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ITargetPlatformManagerModule *pIVar5;
  longlong *plVar6;
  TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
  *pTVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined4 local_res10 [2];
  TPairInitializer<FName_const_&,unsigned_int_const_&> local_res18;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined4 *local_50;
  
  uVar11 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  pIVar5 = GetTargetPlatformManagerRef();
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0xb0))(pIVar5);
  if (((int)plVar6[1] == 0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderFormats.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                         ,0x46,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
              *)(*pcVar2)();
    return pTVar7;
  }
  iVar8 = (int)plVar6[1];
  if (0 < iVar8) {
    local_res18.Value = (uint *)0x0;
    do {
      puVar12 = local_res18.Value;
      uVar10 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      uVar4 = 0;
      if ((int)uVar11 < iVar8) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
      (**(code **)(**(longlong **)((longlong)puVar12 + *plVar6) + 8))
                (*(longlong **)((longlong)puVar12 + *plVar6),&local_68);
      if (((int)local_60 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("OutFormats.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                             ,0x4b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
      uVar13 = uVar10;
      if (0 < (int)local_60) {
        do {
          uVar4 = 0;
          if ((int)uVar11 < (int)plVar6[1]) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                      *)(*pcVar2)();
            return pTVar7;
          }
          uVar9 = (uint)uVar10;
          puVar1 = *(undefined8 **)((longlong)puVar12 + *plVar6);
          pcVar2 = *(code **)*puVar1;
          uVar4 = 0;
          if ((int)uVar9 < (int)local_60) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                      *)(*pcVar2)();
            return pTVar7;
          }
          local_res10[0] = (*pcVar2)(puVar1,*(undefined8 *)(uVar13 + (longlong)local_68));
          uVar4 = 0;
          if ((int)uVar9 < (int)local_60) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                      *)(*pcVar2)();
            return pTVar7;
          }
          local_58 = (void *)((longlong)local_68 + (longlong)(int)uVar9 * 8);
          local_50 = local_res10;
          TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,unsigned_int_const_&>_>
                    ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,&local_res18,(bool *)&local_58);
          uVar10 = (ulonglong)(uVar9 + 1);
          puVar12 = local_res18.Value;
          uVar13 = uVar13 + 8;
        } while ((int)(uVar9 + 1) < (int)local_60);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      iVar8 = (int)plVar6[1];
      local_res18.Value = puVar12 + 2;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar8);
  }
  return __return_storage_ptr__;
}

// GetShaderDebugInfoPath @ 145e5a0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetShaderDebugInfoPath(void)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  void *_Src_00;
  TConsoleVariableData<FString> *pTVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  size_t sVar7;
  IFileManager *pIVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStackY_108 [32];
  FString local_c8;
  FString local_b8;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FString local_88;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`GetShaderDebugInfoPath'::__l2::_dynamic_atexit_destructor_for__DebugInfoPath__);
    _Init_thread_footer(&_TSS0);
  }
  if (1 < DebugInfoPath.Data.ArrayNum) {
    return &DebugInfoPath;
  }
  iVar14 = 0;
  if (GIsBuildMachine == false) {
    pFVar6 = FPaths::ProjectSavedDir();
  }
  else {
    if ((*piVar9 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
      atexit(`GetBuildMachineArtifactBasePath'::__l2::
             _dynamic_atexit_destructor_for__ArtifactBasePath__);
      _Init_thread_footer(&_TSS0);
    }
    if (ArtifactBasePath.Data.ArrayNum < 2) {
      pFVar6 = FPaths::EngineDir(&local_88);
      if ((pFVar6->Data).ArrayNum == 0) {
        local_78.DataPtr = L"";
      }
      else {
        local_78.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      local_78.Size = iVar14;
      if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
        sVar7 = wcslen(local_78.DataPtr);
        local_78.Size = (int)sVar7;
      }
      local_60 = 8;
      local_68 = L"Programs";
      local_50 = 0xe;
      local_58 = L"AutomationTool";
      local_40 = 5;
      local_48 = L"Saved";
      local_38 = L"Logs";
      local_30 = 4;
      FPaths::CombineInternal(&local_c8,&local_78,5);
      if (ArtifactBasePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(ArtifactBasePath.Data.AllocatorInstance.Data);
      }
      ArtifactBasePath.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      ArtifactBasePath.Data.ArrayNum = local_c8.Data.ArrayNum;
      ArtifactBasePath.Data.ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = &ArtifactBasePath;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = (pFVar6->Data).ArrayNum;
  lVar10 = (longlong)local_90;
  _Src = (pFVar6->Data).AllocatorInstance.Data;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,_Src,lVar10 * 2);
  }
  pIVar8 = IFileManager::Get();
  iVar5 = local_90;
  FVar12.Data = local_98.Data;
  lVar10 = (longlong)local_90;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = local_90;
  pcVar1 = *(code **)((longlong)*pIVar8 + 0x108);
  uVar13 = (0x11 - (uint)(local_90 != 0)) + local_90;
  if ((int)uVar13 < local_90) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar13,0,(ForAnyElementType *)&local_c8,local_90,&local_c8.Data.ArrayMax);
  if (iVar5 != 0) {
    memcpy(local_c8.Data.AllocatorInstance.Data,FVar12.Data,lVar10 * 2);
  }
  FString::PathAppend(&local_c8,L"ShaderDebugInfo",0xf);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar8,&local_b8,FVar12.Data);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pTVar2 = CVarShaderOverrideDebugDir.Ref;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_145e5a341:
    lVar10 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    lVar10 = 0x10;
    if (bVar4) goto LAB_145e5a341;
  }
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = *(int *)((longlong)&pTVar2->ShadowedValue[0].Data.ArrayNum + lVar10);
  lVar11 = (longlong)local_a0;
  _Src_00 = *(void **)((longlong)&pTVar2->ShadowedValue[0].Data.AllocatorInstance.Data + lVar10);
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,_Src_00,lVar11 * 2);
  }
  iVar5 = local_a0;
  FVar12.Data = local_a8.Data;
  if (1 < local_a0) {
    local_b8.Data.ArrayNum = local_a0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,local_b8.Data.ArrayMax,(ForAnyElementType *)&local_b8,local_a0,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,FVar12.Data,(longlong)iVar5 * 2);
  }
  pTVar3 = CVarDisambiguateShaderDebugDir.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar10 = 1;
    if (!bVar4) goto LAB_145e5a406;
  }
  lVar10 = 0;
LAB_145e5a406:
  if (pTVar3->ShadowedValue[lVar10] != false) {
    pFVar6 = FPaths::ProjectDir(&local_88);
    FPaths::ConvertRelativePathToFull(&local_c8,pFVar6);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeDirectoryName(&local_c8);
    FString::ReplaceInline(&local_c8,L":/",L"_",IgnoreCase);
    iVar5 = iswalpha(0x2f);
    if (iVar5 == 0) {
      FString::ReplaceCharInlineCaseSensitive(&local_c8,L'/',L'_');
    }
    else {
      FString::ReplaceCharInlineIgnoreCase(&local_c8,L'/',L'_');
    }
    iVar5 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar5 = iVar14;
    }
    FString::PathAppend(&local_b8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar5);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  FPaths::NormalizeDirectoryName(&local_b8);
  iVar5 = local_b8.Data.ArrayNum + -1;
  if (local_b8.Data.ArrayNum == 0) {
    iVar5 = iVar14;
  }
  FString::AssignRange(&DebugInfoPath,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar5);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return &DebugInfoPath;
}

// GetShaderFileHash @ 145e5a5c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSHAHash * __cdecl GetShaderFileHash(wchar_t *param_1,EShaderPlatform param_2)

{
  FSHAHash *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pFVar1 = TryGetShaderFileHash(param_1,param_2,&local_18);
  if (pFVar1 == (FSHAHash *)0x0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    pFVar1 = &EmptyHash;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar1;
}

// GetShaderFileNameOverride @ 145e5a630

bool __cdecl
GetShaderFileNameOverride(FString *param_1,wchar_t *param_2,FName param_3,FName param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FName local_res20;
  FString local_98;
  FString local_88;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_res20 = param_4;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,param_2,1);
  if (plVar4 == (longlong *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("SettingCVar || bPlatformOnly",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x303,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    pFVar5 = (FString *)(**(code **)(*plVar4 + 0xd8))(plVar4,local_78);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  if (1 < local_98.Data.ArrayNum) {
    pFVar5 = FName::ToString(&local_res20,&local_58);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(&local_98,&local_68,L"{Platform}",pwVar6,IgnoreCase);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    pwVar6 = FCommandLine::Get();
    FParse::Value(pwVar6,L"-dlcname=",&local_88,true,(wchar_t **)0x0);
    pwVar6 = L"-";
    if (local_88.Data.ArrayNum < 2) {
      pwVar6 = L"";
    }
    pFVar5 = FString::Replace(&local_98,&local_48,L"{?DLC-}",pwVar6,IgnoreCase);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(&local_98,&local_38,L"{DLC}",(wchar_t *)FVar7.Data,IgnoreCase);
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FString::TrimStartAndEndInline(&local_98);
    pFVar5 = FPaths::MakeValidFileName(&local_28,&local_98,L'_');
    if (&local_98 != pFVar5) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (1 < local_98.Data.ArrayNum) {
      iVar8 = local_98.Data.ArrayNum + -1;
      if (local_98.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      FString::AssignRange(param_1,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar8);
      bVar2 = true;
      goto LAB_145e5a953;
    }
  }
  bVar2 = false;
LAB_145e5a953:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetShaderFilesHash @ 145e5a990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSHAHash * __cdecl
GetShaderFilesHash(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,EShaderPlatform param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  LARGE_INTEGER LVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSHAHash *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_117;
  EShaderPlatform local_116;
  FString local_110;
  uint local_100;
  FString local_f8;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0 [3];
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_116 = param_2;
  QueryPerformanceCounter(&local_e8);
  iVar6 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar11 + (longlong)iVar6 * 0x10;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar6) {
      local_118 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_118);
    }
    iVar13 = 0;
    if (pFVar11 == pFVar10) break;
    iVar12 = *(int *)(pFVar11 + 8) + -1;
    if (*(int *)(pFVar11 + 8) == 0) {
      iVar12 = iVar13;
    }
    FString::AppendChars(&local_110,*(wchar_t **)pFVar11,iVar12);
    pFVar11 = pFVar11 + 0x10;
  }
  AcquireSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  if ((SP_CUSTOM_PLATFORM_LAST < param_2) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform < (sizeof(UEArrayCountHelper(Platforms)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c7,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSHAHash *)(*pcVar1)();
    return pFVar7;
  }
  if ((GShaderHashCache.bInitialized == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c8,
                         L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::FindHash."
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSHAHash *)(*pcVar1)();
    return pFVar7;
  }
  iVar6 = local_110.Data.ArrayNum + -1;
  FVar2.Data = local_110.Data.AllocatorInstance.Data;
  if (local_110.Data.ArrayNum == 0) {
    iVar6 = iVar13;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                      *)&GShaderHashCache.Platforms[param_2].ShaderHashCache,uVar5,&local_110);
  if (iVar6 != -1) {
    lVar9 = (longlong)iVar6 * 0x30 +
            *(longlong *)&GShaderHashCache.Platforms[param_2].ShaderHashCache;
    pFVar7 = (FSHAHash *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar7 = (FSHAHash *)0x0;
    }
    if (pFVar7 != (FSHAHash *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
      goto LAB_145e5ad17;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  EnterCriticalSection((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard);
  if ((SP_CUSTOM_PLATFORM_LAST < param_2) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform < (sizeof(UEArrayCountHelper(Platforms)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c7,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSHAHash *)(*pcVar1)();
    return pFVar7;
  }
  if ((GShaderHashCache.bInitialized == false) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c8,
                         L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::FindHash."
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FSHAHash *)(*pcVar1)();
    return pFVar7;
  }
  iVar6 = local_110.Data.ArrayNum + -1;
  FVar2.Data = local_110.Data.AllocatorInstance.Data;
  if (local_110.Data.ArrayNum == 0) {
    iVar6 = iVar13;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                      *)&GShaderHashCache.Platforms[param_2].ShaderHashCache,uVar5,&local_110);
  if (iVar6 == -1) {
LAB_145e5abdb:
    FSHA1::FSHA1(&local_c8);
    local_100 = param_1->ArrayNum;
    uVar8 = (ulonglong)(int)local_100;
    pFVar11 = (param_1->AllocatorInstance).Data;
    local_e8.QuadPart = uVar8 * 0x10 + (longlong)pFVar11;
    while( true ) {
      LVar3 = local_e8;
      if (param_1->ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_117);
      }
      if (pFVar11 == (FScriptContainerElement *)LVar3.QuadPart) break;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FString::PrintfImpl(&local_f8,L"Couldn\'t find source file of virtual shader path \'%s\'");
      FVar2.Data = local_f8.Data.AllocatorInstance.Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      DestructItems<FString,int>((FString *)0x0,0);
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
      if (FVar2.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar2.Data);
      }
      pFVar11 = pFVar11 + 0x10;
      uVar8 = (ulonglong)local_100;
    }
    FSHA1::Final(&local_c8);
    AcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
    pFVar7 = FShaderHashCache::AddHash(&GShaderHashCache,local_116,&local_110);
    FSHA1::GetHash(&local_c8,pFVar7->Hash);
    ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
    FSHA1::~FSHA1(&local_c8);
  }
  else {
    lVar9 = (longlong)iVar6 * 0x30 +
            *(longlong *)&GShaderHashCache.Platforms[param_2].ShaderHashCache;
    pFVar7 = (FSHAHash *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      pFVar7 = (FSHAHash *)0x0;
    }
    if (pFVar7 == (FSHAHash *)0x0) goto LAB_145e5abdb;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard);
LAB_145e5ad17:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  QueryPerformanceCounter(local_e0);
  return pFVar7;
}

// GetShaderIncludes @ 145e5ada0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
GetShaderIncludes(wchar_t *param_1,wchar_t *param_2,
                 TArray<FString,TSizedDefaultAllocator<32>_> *param_3,EShaderPlatform param_4,
                 uint param_5,FName *param_6)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetShaderIncludes @ 145e5adb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
GetShaderIncludes(wchar_t *param_1,wchar_t *param_2,FString *param_3,
                 TArray<FString,TSizedDefaultAllocator<32>_> *param_4,EShaderPlatform param_5,
                 uint param_6,FName *param_7)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  iVar1 = (param_3->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  InternalGetShaderIncludes
            (param_1,param_2,&local_18,param_4,param_5,param_6,false,param_7,
             (FShaderPreprocessDependencies *)0x0);
  return;
}

// GetShaderPreprocessDependencies @ 145e5aed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
GetShaderPreprocessDependencies
          (wchar_t *param_1,EShaderPlatform param_2,
          TSharedPtr<FShaderPreprocessDependencies,1> *param_3)

{
  FShaderPreprocessDependencies *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FShaderFileCacheEntry *pFVar8;
  int iVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  bool local_res18;
  FString local_28;
  FShaderPreprocessDependencies *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_res18 = false;
  FString::FString(&local_28,param_1);
  iVar9 = local_28.Data.ArrayNum + -1;
  FVar4.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar4.Data);
  lVar10 = (ulonglong)(uVar7 % 0x1f) * 0x58;
  SRWLock = (PSRWLOCK)(&GShaderFileCache.field_0x0 + lVar10);
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  AcquireSRWLockExclusive(SRWLock);
  pFVar8 = TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
           ::FindByHash<FString>
                     ((TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
                       *)(&GShaderFileCache.field_0x8 + lVar10),uVar7,&local_28);
  if ((pFVar8 != (FShaderFileCacheEntry *)0x0) &&
     (pFVar1 = (pFVar8->Dependencies).Object, pFVar1 != (FShaderPreprocessDependencies *)0x0)) {
    pTVar2 = (pFVar8->Dependencies).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = param_3->Object;
    pTStack_10 = (param_3->SharedReferenceCount).ReferenceController;
    param_3->Object = pFVar1;
    (param_3->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    local_res18 = true;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return local_res18;
}

// GetShaderSourceFilePath @ 145e5b040

FString * __cdecl
GetShaderSourceFilePath
          (FString *__return_storage_ptr__,FString *param_1,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar11;
  FString *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  FString local_178;
  FString local_168;
  FScriptContainerElement *local_158;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  FString local_d8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FScriptContainerElement *local_78;
  uint local_70;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  undefined8 *puVar19;
  
  local_98 = (param_1->Data).AllocatorInstance.Data;
  puVar19 = (undefined8 *)0x0;
  iVar9 = (param_1->Data).ArrayNum;
  iStack_90 = iVar9 + -1;
  if (iVar9 == 0) {
    iStack_90 = 0;
  }
  local_68._12_4_ = uStack_8c;
  local_68.Size = iStack_90;
  local_res18 = param_2;
  local_68.DataPtr = (wchar_t *)local_98;
  bVar7 = CheckVirtualShaderFilePath(&local_68,param_2);
  if (!bVar7) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_158 = (FScriptContainerElement *)0x0;
  local_res20 = 0;
  FPaths::GetPath(&local_178,param_1);
  FPaths::GetCleanFilename(&local_168,param_1);
  uVar10 = 1;
  uVar18 = 0;
  uVar22 = 0;
  while (iVar9 = 0, 1 < local_178.Data.ArrayNum) {
    uVar8 = local_178.Data.ArrayNum - 1;
    pFVar4 = local_178.Data.AllocatorInstance.Data;
    if (local_178.Data.ArrayNum == 0) {
      uVar8 = uVar22;
      pFVar4 = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar8,(wchar_t *)pFVar4);
    iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&GShaderSourceDirectoryMappings,uVar8,&local_178);
    if (iVar9 != -1) {
      uVar8 = local_178.Data.ArrayNum - 1;
      FVar5.Data = local_178.Data.AllocatorInstance.Data;
      if (local_178.Data.ArrayNum == 0) {
        uVar8 = uVar18;
        FVar5.Data = (FScriptContainerElement *)L"";
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar8,(wchar_t *)FVar5.Data);
      iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&GShaderSourceDirectoryMappings,uVar8,&local_178);
      puVar15 = puVar19;
      if (iVar9 != -1) {
        puVar15 = (undefined8 *)(GShaderSourceDirectoryMappings._0_8_ + (longlong)iVar9 * 0x28);
      }
      puVar13 = puVar15 + 2;
      if (puVar15 == (undefined8 *)0x0) {
        puVar13 = puVar19;
      }
      local_88.DataPtr = (wchar_t *)*puVar13;
      local_88.Size = *(int *)(puVar13 + 1) - 1;
      if (*(int *)(puVar13 + 1) == 0) {
        local_88.Size = uVar18;
      }
      local_78 = local_168.Data.AllocatorInstance.Data;
      local_70 = local_168.Data.ArrayNum - 1;
      if (local_168.Data.ArrayNum == 0) {
        local_70 = uVar18;
      }
      FPaths::CombineInternal(&local_140,&local_88,2);
      iVar9 = local_140.Data.ArrayNum;
      local_158 = local_140.Data.AllocatorInstance.Data;
      local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_res20 = local_140.Data.ArrayMax;
      local_140.Data.ArrayNum = 0;
      local_140.Data.ArrayMax = 0;
      if (1 < iVar9) goto LAB_145e5b609;
      break;
    }
    pTVar11 = &FPaths::GetCleanFilename(&local_58,&local_178)->Data;
    uVar8 = local_168.Data.ArrayNum - 1;
    if (local_168.Data.ArrayNum == 0) {
      uVar8 = uVar22;
    }
    if ((pTVar11->ArrayNum != 0) || (iVar9 = 2, uVar8 == 0xffffffff)) {
      iVar9 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_150,pTVar11,uVar8 + iVar9);
    FString::PathAppend((FString *)&local_150,(wchar_t *)local_168.Data.AllocatorInstance.Data,uVar8
                       );
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    local_168.Data.AllocatorInstance.Data = local_150.AllocatorInstance.Data;
    local_168.Data.ArrayNum = local_150.ArrayNum;
    local_168.Data.ArrayMax = local_150.ArrayMax;
    local_150.ArrayNum = 0;
    local_150.ArrayMax = 0;
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar12 = FPaths::GetPath(&local_48,&local_178);
    if (&local_178 != pFVar12) {
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      local_178.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = (pFVar12->Data).ArrayNum;
      local_178.Data.ArrayMax = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FString::PrintfImpl(&local_120,L"Can\'t map virtual shader source path \"%s\".");
  FString::AppendChars(&local_120,L"\nDirectory mappings are:",0x18);
  uVar8 = GShaderSourceDirectoryMappings._40_4_;
  uStack_f4 = uVar22;
  if (uVar8 != 0) {
    puVar23 = (uint *)&GShaderSourceDirectoryMappings.field_0x10;
    if (GShaderSourceDirectoryMappings._32_8_ != 0) {
      puVar23 = (uint *)GShaderSourceDirectoryMappings._32_8_;
    }
    uVar17 = *puVar23;
    puVar15 = puVar19;
    uVar22 = 0;
    uVar18 = 0;
    while (uVar17 == 0) {
      iVar16 = (int)puVar19;
      uVar22 = (int)puVar15 + 0x20;
      puVar15 = (undefined8 *)(ulonglong)uVar22;
      uVar18 = iVar16 + 1;
      puVar19 = (undefined8 *)(ulonglong)uVar18;
      uStack_f4 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_145e5b3c0;
      uVar17 = puVar23[(longlong)iVar16 + 1];
    }
    uVar10 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_e0 = (int)lVar20;
    uStack_f4 = (uVar22 - 1) + local_e0;
    if ((int)uVar8 < (int)uStack_f4) {
      uStack_f4 = uVar8;
    }
  }
LAB_145e5b3c0:
  bVar3 = GShaderSourceDirectoryMappings._40_1_;
  iStack_e8 = GShaderSourceDirectoryMappings._8_4_ - GShaderSourceDirectoryMappings._52_4_;
  local_100 = 0x154bebdc0;
  uVar17 = uVar8 & 0xffffffe0;
  local_110 = &GShaderSourceDirectoryMappings;
  uStack_f8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_f4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uVar10,uVar18);
  local_c8 = &GShaderSourceDirectoryMappings;
  iVar16 = (int)uVar8 >> 5;
  TStack_c0._28_4_ = uStack_f4;
  TStack_c0.BaseBitIndex = uVar22;
  uStack_a0 = CONCAT44(uStack_e4,iStack_e8);
  TStack_c0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&GShaderSourceDirectoryMappings.field_0x10;
  uVar21 = uVar8;
  uStack_108 = uVar18;
  uStack_104 = uVar10;
  local_f0 = uVar22;
  uStack_ec = uStack_f4;
  if ((int)uVar8 < 0) {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar12 = (FString *)(*pcVar2)();
      return pFVar12;
    }
    uVar21 = GShaderSourceDirectoryMappings._40_4_;
  }
  if (uVar8 != uVar21) {
    lVar20 = 0x154bebdc0;
    if (GShaderSourceDirectoryMappings._32_8_ != 0) {
      lVar20 = GShaderSourceDirectoryMappings._32_8_;
    }
    uVar22 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar20 + (longlong)iVar16 * 4);
    while (uVar22 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar8 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_145e5b4d0;
      uVar22 = *(uint *)(lVar20 + 4 + lVar14 * 4);
    }
    uVar1 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar8 = (int)lVar20 + -1 + uVar17;
    if ((int)uVar21 < (int)uVar8) {
      uVar8 = uVar21;
    }
  }
LAB_145e5b4d0:
  while( true ) {
    pTVar6 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    FVar5.Data = local_120.Data.AllocatorInstance.Data;
    if (((TStack_c0.CurrentBitIndex == uVar8) &&
        (TStack_c0.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&GShaderSourceDirectoryMappings.field_0x10)) &&
       (pTVar6 == &GShaderSourceDirectoryMappings)) break;
    FString::PrintfImpl(&local_d8,L"\n  %s -> %s");
    iVar16 = local_d8.Data.ArrayNum + -1;
    if (local_d8.Data.ArrayNum == 0) {
      iVar16 = 0;
    }
    FString::AppendChars(&local_120,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar16);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar16 = local_120.Data.ArrayNum;
  local_130.Data.ArrayNum = iVar16;
  if (iVar16 == 0) {
    local_130.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar16,0,(ForAnyElementType *)&local_130,iVar16,&local_130.Data.ArrayMax);
    memcpy(local_130.Data.AllocatorInstance.Data,FVar5.Data,(longlong)iVar16 * 2);
  }
  ReportVirtualShaderFilePathError(local_res18,&local_130);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
LAB_145e5b609:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_158;
  (__return_storage_ptr__->Data).ArrayNum = iVar9;
  (__return_storage_ptr__->Data).ArrayMax = local_res20;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShaderSymbolPathOverride @ 145e5b720

bool __cdecl GetShaderSymbolPathOverride(FString *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FName local_res10;
  void *local_78 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar6 = L"";
  local_res10 = param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
      }
      SymbolPathOverride =
           (FShaderSymbolSettingHelper)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Shaders.SymbolPathOverride",1);
      if (SymbolPathOverride == (FShaderSymbolSettingHelper)0x0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  if (SymbolPathOverride != (FShaderSymbolSettingHelper)0x0) {
    pFVar5 = (FString *)
             (**(code **)(*(longlong *)SymbolPathOverride + 0xd8))(SymbolPathOverride,local_78);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  if ((param_1->Data).ArrayNum < 2) {
    bVar3 = false;
  }
  else {
    pFVar5 = FName::ToString(&local_res10,&local_58);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(param_1,&local_68,L"{Platform}",pwVar7,IgnoreCase);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar5 = FPaths::ProjectDir(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(param_1,&local_48,L"{ProjectDir}",pwVar7,IgnoreCase);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar5 = FPaths::ProjectSavedDir();
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(param_1,&local_28,L"{ProjectSavedDir}",pwVar7,IgnoreCase);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar5 = GetShaderDebugInfoPath();
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = FString::Replace(param_1,&local_18,L"{ShaderDebugInfoDir}",pwVar6,IgnoreCase);
    if (param_1 != pFVar5) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar5->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar3 = 1 < (param_1->Data).ArrayNum;
  }
  return bVar3;
}

// GetSingleJobCompilationDump @ 145e5bab0

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

FString * __cdecl
GetSingleJobCompilationDump(FString *__return_storage_ptr__,FShaderCompileJob *param_1)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if (param_1 == (FShaderCompileJob *)0x0) {
    FString::FString(__return_storage_ptr__,L"Internal error, not a Job!");
    return __return_storage_ptr__;
  }
  FShaderCompilerInput::GenerateShaderName(&param_1->Input,&local_28);
  if ((param_1->Key).VFType != (FVertexFactoryType *)0x0) {
    FString::PrintfImpl(&local_18,L" VF \'%s\'");
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FString::PrintfImpl(&local_18,L" Type \'%s\'");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FString::PrintfImpl(&local_18,L" \'%s\' Entry \'%s\' Permutation %i ");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
  return __return_storage_ptr__;
}

// GetTypeHash @ 145e5bd10

uint __cdecl GetTypeHash(FCompactFullName *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<FName> FVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  FVar3 = (param_1->ObjectClassAndPath).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->ObjectClassAndPath).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FName>)0x0) {
    param_1 = (FCompactFullName *)FVar3;
  }
  FVar3 = (ForElementType<FName>)((longlong)param_1 + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((ForElementType<FName>)param_1 == FVar3) break;
    uVar4 = *(undefined8 *)param_1;
    uVar5 = GetTypeHash((FNameEntryId)(uint)uVar4);
    uVar5 = uVar5 + (int)((ulonglong)uVar4 >> 0x20);
    uVar6 = uVar6 - uVar5 ^ uVar5 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar6 ^ uVar6 << 8;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar6 = (uVar5 - uVar7) - uVar6 ^ uVar7 >> 0xf;
    param_1 = (FCompactFullName *)((longlong)param_1 + 8);
  }
  return uVar6;
}

// GetWriteShaderSymbolsOptions @ 145e5c280

EWriteShaderSymbols __cdecl GetWriteShaderSymbolsOptions(FName param_1)

{
  code *pcVar1;
  EWriteShaderSymbols EVar2;
  bool bVar3;
  int iVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            EVar2 = (*pcVar1)();
            return EVar2;
          }
        }
      }
      WriteSymbolsZip =
           (FShaderSymbolSettingHelper)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Shaders.WriteSymbols.Zip",1);
      if (WriteSymbolsZip == (FShaderSymbolSettingHelper)0x0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          EVar2 = (*pcVar1)();
          return EVar2;
        }
      }
      _Init_thread_footer(&_TSS0);
    }
  }
  if (WriteSymbolsZip != (FShaderSymbolSettingHelper)0x0) {
    iVar4 = (**(code **)(*(longlong *)WriteSymbolsZip + 200))();
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e5c2ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      EVar2 = (**(code **)(*(longlong *)WriteSymbolsZip + 200))();
      return EVar2;
    }
  }
  return Disable;
}

// HandleBadInputFile @ 145e5c3a0

void __cdecl ShaderCompileWorkerError::HandleBadInputFile(wchar_t *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Bad-input-file exception:\n%s");
  ::FString::FString(&local_28,L"ShaderCompileWorker failed");
  ModalErrorOrLog(&local_28,&local_18,0,0,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleBadInputVersion @ 145e5c410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleBadInputVersion(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleBadPipelineJobHeader @ 145e5c570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleBadPipelineJobHeader(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleBadShaderFormatVersion @ 145e5c6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleBadShaderFormatVersion(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleBadSingleJobHeader @ 145e5c830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleBadSingleJobHeader(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleCantCompileForSpecificFormat @ 145e5c990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleCantCompileForSpecificFormat(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleCantDeleteInputFile @ 145e5caf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleCantDeleteInputFile(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleCantSaveOutputFile @ 145e5cc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleCantSaveOutputFile(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleCrashInsidePlatformCompiler @ 145e5cdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleCrashInsidePlatformCompiler(wchar_t *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Crash inside the platform compiler:\n%s");
  ::FString::FString(&local_28,L"ShaderCompileWorker failed");
  if (1 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleGeneralCrash @ 145e5ce50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleGeneralCrash(wchar_t *param_1,wchar_t *param_2)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  ForAnyElementType FVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::PrintfImpl(&local_38,L"Exception:\n%s\n\nCallstack:\n%s");
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_58,(wchar_t *)FVar5.Data);
  ::FString::FString(&local_48,L"ShaderCompileWorker crashed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_48);
    pFVar4 = FText::FromString(&local_28,&local_58);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleNoTargetShaderFormatsFound @ 145e5cfd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShaderCompileWorkerError::HandleNoTargetShaderFormatsFound(wchar_t *param_1)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  FString local_48;
  FString local_38;
  FText local_28;
  FText local_18;
  
  ::FString::FString(&local_48,param_1);
  ::FString::FString(&local_38,L"ShaderCompileWorker failed");
  this = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(this);
  bVar2 = FApp::IsUnattended();
  FVar1 = bModalReported;
  if (bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  else {
    LOCK();
    bModalReported = (FThreadSafeBool)0x1;
    UNLOCK();
    if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
      FWindowsPlatformProcess::SleepInfinite();
    }
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar3 = FText::FromString(&local_18,&local_38);
    pFVar4 = FText::FromString(&local_28,&local_48);
    FMessageDialog::Open(Ok,pFVar4,pFVar3);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleOutOfMemory @ 145e5d130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ShaderCompileWorkerError::HandleOutOfMemory
          (wchar_t *param_1,wchar_t *param_2,FPlatformMemoryStats *param_3,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_4,
          bool param_5)

{
  TConsoleVariableData<bool> *pTVar1;
  FThreadSafeBool FVar2;
  bool bVar3;
  longlong lVar4;
  FOutputDeviceRedirector *this;
  FText *pFVar5;
  FText *pFVar6;
  FString local_58;
  FString local_48;
  FText local_38;
  FText local_28 [2];
  
  ::FString::PrintfImpl
            (&local_58,
             L"ShaderCompileWorker failed with out-of-memory (OOM) exception on machine \"%s\" (%s); MemoryStats:\n\tAvailablePhysical %llu (%.2f GiB)\n\t AvailableVirtual %llu (%.2f GiB)\n\t     UsedPhysical %llu (%.2f GiB)\n\t PeakUsedPhysical %llu (%.2f GiB)\n\t      UsedVirtual %llu (%.2f GiB)\n\t  PeakUsedVirtual %llu (%.2f GiB)"
            );
  pTVar1 = CVarShadersPropagateLocalWorkerOOMs.Ref;
  if (param_5) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  else {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 1;
    }
    if (pTVar1->ShadowedValue[lVar4] != false) {
                    /* WARNING: Subroutine does not return */
      FGenericPlatformMemory::OnOutOfMemory(0,0x40);
    }
    ::FString::FString(&local_48,L"ShaderCompileWorker failed");
    this = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this);
    bVar3 = FApp::IsUnattended();
    FVar2 = bModalReported;
    if (bVar3) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    else {
      LOCK();
      bModalReported = (FThreadSafeBool)0x1;
      UNLOCK();
      if (FVar2 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
        FWindowsPlatformProcess::SleepInfinite();
      }
      if (1 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      pFVar5 = FText::FromString(local_28,&local_48);
      pFVar6 = FText::FromString(&local_38,&local_58);
      FMessageDialog::Open(Ok,pFVar6,pFVar5);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      if (local_28[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
      }
      FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar3 = false;
  }
  return bVar3;
}

// HandleOutputFileCorrupted @ 145e5d4b0

void __cdecl
ShaderCompileWorkerError::HandleOutputFileCorrupted(wchar_t *param_1,long64 param_2,long64 param_3)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl
            (&local_18,L"Output file corrupted (expected %I64d bytes, but only got %I64d): %s");
  ::FString::FString(&local_28,L"ShaderCompileWorker failed");
  ModalErrorOrLog(&local_28,&local_18,0,0,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleOutputFileEmpty @ 145e5d530

void __cdecl ShaderCompileWorkerError::HandleOutputFileEmpty(wchar_t *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Output file %s size is 0. Are you out of disk space?");
  ::FString::FString(&local_28,L"ShaderCompileWorker failed");
  ModalErrorOrLog(&local_28,&local_18,0,0,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleShaderCompileException @ 145e5d5a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
HandleShaderCompileException(_EXCEPTION_POINTERS *param_1,FString *param_2,FString *param_3)

{
  wchar_t wVar1;
  ulong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FString *pFVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  wchar_t *pwVar13;
  undefined1 auStack_81d8 [32];
  FString local_81b8;
  FString local_81a8;
  FString local_8198;
  FString local_8188;
  FString local_8178;
  FScriptContainerElement local_8168 [256];
  ForAnyElementType local_8068;
  FScriptContainerElement *local_8060;
  int local_8058;
  char local_8048 [32768];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_81d8;
  local_8188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8188.Data.ArrayNum = 0;
  local_8188.Data.ArrayMax = 0;
  FString::FString(&local_81b8,"");
  if (param_3 != &local_81b8) {
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_3->Data).AllocatorInstance.Data = local_81b8.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_81b8.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_81b8.Data.ArrayMax;
    local_81b8.Data.ArrayNum = 0;
    local_81b8.Data.ArrayMax = 0;
    local_81b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_81b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_81b8.Data.AllocatorInstance.Data);
  }
  uVar2 = param_1->ExceptionRecord->ExceptionCode;
  if (uVar2 == 0x4000) {
    bVar5 = false;
    pwVar10 = GErrorHist;
    wVar1 = GErrorHist[0];
    while (pwVar10 = pwVar10 + 1, wVar1 != L'\0') {
      if (((!bVar5) && (wVar1 == L'0')) && (iVar6 = wcsncmp(pwVar10,L"x",1), iVar6 == 0)) {
        pwVar13 = pwVar10 + -1;
        if ((pwVar13 != (wchar_t *)0x0) && (GErrorHist < pwVar13)) {
          pFVar8 = FString::ConstructFromPtrSize
                             (&local_8178,GErrorHist,(int)((longlong)(pwVar10 + -0xaa77e081) >> 1));
          FString::operator=(param_2,pFVar8);
          param_2 = param_3;
          if (local_8178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8178.Data.AllocatorInstance.Data);
          }
          goto LAB_145e5d6f6;
        }
        break;
      }
      if ((((ushort)(wVar1 + L'﾿') < 0x1a) || ((ushort)(wVar1 + L'ﾟ') < 0x1a)) ||
         ((ushort)(wVar1 + L'￐') < 10)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      wVar1 = *pwVar10;
    }
    pwVar13 = GErrorHist;
LAB_145e5d6f6:
    FString::operator=(param_2,pwVar13);
  }
  else {
    bVar5 = ExceptionCodeToString(uVar2,&local_8188);
    if (bVar5) {
      FString::PrintfImpl(&local_81a8,L"Exception: %s, address=0x%016llx\n");
      FVar11.Data = local_81a8.Data.AllocatorInstance.Data;
      if (param_2 != &local_81a8) {
        pFVar3 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_2->Data).AllocatorInstance.Data = local_81a8.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_81a8.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_81a8.Data.ArrayMax;
        local_81a8.Data.ArrayNum = 0;
        local_81a8.Data.ArrayMax = 0;
        local_81a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar11.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      FString::PrintfImpl(&local_8198,L"Exception code: 0x%08x, address=0x%016llx\n");
      FVar11.Data = local_8198.Data.AllocatorInstance.Data;
      if (param_2 != &local_8198) {
        pFVar3 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_2->Data).AllocatorInstance.Data = local_8198.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_8198.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_8198.Data.ArrayMax;
        local_8198.Data.ArrayNum = 0;
        local_8198.Data.ArrayMax = 0;
        local_8198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar11.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
  }
  iVar6 = (param_3->Data).ArrayNum;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  if (iVar7 == 0) {
    memset(local_8048,0,0x8000);
    FWindowsPlatformStackWalk::StackWalkAndDump
              (local_8048,0x8000,param_1->ExceptionRecord->ExceptionAddress,(void *)0x0);
    local_8068.Data = (FScriptContainerElement *)0x0;
    sVar9 = strlen(local_8048);
    local_8058 = (int)sVar9;
    uVar12 = local_8058 + 1;
    FVar11.Data = (FScriptContainerElement *)0x0;
    if (0x80 < uVar12) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8068,0,uVar12,2);
      FVar11.Data = local_8068.Data;
    }
    local_8060 = local_8168;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      local_8060 = FVar11.Data;
    }
    pwVar10 = FGenericPlatformString::Convert<char,wchar_t>
                        ((wchar_t *)local_8060,uVar12,local_8048,uVar12);
    if ((pwVar10 == (wchar_t *)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    FString::operator=(param_3,(wchar_t *)local_8060);
    if (local_8068.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8068.Data);
    }
  }
  if (local_8188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8188.Data.AllocatorInstance.Data);
  }
  return 1;
}

// HashShaderFileWithIncludes @ 145e5e860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
HashShaderFileWithIncludes
          (FArchive *param_1,wchar_t *param_2,FString *param_3,EShaderPlatform param_4,bool param_5)

{
  return;
}

// InitializeShaderHashCache @ 145e5f6f0

void __cdecl InitializeShaderHashCache(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  FShaderHashCache::Initialize(&GShaderHashCache);
                    /* WARNING: Could not recover jumptable at 0x000145e5f718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  return;
}

// InitializeShaderTypes @ 145e5f730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InitializeShaderTypes(void)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  *SRWLock;
  uint uVar9;
  undefined1 auStackY_118 [32];
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (4 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  FMissingShaderFileCacheGuard::EnabledCount = FMissingShaderFileCacheGuard::EnabledCount + 1;
  LogShaderSourceDirectoryMappings();
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  FShaderType::Initialize
            ((TMap<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,0>_>
              *)local_68);
  FVertexFactoryType::Initialize
            ((TMap<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,0>_>
              *)local_68);
  FShaderPipelineType::Initialize();
  if (4 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar6 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  FMissingShaderFileCacheGuard::EnabledCount = FMissingShaderFileCacheGuard::EnabledCount + -1;
  if (FMissingShaderFileCacheGuard::EnabledCount == 0) {
    SRWLock = &GShaderFileCache;
    do {
      if ((SRWLock ==
           (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      puVar1 = &SRWLock->field_0x8;
      TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
                  *)puVar1);
      uVar4 = local_98._0_8_;
      local_a0 = 0;
      stack0xffffffffffffff38 = local_98._16_16_;
      auStack_d0._0_8_ = local_98._8_8_;
      local_b8 = local_78;
      pTStack_b0 = pTStack_70;
      uVar8 = local_98._24_8_ >> 0x20;
      local_a8 = (TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
                  *)puVar1;
      if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          lVar7 = (longlong)(int)uVar8;
          lVar2 = *(longlong *)uVar4;
          if (((*(longlong *)(lVar2 + 0x10 + lVar7 * 0x48) == 0) &&
              (*(longlong *)(lVar2 + 0x20 + lVar7 * 0x48) == 0)) &&
             (*(longlong *)(lVar2 + 0x30 + lVar7 * 0x48) == 0)) {
            TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_b0,(int)uVar8);
            local_a0 = CONCAT11(local_a0._1_1_,1);
          }
          uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
          uVar8 = (ulonglong)uStack_bc;
        } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
        if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
          uVar9 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34
          ;
          if (uVar9 < 4) {
            iVar6 = 1;
          }
          else {
            uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar8 != 0) {
              for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar6 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar9) && (local_a8->HashSize < iVar6)) || (iVar6 < local_a8->HashSize)) {
            local_a8->HashSize = iVar6;
            TSet<TTuple<FString,FShaderFileCacheEntry>,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FDefaultSetAllocator>
            ::Rehash(local_a8);
          }
        }
      }
      if (SRWLock !=
          (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
           *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      SRWLock = (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
                 *)&SRWLock->field_0x58;
    } while (SRWLock !=
             (TStripedMap<31,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)&GSCWErrorCode);
  }
  return;
}

// InternalGetShaderIncludes @ 145e5fa30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
InternalGetShaderIncludes
          (wchar_t *param_1,wchar_t *param_2,TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          EShaderPlatform param_4,uint param_5,bool param_6,FName *param_7,bool param_8)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_> TVar3;
  FScriptContainerElement *pFVar4;
  FShaderPreprocessDependencies *local_38;
  FScriptContainerElement *local_30;
  undefined1 local_28 [8];
  TSharedPtr<FShaderPreprocessDependencies,1> local_20;
  
  pFVar4 = (FScriptContainerElement *)0x0;
  if (param_8) {
    local_20.Object = (FShaderPreprocessDependencies *)0x0;
    local_20.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar2 = GetShaderPreprocessDependencies(param_2,param_4,&local_20);
    if (!bVar2) {
      TVar3 = ShaderPreprocessDependenciesBegin((wchar_t *)&local_38);
      if ((FShaderPreprocessDependencies *)local_28 != TVar3.Ptr) {
        pFVar4 = ((TVar3.Ptr)->Dependencies).AllocatorInstance.Data;
        ((TVar3.Ptr)->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38 != (FShaderPreprocessDependencies *)0x0) {
        FShaderPreprocessDependencies::_scalar_deleting_destructor_(local_38,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.SharedReferenceCount.ReferenceController);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      if (*(int *)(pFVar4 + 8) < 1) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_30 = pFVar4;
      ShaderPreprocessDependenciesEnd(param_2,(FShaderPreprocessDependencies *)&local_30,param_4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// InternalGetShaderIncludes @ 145e5fb30

/* WARNING: Removing unreachable block (ram,0x000145e5fc51) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
InternalGetShaderIncludes
          (wchar_t *param_1,wchar_t *param_2,TStringView<wchar_t> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,EShaderPlatform param_5,uint param_6,
          bool param_7,FName *param_8,FShaderPreprocessDependencies *param_9)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  wchar_t *pwVar13;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar14;
  FString *pFVar15;
  size_t sVar16;
  TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_> TVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FShaderPreprocessDependencies *pFVar23;
  FShaderPreprocessDependencies *this;
  wchar_t *pwVar24;
  uint uVar25;
  FShaderPreprocessDependencies *local_res18;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res20;
  FString local_e8;
  FString local_d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  TSharedPtr<FShaderPreprocessDependencies,1> local_b8;
  FShaderPreprocessDependencies *local_a8;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_70;
  undefined1 local_58 [24];
  
  if (param_3->Size < 1) {
    return;
  }
  local_res20 = param_4;
  if (param_7) {
    FString::FString(&local_d8,param_2);
    pFVar20 = (param_4->AllocatorInstance).Data;
    if (((pFVar20 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar20 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = param_4->ArrayNum;
    if (iVar10 == param_4->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar10 + 1;
    pFVar20 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = local_d8.Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar20 + 8) = local_d8.Data.ArrayNum;
    *(int *)(pFVar20 + 0xc) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
  }
  pwVar13 = FindFirstInclude(param_3->DataPtr);
  uVar21 = 0;
  if (pwVar13 != (wchar_t *)0x0) {
    do {
      uVar25 = uVar21;
      if (199 < uVar25) goto LAB_145e602f3;
      if (param_6 == 0) goto LAB_145e60351;
      pwVar18 = pwVar13;
      if (pwVar13 == (wchar_t *)0x0) {
LAB_145e5fccf:
        if ((pwVar18 != (wchar_t *)0x0) && (pwVar1 = pwVar18 + 1, pwVar1 != (wchar_t *)0x0)) {
          wVar3 = *pwVar1;
          pwVar24 = pwVar1;
          while (((wVar3 != L'\0' && (wVar3 != L'\"')) && (wVar3 != L'\n'))) {
            pwVar2 = pwVar24 + 1;
            pwVar24 = pwVar24 + 1;
            wVar3 = *pwVar2;
          }
          if (*pwVar24 == L'\"') {
            FString::ConstructFromPtrSize
                      (&local_e8,pwVar1,(int)((longlong)pwVar24 - (longlong)pwVar18 >> 1) + -1);
            bVar5 = FString::StartsWith(&local_e8,L"/",1,IgnoreCase);
            if (!bVar5) {
              FString::FString(&local_a0,param_2);
              pTVar14 = &FPaths::GetPath(&local_70,&local_a0)->Data;
              iVar10 = local_e8.Data.ArrayNum + -1;
              if (local_e8.Data.ArrayNum == 0) {
                iVar10 = 0;
              }
              if ((pTVar14->ArrayNum != 0) || (iVar11 = 1, iVar10 + 1 == 0)) {
                iVar11 = 0;
              }
              TArray<wchar_t,TSizedDefaultAllocator<32>_>::
              TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                        (&local_c8,pTVar14,iVar10 + 1 + iVar11);
              FString::PathAppend((FString *)&local_c8,
                                  (wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar10);
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              local_e8.Data.AllocatorInstance.Data = local_c8.AllocatorInstance.Data;
              local_e8.Data.ArrayNum = local_c8.ArrayNum;
              local_e8.Data.ArrayMax = local_c8.ArrayMax;
              local_c8.ArrayNum = 0;
              local_c8.ArrayMax = 0;
              local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_70.Data.AllocatorInstance.Data);
              }
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              FPaths::CollapseRelativeDirectories(&local_e8,false);
            }
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_e8.Data.ArrayNum != 0) {
              FVar19.Data = local_e8.Data.AllocatorInstance.Data;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)FVar19.Data,L"/Engine/Generated/Material.ush");
            if (iVar10 == 0) {
              FString::operator=(&local_e8,L"/Engine/Private/MaterialTemplate.ush");
            }
            bVar5 = ReplaceVirtualFilePathForShaderPlatform(&local_e8,param_5);
            bVar6 = ReplaceVirtualFilePathForShaderAutogen(&local_e8,param_5,param_8);
            bVar7 = FString::StartsWith(&local_e8,L"/Engine/Generated/",0x12,IgnoreCase);
            local_88 = local_e8.Data.AllocatorInstance.Data;
            iStack_80 = local_e8.Data.ArrayNum + -1;
            if (local_e8.Data.ArrayNum == 0) {
              iStack_80 = 0;
            }
            local_58._8_8_ = CONCAT44(uStack_7c,iStack_80);
            local_58._0_8_ = local_e8.Data.AllocatorInstance.Data;
            bVar8 = CheckVirtualShaderFilePath
                              ((TStringView<wchar_t> *)local_58,
                               (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
            AcquireSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
            if (!bVar8 || bVar7) {
LAB_145e5ff86:
              bVar7 = true;
            }
            else {
              bVar7 = FString::StartsWith(&local_e8,L"/Engine/Private/Platform/",0x19,IgnoreCase);
              if (((bVar7) ||
                  (bVar7 = FString::StartsWith(&local_e8,L"/Engine/Public/Platform/",0x18,IgnoreCase
                                              ), bVar7)) ||
                 (bVar7 = FString::StartsWith(&local_e8,L"/Platform/",10,IgnoreCase), bVar7)) {
                pFVar15 = FShaderHashCache::GetPlatformIncludeDirectory(&GShaderHashCache,param_5);
                if ((1 < (pFVar15->Data).ArrayNum) &&
                   (pFVar20 = (pFVar15->Data).AllocatorInstance.Data,
                   pFVar20 != (FScriptContainerElement *)0x0)) {
                  sVar16 = wcslen((wchar_t *)pFVar20);
                  iVar10 = FString::Find(&local_e8,(wchar_t *)pFVar20,(int)sVar16,IgnoreCase,
                                         FromStart,-1);
                  if (iVar10 != -1) goto LAB_145e5ff82;
                }
                goto LAB_145e5ff86;
              }
LAB_145e5ff82:
              bVar7 = false;
            }
            ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
            bVar8 = FString::StartsWith(&local_e8,L"/Engine/Private/Platform/",0x19,IgnoreCase);
            if ((bVar8) ||
               (bVar8 = FString::StartsWith(&local_e8,L"/Engine/Public/Platform/",0x18,IgnoreCase),
               bVar8)) {
LAB_145e5fff8:
              bVar8 = true;
            }
            else {
              bVar9 = FString::StartsWith(&local_e8,L"/Platform/",10,IgnoreCase);
              bVar8 = false;
              if (bVar9) goto LAB_145e5fff8;
            }
            if (!bVar7) {
              pFVar20 = (param_4->AllocatorInstance).Data;
              iVar10 = local_res20->ArrayNum;
              for (pFVar22 = pFVar20; pFVar22 != pFVar20 + (longlong)iVar10 * 0x10;
                  pFVar22 = pFVar22 + 0x10) {
                iVar11 = *(int *)(pFVar22 + 8);
                if (iVar11 == local_e8.Data.ArrayNum) {
                  if (1 < iVar11) {
                    iVar11 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)pFVar22,
                                        (wchar_t *)local_e8.Data.AllocatorInstance.Data);
                    bVar7 = iVar11 == 0;
                    goto LAB_145e60046;
                  }
LAB_145e60058:
                  if ((int)((longlong)pFVar22 - (longlong)pFVar20 >> 4) != -1) goto LAB_145e60185;
                  break;
                }
                bVar7 = iVar11 + local_e8.Data.ArrayNum == 1;
LAB_145e60046:
                if (bVar7) goto LAB_145e60058;
              }
              pFVar23 = (FShaderPreprocessDependencies *)0x0;
              this = pFVar23;
              if ((param_9 == (FShaderPreprocessDependencies *)0x0) ||
                 (this = (FShaderPreprocessDependencies *)0x0, (bVar5 || bVar6) || bVar8)) {
LAB_145e60168:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                if (this != (FShaderPreprocessDependencies *)0x0) {
                  FShaderPreprocessDependencies::_scalar_deleting_destructor_(this,1);
                }
LAB_145e60185:
                param_4 = local_res20;
                if ((param_9 == (FShaderPreprocessDependencies *)0x0) || ((bVar5 || bVar6) || bVar8)
                   ) goto LAB_145e60280;
              }
              else {
                TVar17 = ShaderPreprocessDependenciesBegin((wchar_t *)&local_res18);
                if ((FShaderPreprocessDependencies *)&stack0xffffffffffffff88 != TVar17.Ptr) {
                  pFVar23 = (FShaderPreprocessDependencies *)
                            ((TVar17.Ptr)->Dependencies).AllocatorInstance.Data;
                  ((TVar17.Ptr)->Dependencies).AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                }
                if (local_res18 != (FShaderPreprocessDependencies *)0x0) {
                  FShaderPreprocessDependencies::_scalar_deleting_destructor_(local_res18,1);
                }
                if (pFVar23 != (FShaderPreprocessDependencies *)0x0) {
                  if (((pFVar23->Dependencies).ArrayNum < 1) &&
                     (bVar7 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (((pFVar23->Dependencies).ArrayNum < 1) &&
                     (bVar7 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  this = pFVar23;
                  if (*(longlong *)((pFVar23->Dependencies).AllocatorInstance.Data + 0x40) == 0)
                  goto LAB_145e60168;
                  FVar19.Data = (FScriptContainerElement *)L"";
                  if (local_e8.Data.ArrayNum != 0) {
                    FVar19.Data = local_e8.Data.AllocatorInstance.Data;
                  }
                  local_a8 = pFVar23;
                  ShaderPreprocessDependenciesEnd
                            ((wchar_t *)FVar19.Data,(FShaderPreprocessDependencies *)&local_a8,
                             param_5);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
              }
              FVar19.Data = (FScriptContainerElement *)L"";
              if (local_e8.Data.ArrayNum != 0) {
                FVar19.Data = local_e8.Data.AllocatorInstance.Data;
              }
              local_b8.Object = (FShaderPreprocessDependencies *)0x0;
              local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              bVar5 = GetShaderPreprocessDependencies((wchar_t *)FVar19.Data,param_5,&local_b8);
              if (bVar5) {
                if ((local_b8.Object == (FShaderPreprocessDependencies *)0x0) &&
                   (bVar5 = FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar23 = local_b8.Object;
                iVar10 = ((local_b8.Object)->Dependencies).ArrayNum;
                uVar21 = 1;
                if (1 < iVar10) {
                  do {
                    uVar12 = 0;
                    if ((int)uVar21 < iVar10) {
                      uVar12 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar5 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar5)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    AddPreprocessDependency
                              (param_9,(FShaderPreprocessDependency *)
                                       ((pFVar23->Dependencies).AllocatorInstance.Data +
                                       (longlong)(int)uVar21 * 0x50));
                    iVar10 = (pFVar23->Dependencies).ArrayNum;
                    uVar21 = uVar21 + 1;
                  } while ((int)uVar21 < iVar10);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_b8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              param_4 = local_res20;
            }
LAB_145e60280:
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
          }
        }
        if (pwVar13 != (wchar_t *)0x0) goto LAB_145e6029f;
      }
      else {
        wVar3 = *pwVar13;
        while (((wVar3 != L'\0' && (wVar3 != L'\"')) && (wVar3 != L'\n'))) {
          pwVar1 = pwVar18 + 1;
          pwVar18 = pwVar18 + 1;
          wVar3 = *pwVar1;
        }
        if (*pwVar18 == L'\"') goto LAB_145e5fccf;
LAB_145e6029f:
        wVar3 = *pwVar13;
        while ((wVar3 != L'\0' && (wVar3 != L'\n'))) {
          pwVar18 = pwVar13 + 1;
          pwVar13 = pwVar13 + 1;
          wVar3 = *pwVar18;
        }
        if (*pwVar13 != L'\n') break;
      }
      if ((pwVar13 != (wchar_t *)0x0) && (*pwVar13 != L'\0')) {
        pwVar13 = FindFirstInclude(pwVar13 + 1);
      }
      uVar21 = uVar25 + 1;
    } while (pwVar13 != (wchar_t *)0x0);
    uVar25 = uVar25 + 1;
LAB_145e602f3:
    if (uVar25 == 200) goto LAB_145e602fc;
  }
LAB_145e60351:
  if (param_6 != 0) {
    return;
  }
LAB_145e602fc:
  if (2 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  return;
}

// InvalidateShaderFileCacheEntry @ 145e60ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InvalidateShaderFileCacheEntry(wchar_t *param_1,EShaderPlatform param_2,FName *param_3)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString *local_res20;
  FString local_18;
  
  FString::FString(&local_18,param_1);
  ReplaceVirtualFilePathForShaderPlatform(&local_18,param_2);
  ReplaceVirtualFilePathForShaderAutogen(&local_18,param_2,param_3);
  local_res20 = &local_18;
  TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>::Remove_::__l2::<lambda_1>_>
            ((TStripedMapBase<31,TMap<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>,FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)&GShaderFileCache,&local_18,(<lambda_1> *)&local_res20);
  AcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  if (*(int *)&GShaderHashCache.Platforms[param_2].ShaderHashCache.field_0x8 !=
      *(int *)&GShaderHashCache.Platforms[param_2].ShaderHashCache.field_0x34) {
    iVar3 = local_18.Data.ArrayNum + -1;
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                *)&GShaderHashCache.Platforms[param_2].ShaderHashCache,uVar2,&local_18);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IsRayTracingShaderFrequency @ 145e60db0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl IsRayTracingShaderFrequency(EShaderFrequency param_1)

{
  switch(param_1) {
  default:
    return false;
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
    return true;
  }
}

// IsShaderDevelopmentModeEnabled @ 145e61080

bool __cdecl IsShaderDevelopmentModeEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarShaderDevelopmentMode.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] != 0;
    }
  }
  return pTVar1->ShadowedValue[0] != 0;
}

// LexFromString @ 145e610d0

void __cdecl LexFromString(ECompilerFlags *param_1,wchar_t *param_2)

{
  uint uVar1;
  TMap<FString,ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,ECompilerFlags,0>_>
  *this;
  ECompilerFlags *pEVar2;
  int iVar3;
  ForAnyElementType FVar4;
  ECompilerFlags *pEVar5;
  FString local_18;
  
  this = GetCompilerFlagsDictionary();
  FString::FString(&local_18,param_2);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,enum_ECompilerFlags>,TDefaultMapHashableKeyFuncs<FString,enum_ECompilerFlags,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(this,uVar1,&local_18);
  pEVar2 = (ECompilerFlags *)0x0;
  if (iVar3 != -1) {
    pEVar2 = (ECompilerFlags *)((longlong)iVar3 * 0x20 + *(longlong *)this);
  }
  pEVar5 = pEVar2 + 4;
  if (pEVar2 == (ECompilerFlags *)0x0) {
    pEVar5 = (ECompilerFlags *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pEVar5 == (ECompilerFlags *)0x0) {
    *param_1 = CFLAG_Max;
  }
  else {
    *param_1 = *pEVar5;
  }
  return;
}

// LexToString @ 145e61190

wchar_t * __cdecl LexToString(ECompilerFlags param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TMap<FString,ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,ECompilerFlags,0>_>
  *pTVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<FString,ECompilerFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,ECompilerFlags,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  pTVar4 = GetCompilerFlagsDictionary();
  iVar2 = *(int *)&pTVar4->field_0x28;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar4->field_0x10;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)&pTVar4->field_0x20;
    if (*(uint **)&pTVar4->field_0x20 == (uint *)0x0) {
      puVar7 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar7;
    while (uVar3 == 0) {
      lVar6 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_145e6122a;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_24 = (int)lVar6 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_145e6122a:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = pTVar4;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      puVar5 = (undefined8 *)(*(longlong *)pTVar4 + (longlong)TStack_60.CurrentBitIndex * 0x20);
      if (*(ECompilerFlags *)(puVar5 + 2) == param_1) {
        if (puVar5 == (undefined8 *)0x0) {
          return (wchar_t *)0x0;
        }
        if (*(int *)(puVar5 + 1) == 0) {
          return L"";
        }
        return (wchar_t *)*puVar5;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return (wchar_t *)0x0;
}

// LexToString @ 145e61300

wchar_t * __cdecl LexToString(EShaderCompileJobStatus param_1)

{
  switch(param_1) {
  case Unset:
    return L"Unset";
  case Ready:
    return L"Ready";
  case Skipped:
    return L"Skipped";
  case Cancelled:
    return L"Cancelled";
  case PendingDDC:
    return L"PendingDDC";
  case Queued:
    return L"Queued";
  case PendingDistributedExecution:
    return L"PendingDistributedExecution";
  case PendingLocalExecution:
    return L"PendingLocalExecution";
  case CompleteDistributedExecution:
    return L"CompleteDistributedExecution";
  case CompleteFoundInCache:
    return L"CompleteFoundInCache";
  case CompleteFoundInDDC:
    return L"CompleteFoundInDDC";
  case CompleteLocalExecution:
    return L"CompleteLocalExecution";
  default:
    return L"(unknown)";
  }
}

// LoadCachedShaderSourceFile @ 145e61740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
LoadCachedShaderSourceFile
          (wchar_t *param_1,EShaderPlatform param_2,TSharedPtr<FString,1> *param_3,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_4,FName *param_5,
          TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *param_6)

{
  return false;
}

// LoadShaderSourceFile @ 145e61980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
LoadShaderSourceFile
          (wchar_t *param_1,EShaderPlatform param_2,FString *param_3,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_4,FName *param_5,
          TSharedPtr<TArray<char,TSizedDefaultAllocator<32>_>,1> *param_6)

{
  return false;
}

// LoadShaderSourceFileChecked @ 145e61990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadShaderSourceFileChecked
          (wchar_t *param_1,EShaderPlatform param_2,FString *param_3,FName *param_4)

{
  FString local_18;
  
  FString::PrintfImpl(&local_18,L"Couldn\'t find source file of virtual shader path \'%s\'");
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// LogShaderSourceDirectoryMappings @ 145e61d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogShaderSourceDirectoryMappings(void)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar11 = 0;
  uVar10 = GShaderSourceDirectoryMappings._40_4_;
  uVar5 = 0;
  if (uVar10 != 0) {
    puVar12 = (uint *)&GShaderSourceDirectoryMappings.field_0x10;
    if (GShaderSourceDirectoryMappings._32_8_ != 0) {
      puVar12 = (uint *)GShaderSourceDirectoryMappings._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_145e61dd0;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    uVar5 = local_res10 + -1 + iVar11;
    if ((int)uVar10 < (int)uVar5) {
      uVar5 = uVar10;
    }
  }
LAB_145e61dd0:
  bVar2 = GShaderSourceDirectoryMappings._40_1_;
  uVar8 = uVar10 & 0xffffffe0;
  uVar13 = GShaderSourceDirectoryMappings._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar9);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar11;
  uStack_40 = CONCAT44(uStack_6c,
                       GShaderSourceDirectoryMappings._8_4_ - GShaderSourceDirectoryMappings._52_4_)
  ;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&GShaderSourceDirectoryMappings.field_0x10;
  uVar5 = uVar10;
  if ((int)uVar10 < 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = GShaderSourceDirectoryMappings._40_4_;
  }
  if (uVar10 != uVar5) {
    lVar6 = 0x154bebdc0;
    if (GShaderSourceDirectoryMappings._32_8_ != 0) {
      lVar6 = GShaderSourceDirectoryMappings._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) {
        uVar13 = (ulonglong)uVar5;
        goto LAB_145e61ed0;
      }
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    uVar13 = (ulonglong)uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar13 = (ulonglong)uVar5;
    }
  }
LAB_145e61ed0:
  while( true ) {
    if (GShaderSourceDirectoryMappings._8_4_ - GShaderSourceDirectoryMappings._52_4_ !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&GShaderSourceDirectoryMappings.field_0x10)) break;
    if (4 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MakeInjectedShaderCodeBlock @ 145e61f90

FString * __cdecl
MakeInjectedShaderCodeBlock(FString *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  FString::PrintfImpl(__return_storage_ptr__,L"#line 1 \"%s\"\n%s");
  return __return_storage_ptr__;
}

// ModalErrorOrLog @ 145e62e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ModalErrorOrLog(FString *param_1,FString *param_2,long64 param_3,long64 param_4,bool param_5)

{
  FThreadSafeBool FVar1;
  bool bVar2;
  FOutputDeviceRedirector *this;
  FText *pFVar3;
  FText *pFVar4;
  TRefCountPtr<ITextData> TVar5;
  FText local_28;
  FText local_18;
  
  TVar5.Reference = (ITextData *)0x0;
  if (param_4 < param_3) {
    FString::PrintfImpl((FString *)&local_28,
                        L" (Truncated or corrupt output file! Current file pos %lld, file size %lld)"
                       );
    TVar5.Reference = local_28.TextData.Reference;
  }
  if (param_5) {
    this = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(this);
    bVar2 = FApp::IsUnattended();
    FVar1 = bModalReported;
    if (bVar2) {
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    else {
      LOCK();
      bModalReported = (FThreadSafeBool)0x1;
      UNLOCK();
      if (FVar1 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
        FWindowsPlatformProcess::SleepInfinite();
      }
      if (1 < (byte)LogShaders._0_1_) {
        UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      pFVar3 = FText::FromString(&local_18,param_1);
      pFVar4 = FText::FromString(&local_28,param_2);
      FMessageDialog::Open(Ok,pFVar4,pFVar3);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
    }
  }
  else if (1 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    FMemory::Free(TVar5.Reference);
  }
  return;
}

// ParseVirtualShaderFilename @ 145e672d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl ParseVirtualShaderFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  IFileManager *pIVar6;
  FString *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FString local_68;
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  void *local_28 [2];
  TStringView<wchar_t> local_18;
  
  pwVar5 = FGenericPlatformProcess::ShaderDir();
  FString::FString(&local_58,pwVar5);
  FString::ReplaceInline(&local_58,L"\\",L"/",CaseSensitive);
  iVar8 = local_58.Data.ArrayNum + -2;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = -1;
  }
  iVar8 = FString::Find(&local_58,L"/",1,CaseSensitive,FromEnd,iVar8);
  iVar12 = 0;
  uVar14 = 0;
  if (iVar8 != -1) {
    uVar4 = local_58.Data.ArrayNum - 1;
    if (local_58.Data.ArrayNum == 0) {
      uVar4 = uVar14;
    }
    uVar10 = uVar4;
    if ((int)(uVar4 - iVar8) < (int)uVar4) {
      uVar10 = uVar4 - iVar8;
    }
    uVar11 = 0;
    if (0 < (int)uVar10) {
      uVar11 = uVar10;
    }
    FString::RemoveAt(&local_58,0,uVar4 - uVar11,No);
  }
  FString::Replace(param_1,&local_68,L"\\",L"/",CaseSensitive);
  uVar10 = 0;
  uVar4 = local_68.Data.ArrayNum - 1;
  if (local_68.Data.ArrayNum == 0) {
    uVar4 = uVar10;
  }
  if ((0 < (int)uVar4) && (*(short *)local_68.Data.AllocatorInstance.Data == 0x2f)) {
    uVar4 = local_68.Data.ArrayNum - 2;
    uVar11 = local_68.Data.ArrayNum - 1;
    if (local_68.Data.ArrayNum == 0) {
      uVar4 = 0xffffffff;
      uVar11 = uVar10;
    }
    uVar9 = uVar11;
    if ((int)uVar4 < (int)uVar11) {
      uVar9 = uVar4;
    }
    uVar4 = 0;
    if (0 < (int)uVar9) {
      uVar4 = uVar9;
    }
    FString::RemoveAt(&local_68,0,uVar11 - uVar4,No);
  }
  pIVar6 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar13.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar7 = (FString *)(**(code **)((longlong)*pIVar6 + 0xf8))(pIVar6,local_28,FVar13.Data);
  if (&local_68 != pFVar7) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_68.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_68.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  uVar4 = local_58.Data.ArrayNum - 1;
  FVar13.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    uVar4 = uVar10;
    FVar13.Data = (FScriptContainerElement *)L"";
  }
  uVar4 = FString::Find(&local_68,(wchar_t *)FVar13.Data,uVar4,IgnoreCase,FromStart,-1);
  if (uVar4 != 0xffffffff) {
    uVar11 = local_58.Data.ArrayNum + -1 + uVar4;
    if (local_58.Data.ArrayNum == 0) {
      uVar11 = uVar4;
    }
    uVar4 = uVar10;
    if ((int)uVar11 < local_68.Data.ArrayNum) {
      uVar4 = ~uVar11 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar2)();
      return pFVar7;
    }
    if (*(short *)(local_68.Data.AllocatorInstance.Data + (longlong)(int)uVar11 * 2) == 0x2f) {
      uVar11 = uVar11 + 1;
    }
    iVar8 = FString::Find(&local_68,L"WorkingDirectory",0x10,IgnoreCase,FromStart,-1);
    if (iVar8 != -1) {
      do {
        iVar8 = FString::Find(&local_68,L"/",1,CaseSensitive,FromStart,uVar11);
        if (iVar8 == -1) break;
        iVar12 = iVar12 + 1;
        uVar11 = iVar8 + 1;
      } while (iVar12 < 3);
    }
    uVar4 = local_68.Data.ArrayNum - 1U;
    if (local_68.Data.ArrayNum == 0) {
      uVar4 = uVar14;
    }
    if ((uVar4 - uVar11 != 0x7fffffff) &&
       ((longlong)(int)(uVar4 - uVar11) + (longlong)(int)uVar11 < 0x7fffffff)) {
      if (local_68.Data.ArrayNum != 0) {
        uVar10 = local_68.Data.ArrayNum - 1U;
      }
      uVar9 = uVar10;
      if ((int)uVar4 < (int)uVar10) {
        uVar9 = uVar4;
      }
      if (0 < (int)uVar9) {
        uVar14 = uVar9;
      }
      FString::RemoveAt(&local_68,uVar14,uVar10 - uVar14,No);
    }
    FString::RemoveAt(&local_68,0,uVar11,No);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar12 = 0;
  iVar8 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar8 = iVar12;
  }
  if ((iVar8 < 1) || (*(short *)local_68.Data.AllocatorInstance.Data == 0x2f)) {
    iVar8 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = iVar12;
    }
    FString::AssignRange
              (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar8);
  }
  else {
    FString::ConcatCF(&local_48,L"/",&local_68);
    if (__return_storage_ptr__ != &local_48) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_38 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar8 = (__return_storage_ptr__->Data).ArrayNum;
  iStack_30 = iVar8 + -1;
  if (iVar8 == 0) {
    iStack_30 = iVar12;
  }
  local_18._12_4_ = uStack_2c;
  local_18.Size = iStack_30;
  local_18.DataPtr = (wchar_t *)local_38;
  bVar3 = CheckVirtualShaderFilePath
                    (&local_18,(TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0);
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("CheckVirtualShaderFilePath(OutputFilename)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x943,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar2)();
    return pFVar7;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PreprocessShader @ 145e68010

/* WARNING: Removing unreachable block (ram,0x000145e68374) */
/* WARNING: Removing unreachable block (ram,0x000145e68382) */
/* WARNING: Removing unreachable block (ram,0x000145e68390) */
/* WARNING: Removing unreachable block (ram,0x000145e6839e) */
/* WARNING: Removing unreachable block (ram,0x000145e683ac) */
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

bool __cdecl PreprocessShader(FShaderCommonCompileJob *param_1)

{
  FParameters *pFVar1;
  int iVar2;
  FParameters FVar3;
  code *pcVar4;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  IShaderFormat *pIVar10;
  FScriptContainerElement *pFVar11;
  FShaderCompileJob *pFVar12;
  FParameters *pFVar13;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    TargetPlatformManager = GetTargetPlatformManagerRef();
    _Init_thread_footer(&_TSS0);
  }
  pFVar12 = (FShaderCompileJob *)0x0;
  if (param_1->Type == Single) {
    pFVar12 = (FShaderCompileJob *)param_1;
  }
  if (pFVar12 == (FShaderCompileJob *)0x0) {
    pFVar12 = (FShaderCompileJob *)0x0;
    if (param_1->Type == Pipeline) {
      pFVar12 = (FShaderCompileJob *)param_1;
    }
    if (pFVar12 == (FShaderCompileJob *)0x0) {
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x81e,L"Unknown shader compile job type or bad job pointer");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      bVar6 = false;
    }
    else {
      pFVar13 = (pFVar12->ShaderParameters).Object;
      bVar6 = false;
      iVar2 = *(int *)&(pFVar12->ShaderParameters).SharedReferenceCount.ReferenceController;
      pFVar1 = pFVar13 + iVar2;
      while( true ) {
        if (*(int *)&(pFVar12->ShaderParameters).SharedReferenceCount.ReferenceController != iVar2)
        {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar13 == pFVar1) break;
        FVar3 = *pFVar13;
        pIVar10 = (IShaderFormat *)
                  (**(code **)((longlong)*TargetPlatformManager + 0x50))
                            (TargetPlatformManager,*(FName *)((longlong)FVar3 + 0xdc));
        if (bVar6) {
          switch(*(byte *)&(((FShaderCompilerInput *)((longlong)FVar3 + 0xd8))->Target).field0_0x0 &
                 0xf) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
            break;
          case 9:
            break;
          case 10:
            break;
          case 0xb:
          }
          FString::PrintfImpl(&local_88,
                              L"Preprocessing %s stage skipped due to earlier stage preprocessing failure."
                             );
          pTVar5 = (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)
                   ((longlong)FVar3 + 0x630);
          FString::FString(&local_78,L"");
          FString::FString(&local_68,L"");
          local_58 = local_88.Data.AllocatorInstance.Data;
          local_50._0_4_ = local_88.Data.ArrayNum;
          local_50._4_4_ = local_88.Data.ArrayMax;
          local_88.Data.ArrayNum = 0;
          local_88.Data.ArrayMax = 0;
          local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FString::FString(&local_48,L"");
          FString::FString(&local_38,L"");
          pFVar11 = (pTVar5->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 <
               pFVar11 + (longlong)*(int *)((longlong)FVar3 + 0x63c) * 0x50)) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          iVar9 = *(int *)((longlong)FVar3 + 0x638);
          if (iVar9 == *(int *)((longlong)FVar3 + 0x63c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,(ForAnyElementType *)pTVar5,(int *)((longlong)FVar3 + 0x63c));
          }
          *(int *)((longlong)FVar3 + 0x638) = iVar9 + 1;
          pFVar11 = (pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 0x50;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_78.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 8) = local_78.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_78.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x10) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x10) = local_68.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x18) = local_68.Data.ArrayNum;
          *(int *)(pFVar11 + 0x1c) = local_68.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x20) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x20) = local_58;
          *(int *)(pFVar11 + 0x28) = (int)local_50;
          *(int *)(pFVar11 + 0x2c) = local_50._4_4_;
          *(undefined8 *)(pFVar11 + 0x30) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x30) = local_48.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x38) = local_48.Data.ArrayNum;
          *(int *)(pFVar11 + 0x3c) = local_48.Data.ArrayMax;
          *(undefined8 *)(pFVar11 + 0x40) = 0;
          *(FScriptContainerElement **)(pFVar11 + 0x40) = local_38.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 0x48) = local_38.Data.ArrayNum;
          *(int *)(pFVar11 + 0x4c) = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          local_58 = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          pFVar13 = pFVar13 + 1;
        }
        else {
          bVar6 = FInternalShaderCompilerFunctions::PreprocessShaderInternal
                            (pIVar10,(FShaderCompileJob *)FVar3);
          bVar6 = !bVar6;
          pFVar13 = pFVar13 + 1;
        }
      }
      bVar6 = !bVar6;
    }
    return bVar6;
  }
  pIVar10 = (IShaderFormat *)
            (**(code **)((longlong)*TargetPlatformManager + 0x50))
                      (TargetPlatformManager,(pFVar12->Input).ShaderFormat);
  bVar6 = FInternalShaderCompilerFunctions::PreprocessShaderInternal(pIVar10,pFVar12);
  return bVar6;
}

// ReadSingleJob @ 145e688b0

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

void __cdecl ReadSingleJob(FShaderCompileJob *param_1,FArchive *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId687,"ReadSingleJob",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
               ,0x2af);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId687);
  }
  if (((param_1->_padding_ & 1) != 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("!CurrentJob->bFinalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                         ,0x2b1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 1;
  FShaderCompileJob::SerializeWorkerOutputInner(param_1,param_2,false);
  if ((((*(longlong *)(param_1->Output).OutputHash.Hash == 0) &&
       (*(longlong *)((param_1->Output).OutputHash.Hash + 8) == 0)) &&
      (*(int *)((param_1->Output).OutputHash.Hash + 0x10) == 0)) &&
     (((param_1->_padding_ & 2) != 0 &&
      (bVar2 = FDebug::CheckVerifyFailedImpl2
                         ("CurrentJob->Output.OutputHash != FSHAHash() || !CurrentJob->bSucceeded",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                          ,0x2b8,
                          L"OutputHash for a successful job was not set in the shader compile worker!"
                         ), bVar2)))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReplaceVirtualFilePathForShaderAutogen @ 145e6b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
ReplaceVirtualFilePathForShaderAutogen(FString *param_1,EShaderPlatform param_2,FName *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  void *pvVar6;
  wchar_t *pwVar7;
  ulong64 uVar8;
  wchar_t *pwVar9;
  undefined1 auStack_898 [32];
  FName local_878;
  FString local_870;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  pwVar9 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"/Engine/Generated/ShaderAutogen/",0x20);
  if (iVar5 != 0) {
    return false;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0) {
    if ((param_3 == (FName *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("FDataDrivenShaderPlatformInfo::IsValid(ShaderPlatform) || InShaderPlatformName != nullptr"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x981,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_2].bContainsValidPlatformInfo == 0)
    goto LAB_145e6b59d;
  }
  param_3 = &FGenericDataDrivenShaderPlatformInfo::Infos[param_2].Name;
LAB_145e6b59d:
  local_878 = ((FGenericDataDrivenShaderPlatformInfo *)param_3)->Name;
  local_858.Base = local_838;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_858.CurPos = local_838;
  local_858.End = (wchar_t *)local_38;
  pvVar6 = FGenericPlatformString::Memcpy(local_838,L"/ShaderAutogen/",0x1e);
  local_858.CurPos = (wchar_t *)((longlong)pvVar6 + 0x1e);
  FName::ToString(&local_878,&local_870);
  iVar5 = local_870.Data.ArrayNum + -1;
  FVar2.Data = local_870.Data.AllocatorInstance.Data;
  if (local_870.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = (ulong64)iVar5;
  if (local_858.End < local_858.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar8);
  }
  if (iVar5 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,FVar2.Data,uVar8 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
  }
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'/';
  iVar5 = (param_1->Data).ArrayNum;
  local_858.CurPos = local_858.CurPos + 1;
  if (iVar5 == 0) {
    iVar5 = -0x20;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -0x21;
  }
  uVar8 = (ulong64)iVar5;
  if (local_858.End < local_858.CurPos + uVar8) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar8);
  }
  if (iVar5 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy
                       (local_858.CurPos,(FScriptContainerElement *)((longlong)pwVar9 + 0x40),
                        uVar8 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
  }
  FString::AssignRange
            (param_1,local_858.Base,
             (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
  if (local_870.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_870.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return true;
}

// ReplaceVirtualFilePathForShaderPlatform @ 145e6b740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl ReplaceVirtualFilePathForShaderPlatform(FString *param_1,EShaderPlatform param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t **ppwVar10;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  wchar_t *local_38;
  wchar_t *local_30;
  wchar_t *local_28;
  wchar_t *local_20;
  
  AcquireSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  if ((SP_CUSTOM_PLATFORM_LAST < param_2) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform < EShaderPlatform::SP_NumPlatforms",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1fa,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((GShaderHashCache.bInitialized == false) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1fb,
                         L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::GetPlatformIncludeDirectory."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = GShaderHashCache.Platforms[param_2].IncludeDirectory.Data.ArrayNum;
  lVar8 = (longlong)local_70;
  pFVar1 = GShaderHashCache.Platforms[param_2].IncludeDirectory.Data.AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,pFVar1,lVar8 * 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  if (1 < local_70) {
    local_30 = L"Private";
    pwVar9 = L"/Platform/Private/";
    local_38 = L"/Platform/Private/";
    local_28 = L"/Platform/Public/";
    ppwVar10 = &local_38;
    local_20 = L"Public";
    while( true ) {
      iVar6 = 0;
      if (pwVar9 != (wchar_t *)0x0) {
        sVar7 = wcslen(pwVar9);
        iVar6 = (int)sVar7;
      }
      bVar3 = FString::StartsWith(param_1,pwVar9,iVar6,IgnoreCase);
      if (bVar3) {
        FString::PrintfImpl(&local_58,L"/Platform%s");
        FString::RemoveFromEnd(&local_58,L"/",1,IgnoreCase);
        if (local_58.Data.ArrayNum == 0) {
          pwVar9 = L"";
          iVar6 = 0;
        }
        else {
          pwVar9 = (wchar_t *)local_58.Data.AllocatorInstance.Data;
          iVar6 = local_58.Data.ArrayNum + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
        iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&GShaderSourceDirectoryMappings,uVar5,&local_58);
        if (iVar6 != -1) {
          sVar7 = wcslen(*ppwVar10);
          FString::RightChop(param_1,&local_48,(int)sVar7);
          FString::PrintfImpl(&local_68,L"/Platform%s%s/%s");
          if (param_1 != &local_68) {
            pFVar1 = (param_1->Data).AllocatorInstance.Data;
            if (pFVar1 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar1);
            }
            (param_1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            (param_1->Data).ArrayNum = local_68.Data.ArrayNum;
            (param_1->Data).ArrayMax = local_68.Data.ArrayMax;
            local_68.Data.ArrayNum = 0;
            local_68.Data.ArrayMax = 0;
            local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          bVar3 = true;
          goto LAB_145e6b9e5;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      ppwVar10 = ppwVar10 + 2;
      if (ppwVar10 == (wchar_t **)&stack0xffffffffffffffe8) break;
      pwVar9 = *ppwVar10;
    }
  }
  bVar3 = false;
LAB_145e6b9e5:
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return bVar3;
}

// ReportVirtualShaderFilePathError @ 145e6ba40

/* WARNING: Removing unreachable block (ram,0x000145e6bc0c) */
/* WARNING: Removing unreachable block (ram,0x000145e6bc1a) */
/* WARNING: Removing unreachable block (ram,0x000145e6bc28) */
/* WARNING: Removing unreachable block (ram,0x000145e6bc36) */
/* WARNING: Removing unreachable block (ram,0x000145e6bc44) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ReportVirtualShaderFilePathError
          (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  if (param_1 == (TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *)0x0) {
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else {
    FString::FString(&local_58,L"");
    FString::FString(&local_48,L"");
    local_38 = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30._0_4_ = (param_2->Data).ArrayNum;
    local_30._4_4_ = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    FString::FString(&local_28,L"");
    FString::FString(&local_18,L"");
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)param_1->ArrayMax * 0x50)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = param_1->ArrayNum;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x50;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_58.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_58.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_58.Data.ArrayMax;
    *(undefined8 *)(pFVar4 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x10) = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 0x18) = local_48.Data.ArrayNum;
    *(int *)(pFVar4 + 0x1c) = local_48.Data.ArrayMax;
    *(undefined8 *)(pFVar4 + 0x20) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x20) = local_38;
    *(undefined4 *)(pFVar4 + 0x28) = (undefined4)local_30;
    *(undefined4 *)(pFVar4 + 0x2c) = local_30._4_4_;
    *(undefined8 *)(pFVar4 + 0x30) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x30) = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 0x38) = local_28.Data.ArrayNum;
    *(int *)(pFVar4 + 0x3c) = local_28.Data.ArrayMax;
    *(undefined8 *)(pFVar4 + 0x40) = 0;
    *(FScriptContainerElement **)(pFVar4 + 0x40) = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 0x48) = local_18.Data.ArrayNum;
    *(int *)(pFVar4 + 0x4c) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    local_38 = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ResetAllShaderSourceDirectoryMappings @ 145e6bed0

void __cdecl ResetAllShaderSourceDirectoryMappings(void)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&GShaderSourceDirectoryMappings);
  return;
}

// ShaderFormatNameToShaderPlatform @ 145e6e8f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl ShaderFormatNameToShaderPlatform(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  EShaderPlatform EVar3;
  FStaticShaderPlatformNames *pFVar4;
  uint uVar5;
  
  if (param_1 == NAME_PCD3D_SM6) {
    return SP_PCD3D_SM6;
  }
  if (param_1 == NAME_PCD3D_SM5) {
    return SP_PCD3D_SM5;
  }
  if (param_1 == NAME_PCD3D_ES3_1) {
    return SP_PCD3D_ES3_1;
  }
  if (param_1 == NAME_GLSL_150_ES31) {
    return SP_OPENGL_PCES3_1;
  }
  if (param_1 == NAME_GLSL_ES3_1_ANDROID) {
    return SP_OPENGL_ES3_1_ANDROID;
  }
  if ((param_1 == NAME_SF_METAL_ES3_1_IOS) || (param_1 == NAME_SF_METAL_ES3_1_IOS_DEPRECATED)) {
    return SP_METAL;
  }
  if ((param_1 == NAME_SF_METAL_SM5_IOS) || (param_1 == NAME_SF_METAL_SM5_IOS_DEPRECATED)) {
    return SP_METAL_MRT;
  }
  if ((param_1 != NAME_SF_METAL_ES3_1_TVOS) && (param_1 != NAME_SF_METAL_ES3_1_TVOS_DEPRECATED)) {
    if ((param_1 == NAME_SF_METAL_SM5_TVOS) || (param_1 == NAME_SF_METAL_SM5_TVOS_DEPRECATED)) {
      return SP_METAL_MRT_TVOS;
    }
    if (param_1 == NAME_SF_METAL_SM5) {
      return SP_METAL_SM5;
    }
    if (param_1 == NAME_SF_METAL_SM6) {
      return SP_METAL_SM6;
    }
    if (param_1 == NAME_SF_METAL_SIM) {
      return SP_METAL_SIM;
    }
    if ((param_1 == NAME_SF_METAL_ES3_1) || (param_1 == NAME_SF_METAL_MRT_MAC_DEPRECATED)) {
      return SP_METAL_ES3_1;
    }
    if (param_1 == NAME_VULKAN_ES3_1_ANDROID) {
      return SP_VULKAN_ES3_1_ANDROID;
    }
    if (param_1 != NAME_VULKAN_ES3_1) {
      if (param_1 == NAME_VULKAN_SM5) {
        return SP_VULKAN_SM5;
      }
      if (param_1 != NAME_VULKAN_SM6) {
        if (param_1 == NAME_VULKAN_SM5_ANDROID) {
          return SP_VULKAN_SM5_ANDROID;
        }
        pFVar4 = FStaticShaderPlatformNames::Get();
        uVar5 = 0x20;
        do {
          if ((0xf < (ushort)((EShaderPlatform)uVar5 - SP_StaticPlatform_First)) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("IsStaticPlatform(Platform)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIStaticShaderPlatformNames.h"
                                 ,0x30,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
          if (param_1 == pFVar4->Platforms[(uVar5 & 0xffff) - 0x20].ShaderFormat) {
            return (EShaderPlatform)uVar5;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 0x30);
        return SP_NumPlatforms;
      }
      return SP_VULKAN_SM6;
    }
    return SP_VULKAN_PCES3_1;
  }
  return SP_METAL_ES3_1_TVOS;
}

// ShaderPreprocessDependenciesBegin @ 145e6eb50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_> __cdecl
ShaderPreprocessDependenciesBegin(wchar_t *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  wchar_t wVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_> TVar9;
  size_t sVar10;
  ushort uVar11;
  wchar_t *in_RDX;
  undefined1 *puVar12;
  ForAnyElementType *pFVar13;
  ForAnyElementType *pFVar14;
  wchar_t *pwVar15;
  uint uVar16;
  
  pFVar8 = operator_new(0x50);
  pFVar14 = (ForAnyElementType *)0x0;
  pFVar13 = pFVar14;
  if (pFVar8 != (ForAnyElementType *)0x0) {
    pFVar8[2].Data = (FScriptContainerElement *)0x0;
    pFVar8[3].Data = (FScriptContainerElement *)0x0;
    pFVar8[4].Data = (FScriptContainerElement *)0x0;
    pFVar8[5].Data = (FScriptContainerElement *)0x0;
    pFVar8[6].Data = (FScriptContainerElement *)0x0;
    pFVar8[7].Data = (FScriptContainerElement *)0x0;
    pFVar8[8].Data = (FScriptContainerElement *)0x0;
    pFVar8[9].Data = (FScriptContainerElement *)0x0;
    pFVar8->Data = (FScriptContainerElement *)0x0;
    pFVar8[1].Data = (FScriptContainerElement *)0x0;
    FHashTable::FHashTable((FHashTable *)(pFVar8 + 2),0x400,0);
    FHashTable::FHashTable((FHashTable *)(pFVar8 + 6),0x400,0);
    pFVar13 = pFVar8;
  }
  *(ForAnyElementType **)param_1 = pFVar13;
  piVar1 = (int *)((longlong)&pFVar13[1].Data + 4);
  iVar7 = *(int *)&pFVar13[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar13,piVar1);
  }
  *(int *)&pFVar13[1].Data = iVar7 + 1;
  DefaultConstructItems<FShaderPreprocessDependency,int>(pFVar13->Data + (longlong)iVar7 * 0x50,1);
  plVar2 = *(longlong **)param_1;
  if (((int)plVar2[1] < 1) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar9.Ptr = (FShaderPreprocessDependencies *)(*pcVar4)();
    return (TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_>
           )TVar9.Ptr;
  }
  lVar3 = *plVar2;
  sVar10 = wcslen(in_RDX);
  iVar7 = (int)sVar10;
  TArray<char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<char,TSizedDefaultAllocator<32>_> *)(lVar3 + 0x28),iVar7 + 1,Default);
  puVar12 = *(undefined1 **)(lVar3 + 0x28);
  pwVar15 = in_RDX;
  pFVar13 = pFVar14;
  if (0 < iVar7) {
    do {
      wVar5 = *pwVar15;
      pwVar15 = pwVar15 + 1;
      *puVar12 = (char)wVar5;
      uVar16 = (int)pFVar13 + 1;
      pFVar13 = (ForAnyElementType *)(ulonglong)uVar16;
      puVar12 = puVar12 + 1;
    } while ((int)uVar16 < iVar7);
  }
  *puVar12 = 0;
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar9.Ptr = (FShaderPreprocessDependencies *)(*pcVar4)();
    return (TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_>
           )TVar9.Ptr;
  }
  uVar16 = 0;
  wVar5 = *in_RDX;
  while (wVar5 != L'\0') {
    in_RDX = in_RDX + 1;
    uVar11 = wVar5 - (-(ushort)((ushort)wVar5 - 0x61 < 0x1a) & 0x20);
    uVar16 = (uint)pFVar14 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)pFVar14 ^ (byte)uVar11)];
    uVar16 = uVar16 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar11 >> 8 ^ uVar16) & 0xff];
    pFVar14 = (ForAnyElementType *)(ulonglong)uVar16;
    wVar5 = *in_RDX;
  }
  plVar2 = *(longlong **)param_1;
  if (((int)plVar2[1] < 1) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    TVar9.Ptr = (FShaderPreprocessDependencies *)(*pcVar4)();
    return (TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_>
           )TVar9.Ptr;
  }
  *(uint *)(*plVar2 + 0x38) = uVar16;
  return (TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_>)
         (FShaderPreprocessDependencies *)param_1;
}

// ShaderPreprocessDependenciesEnd @ 145e6ed80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ShaderPreprocessDependenciesEnd
          (wchar_t *param_1,
          TUniquePtr<FShaderPreprocessDependencies,TDefaultDelete<FShaderPreprocessDependencies>_>
          param_2,EShaderPlatform param_3)

{
  FShaderPreprocessDependencies *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FShaderFileCacheEntry *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  FShaderPreprocessDependencies *local_38;
  FSharedReferencer<1> local_30;
  FString local_28;
  
  FString::FString(&local_28,param_1);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  iVar8 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar9.Data);
  lVar10 = (ulonglong)(uVar4 % 0x1f) * 0x58;
  SRWLock = (PSRWLOCK)(&GShaderFileCache.field_0x0 + lVar10);
  if ((SRWLock == (PSRWLOCK)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  AcquireSRWLockExclusive(SRWLock);
  pFVar5 = TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
           ::FindByHash<FString>
                     ((TMapBase<FString,FShaderFileCacheEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderFileCacheEntry,0>_>
                       *)(&GShaderFileCache.field_0x8 + lVar10),uVar4,&local_28);
  if ((pFVar5 != (FShaderFileCacheEntry *)0x0) &&
     ((pFVar5->Dependencies).Object == (FShaderPreprocessDependencies *)0x0)) {
    pFVar1 = (FShaderPreprocessDependencies *)((param_2.Ptr)->Dependencies).AllocatorInstance.Data;
    ((param_2.Ptr)->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38 = pFVar1;
    pTVar6 = operator_new(0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFShaderPreprocessDependencies__U__DefaultDeleter_UFShaderPreprocessDependencies___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)pFVar1;
      pTVar7 = pTVar6;
    }
    local_30.ReferenceController = pTVar7;
    if (&pFVar5->Dependencies != (TSharedPtr<FShaderPreprocessDependencies,1> *)&local_38) {
      (pFVar5->Dependencies).Object = pFVar1;
      local_38 = (FShaderPreprocessDependencies *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar5->Dependencies).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = (FShaderPreprocessDependencies *)((param_2.Ptr)->Dependencies).AllocatorInstance.Data;
  if (pFVar1 == (FShaderPreprocessDependencies *)0x0) {
    return;
  }
  FShaderPreprocessDependencies::_scalar_deleting_destructor_(pFVar1,1);
  return;
}

// ShouldAllowUniqueShaderSymbols @ 145e6ef20

bool __cdecl ShouldAllowUniqueShaderSymbols(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    AllowUniqueSymbols =
         (FShaderSymbolSettingHelper)
         (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                   (IConsoleManager::Singleton,L"r.Shaders.AllowUniqueSymbols",1);
    if ((AllowUniqueSymbols == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if (AllowUniqueSymbols != (FShaderSymbolSettingHelper)0x0) {
    iVar4 = (**(code **)(*(longlong *)AllowUniqueSymbols + 200))();
    return iVar4 != 0;
  }
  return false;
}

// ShouldEnableExtraShaderData @ 145e6f1c0

bool __cdecl ShouldEnableExtraShaderData(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ExtraData = (FShaderSymbolSettingHelper)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"r.Shaders.ExtraData",1);
    if ((ExtraData == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if (ExtraData != (FShaderSymbolSettingHelper)0x0) {
    iVar4 = (**(code **)(*(longlong *)ExtraData + 200))();
    return iVar4 != 0;
  }
  return false;
}

// ShouldGenerateShaderSymbols @ 145e6f2e0

bool __cdecl ShouldGenerateShaderSymbols(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    Symbols = (FShaderSymbolSettingHelper)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Shaders.Symbols",1);
    if ((Symbols == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    GenerateSymbols = (FShaderSymbolSettingHelper)0x0;
    _Init_thread_footer(&_TSS1);
  }
  if ((Symbols != (FShaderSymbolSettingHelper)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)Symbols + 200))(), iVar4 != 0)) {
    return true;
  }
  if ((GenerateSymbols != (FShaderSymbolSettingHelper)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)GenerateSymbols + 200))(), iVar4 != 0)) {
    return true;
  }
  return false;
}

// ShouldGenerateShaderSymbolsInfo @ 145e6f450

bool __cdecl ShouldGenerateShaderSymbolsInfo(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    SymbolsInfo = (FShaderSymbolSettingHelper)
                  (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                            (IConsoleManager::Singleton,L"r.Shaders.SymbolsInfo",1);
    if ((SymbolsInfo == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if (SymbolsInfo != (FShaderSymbolSettingHelper)0x0) {
    iVar4 = (**(code **)(*(longlong *)SymbolsInfo + 200))();
    return iVar4 != 0;
  }
  return false;
}

// ShouldOptimizeShaders @ 145e6f6b0

bool __cdecl ShouldOptimizeShaders(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    Optimize = (FShaderSymbolSettingHelper)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"r.Shaders.Optimize",1);
    if ((Optimize == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if (Optimize != (FShaderSymbolSettingHelper)0x0) {
    iVar4 = (**(code **)(*(longlong *)Optimize + 200))();
    return iVar4 != 0;
  }
  return false;
}

// ShouldShowWarnings @ 145e6f7d0

bool __cdecl ShouldShowWarnings(void)

{
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pTVar2 = CVarShowShaderWarnings.Ref;
  bVar3 = IsInParallelGameThread();
  lVar5 = 4;
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  pTVar1 = CVarShaderDevelopmentMode.Ref;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar4) != 0) {
    return true;
  }
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar5 = 0;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != 0) {
    return true;
  }
  return false;
}

// ShouldWriteShaderSymbols @ 145e6f850

bool __cdecl ShouldWriteShaderSymbols(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Singleton != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x4fb,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    Symbols = (FShaderSymbolSettingHelper)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Shaders.Symbols",1);
    if ((Symbols == (FShaderSymbolSettingHelper)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("SettingCVar || bPlatformOnly",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x303,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    _Init_thread_footer(&_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    WriteSymbols = (FShaderSymbolSettingHelper)0x0;
    _Init_thread_footer(&_TSS1);
  }
  if ((Symbols != (FShaderSymbolSettingHelper)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)Symbols + 200))(), iVar4 != 0)) {
    return true;
  }
  if ((WriteSymbols != (FShaderSymbolSettingHelper)0x0) &&
     (iVar4 = (**(code **)(*(longlong *)WriteSymbols + 200))(), iVar4 != 0)) {
    return true;
  }
  return false;
}

// SkipToCharOnCurrentLine @ 145e6fc30

wchar_t * __cdecl SkipToCharOnCurrentLine(wchar_t *param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  if (param_1 != (wchar_t *)0x0) {
    wVar2 = *param_1;
    while (((wVar2 != L'\0' && (wVar2 != param_2)) && (wVar2 != L'\n'))) {
      pwVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar2 = *pwVar1;
    }
    if (*param_1 != param_2) {
      param_1 = (wchar_t *)0x0;
    }
  }
  return param_1;
}

// SplitJobsByType @ 145e6feb0

void __cdecl
SplitJobsByType(TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
               TArray<FShaderCompileJob_*,TSizedDefaultAllocator<32>_> *param_2,
               TArray<FShaderPipelineCompileJob_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FShaderCommonCompileJob *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FShaderCommonCompileJob *local_28;
  FShaderCommonCompileJob *local_20;
  
  iVar5 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(FShaderCommonCompileJob **)((param_1->AllocatorInstance).Data + lVar7);
      if (this != (FShaderCommonCompileJob *)0x0) {
        LOCK();
        (this->NumRefs).Counter = (this->NumRefs).Counter + 1;
        UNLOCK();
      }
      local_28 = (FShaderCommonCompileJob *)0x0;
      if (this->Type == Single) {
        local_28 = this;
      }
      if (local_28 == (FShaderCommonCompileJob *)0x0) {
        local_20 = (FShaderCommonCompileJob *)0x0;
        if (this->Type == Pipeline) {
          local_20 = this;
        }
        if (local_20 == (FShaderCommonCompileJob *)0x0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                             ,0x189,
                             L"FShaderCommonCompileJob::Type=%d is not a valid type for a shader compile job"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          pFVar1 = (param_3->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_20) &&
              ((FScriptContainerElement *)&local_20 < pFVar1 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = param_3->ArrayNum;
          if (iVar5 == param_3->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar5 + 1;
          *(FShaderCommonCompileJob **)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) =
               local_20;
        }
      }
      else {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
            ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(FShaderCommonCompileJob **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_28;
      }
      FShaderCommonCompileJob::Release(this);
      iVar5 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// TryGetShaderFileHash @ 145e70bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __cdecl TryGetShaderFileHash(wchar_t *param_1,EShaderPlatform param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FSHAHash *pFVar6;
  uchar *puVar7;
  ForAnyElementType FVar8;
  TMap<FString,FSHAHash,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>_> *this
  ;
  uchar *puVar9;
  uchar *puVar10;
  undefined1 auStack_138 [32];
  FString local_118;
  FString local_108;
  FString local_f8;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  FSHA1 local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(&local_e8);
  AcquireSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
  FString::FString(&local_108,param_1);
  if ((SP_CUSTOM_PLATFORM_LAST < param_2) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ShaderPlatform < (sizeof(UEArrayCountHelper(Platforms)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSHAHash *)(*pcVar2)();
    return pFVar6;
  }
  if ((GShaderHashCache.bInitialized == false) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1c8,
                         L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::FindHash."
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FSHAHash *)(*pcVar2)();
    return pFVar6;
  }
  this = &GShaderHashCache.Platforms[param_2].ShaderHashCache;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar8.Data = local_108.Data.AllocatorInstance.Data;
  }
  puVar10 = (uchar *)0x0;
  iVar5 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar8.Data);
  iVar5 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                      *)this,uVar4,&local_108);
  puVar7 = puVar10;
  if (iVar5 != -1) {
    puVar7 = (uchar *)((longlong)iVar5 * 0x30 + *(longlong *)&this->field_0x0);
  }
  puVar9 = puVar7 + 0x10;
  if (puVar7 == (uchar *)0x0) {
    puVar9 = puVar10;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (puVar9 == (uchar *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
    EnterCriticalSection((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard);
    FString::FString(&local_f8,param_1);
    if ((SP_CUSTOM_PLATFORM_LAST < param_2) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ShaderPlatform < (sizeof(UEArrayCountHelper(Platforms)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x1c7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSHAHash *)(*pcVar2)();
      return pFVar6;
    }
    if ((GShaderHashCache.bInitialized == false) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("bInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x1c8,
                           L"GShaderHashCache::Initialize needs to be called before GShaderHashCache::FindHash."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSHAHash *)(*pcVar2)();
      return pFVar6;
    }
    iVar5 = local_f8.Data.ArrayNum + -1;
    FVar8.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar8.Data);
    iVar5 = TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FSHAHash>,TDefaultMapHashableKeyFuncs<FString,FSHAHash,0>,FDefaultSetAllocator>
                        *)this,uVar4,&local_f8);
    puVar7 = puVar10;
    if (iVar5 != -1) {
      puVar7 = (uchar *)((longlong)iVar5 * 0x30 + *(longlong *)&this->field_0x0);
    }
    puVar9 = puVar7 + 0x10;
    if (puVar7 == (uchar *)0x0) {
      puVar9 = puVar10;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (puVar9 == (uchar *)0x0) {
      FSHA1::FSHA1(&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (param_3 != (FString *)0x0) {
        FString::PrintfImpl(&local_118,L"Couldn\'t find source file of virtual shader path \'%s\'");
        if (param_3 != &local_118) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_118.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_118.Data.ArrayMax;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      DestructItems<FString,int>((FString *)0x0,0);
      FSHA1::~FSHA1(&local_d8);
    }
    else {
      puVar10 = puVar9;
      if (param_3 != (FString *)0x0) {
        FString::Reset(param_3,0);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard);
  }
  else {
    if (param_3 != (FString *)0x0) {
      FString::Reset(param_3,0);
    }
    ReleaseSRWLockShared((PSRWLOCK)&GShaderHashAccessRWLock);
    puVar10 = puVar9;
  }
  QueryPerformanceCounter(&local_e0);
  return (FSHAHash *)puVar10;
}

// UpdateIncludeDirectoryForPreviewPlatform @ 145e71a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UpdateIncludeDirectoryForPreviewPlatform(EShaderPlatform param_1,EShaderPlatform param_2)

{
  int iVar1;
  int iVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  iVar1 = GShaderHashCache.Platforms[param_2].IncludeDirectory.Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FString::AssignRange
            (&GShaderHashCache.Platforms[param_1].IncludeDirectory,
             (wchar_t *)
             GShaderHashCache.Platforms[param_2].IncludeDirectory.Data.AllocatorInstance.Data,iVar2)
  ;
                    /* WARNING: Could not recover jumptable at 0x000145e71a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  return;
}

// UpdateShaderDevelopmentMode @ 145e71aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UpdateShaderDevelopmentMode(void)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  pTVar2 = CVarShaderDevelopmentMode.Ref;
  bVar5 = 4 < (byte)LogShaders._0_1_;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 4;
      goto LAB_145e71ad6;
    }
  }
  lVar4 = 0;
LAB_145e71ad6:
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  if ((bVar5 != (iVar1 != 0)) && (iVar1 != 0)) {
    FLogCategoryBase::SetVerbosity((FLogCategoryBase *)&LogShaders,Log);
  }
  return;
}

// VerifyShaderSourceFiles @ 145e71b10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl VerifyShaderSourceFiles(EShaderPlatform param_1)

{
  return;
}

// WriteShaderCompileWorkerDebugCommandLine @ 145e71b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
WriteShaderCompileWorkerDebugCommandLine
          (FShaderCommonCompileJob *param_1,FString *param_2,FString *param_3,
          FShaderDebugDataContext *param_4)

{
  uint uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  TStringBuilderBase<wchar_t> *pTVar7;
  size_t sVar8;
  IFileManager *pIVar9;
  ulong64 uVar10;
  int iVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_938 [32];
  undefined1 local_8e8 [8];
  ForAnyElementType local_8e0;
  undefined8 local_8d8;
  undefined1 local_8d0 [8];
  FString local_8c8;
  FString local_8b8;
  wchar_t *local_8a8;
  int iStack_8a0;
  undefined4 uStack_89c;
  TStringView<wchar_t> local_898;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [512];
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_938;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)local_48;
  iVar11 = (param_2->Data).ArrayNum;
  iVar5 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar5 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_468,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
  if ((((int)((longlong)local_468.CurPos - (longlong)local_468.Base >> 1) != 0) &&
      (local_468.CurPos[-1] != L'/')) && (local_468.CurPos[-1] != L'\\')) {
    if (local_468.End < local_468.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'/';
    local_468.CurPos = local_468.CurPos + 1;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_468,L"DebugCompileArgs.txt",0x14);
  local_888.Base = local_868;
  local_888.bIsDynamic = false;
  local_888.bIsExternal = false;
  local_888.CurPos = local_868;
  local_888.End = (wchar_t *)&local_468;
  pvVar6 = FGenericPlatformString::Memcpy(local_868,L"\"",2);
  local_888.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  iVar11 = (param_2->Data).ArrayNum;
  iVar5 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar5 = 0;
  }
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (&local_888,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\"",1);
  if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 0x12)) {
    TStringBuilderBase<wchar_t>::Extend(&local_888,0x12);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_888.CurPos,L" 0 \"DebugCompile\" ",0x24);
  local_8b8.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar12 = (longlong)local_8b8.Data.ArrayNum;
  local_888.CurPos = (wchar_t *)((longlong)pvVar6 + 0x24);
  pFVar15 = (param_3->Data).AllocatorInstance.Data;
  local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_8b8.Data.ArrayNum == 0) {
    local_8b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_8b8.Data.ArrayNum,0,(ForAnyElementType *)&local_8b8,local_8b8.Data.ArrayNum
               ,&local_8b8.Data.ArrayMax);
    memcpy(local_8b8.Data.AllocatorInstance.Data,pFVar15,lVar12 * 2);
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  FPaths::MakePathRelativeTo(&local_8b8,local_468.Base);
  FVar14.Data = local_8b8.Data.AllocatorInstance.Data;
  iVar5 = 0;
  iVar11 = local_8b8.Data.ArrayNum + -1;
  if (local_8b8.Data.ArrayNum == 0) {
    iVar11 = iVar5;
  }
  uVar10 = (ulong64)iVar11;
  if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + uVar10)) {
    TStringBuilderBase<wchar_t>::Extend(&local_888,uVar10);
  }
  if (iVar11 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_888.CurPos,FVar14.Data,uVar10 * 2);
    local_888.CurPos = (wchar_t *)((longlong)pvVar6 + uVar10 * 2);
  }
  pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_888,L" ",1);
  pwVar3 = DebugWorkerOutputFileName;
  if (DebugWorkerOutputFileName != (wchar_t *)0x0) {
    sVar8 = wcslen(DebugWorkerOutputFileName);
    iVar5 = (int)sVar8;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,pwVar3,iVar5);
  if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 0x13)) {
    TStringBuilderBase<wchar_t>::Extend(&local_888,0x13);
  }
  local_888.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>
                 (local_888.CurPos,0x13," -DebugSourceFiles=",0x13);
  uVar1 = (param_4->DebugSourceFiles).ArrayNum;
  local_8e0.Data = (FScriptContainerElement *)0x0;
  local_8d8 = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_8e0,0,(int *)((longlong)&local_8d8 + 4));
  }
  iVar11 = (param_4->DebugSourceFiles).ArrayNum;
  pFVar16 = (param_4->DebugSourceFiles).AllocatorInstance.Data;
  pFVar15 = pFVar16 + (longlong)iVar11 * 0x18;
  while( true ) {
    if ((param_4->DebugSourceFiles).ArrayNum != iVar11) {
      local_8e8[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_EShaderFrequency,FString>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_8e8);
    }
    if (pFVar16 == pFVar15) {
      iVar11 = (int)local_8d8;
      bVar4 = true;
      pFVar15 = local_8e0.Data + (longlong)(int)local_8d8 * 0x10;
      FVar14.Data = local_8e0.Data;
      while( true ) {
        if ((int)local_8d8 != iVar11) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_8d0);
        }
        if (FVar14.Data == pFVar15) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_888,1);
          }
          pvVar6 = FGenericPlatformString::Memcpy(local_888.CurPos,L",",2);
          local_888.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
        }
        if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_888,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_888.CurPos,L"\"",2);
        local_888.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
        iVar5 = *(int *)(FVar14.Data + 8) + -1;
        if (*(int *)(FVar14.Data + 8) == 0) {
          iVar5 = 0;
        }
        pTVar7 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                           (&local_888,*(wchar_t **)FVar14.Data,iVar5);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar7,L"\"",1);
        FVar14.Data = FVar14.Data + 0x10;
      }
      if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 0x1c)) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,0x1c);
      }
      local_888.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>
                     (local_888.CurPos,0x1c," -TimeToLive=0.0f -KeepInput",0x1c);
      pIVar9 = IFileManager::Get();
      if (local_468.End < local_468.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_468,1);
      }
      pwVar3 = local_468.Base;
      *local_468.CurPos = L'\0';
      if (local_888.End < (TStringBuilderBase<wchar_t> *)(local_888.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *local_888.CurPos = L'\0';
      iStack_8a0 = 0;
      local_8a8 = local_888.Base;
      if (local_888.Base != (wchar_t *)0x0) {
        sVar8 = wcslen(local_888.Base);
        iStack_8a0 = (int)sVar8;
      }
      local_898._12_4_ = uStack_89c;
      local_898.Size = iStack_8a0;
      local_898.DataPtr = local_8a8;
      FFileHelper::SaveStringToFile(&local_898,pwVar3,AutoDetect,pIVar9,0);
      DestructItems<FString,int>((FString *)local_8e0.Data,(int)local_8d8);
      if (local_8e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e0.Data);
      }
      if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
      return;
    }
    local_8c8.Data.ArrayNum = *(int *)(pFVar16 + 0x10);
    lVar12 = (longlong)local_8c8.Data.ArrayNum;
    pvVar6 = *(void **)(pFVar16 + 8);
    local_8c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_8c8.Data.ArrayNum == 0) {
      local_8c8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_8c8.Data.ArrayNum,0,(ForAnyElementType *)&local_8c8,
                 local_8c8.Data.ArrayNum,&local_8c8.Data.ArrayMax);
      memcpy(local_8c8.Data.AllocatorInstance.Data,pvVar6,lVar12 * 2);
    }
    if (local_468.End < local_468.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_468,1);
    }
    *local_468.CurPos = L'\0';
    FPaths::MakePathRelativeTo(&local_8c8,local_468.Base);
    if (((local_8e0.Data <= (FScriptContainerElement *)&local_8c8) &&
        ((FScriptContainerElement *)&local_8c8 < local_8e0.Data + (longlong)local_8d8._4_4_ * 0x10))
       && (bVar4 = FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) break;
    iVar5 = (int)local_8d8;
    if ((int)local_8d8 == local_8d8._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_8e0,(int *)((longlong)&local_8d8 + 4));
    }
    FVar14.Data = local_8c8.Data.AllocatorInstance.Data;
    pFVar13 = local_8e0.Data + (longlong)iVar5 * 0x10;
    local_8d8 = CONCAT44(local_8d8._4_4_,iVar5 + 1);
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar12 = (longlong)local_8c8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_8c8.Data.ArrayNum;
    if (local_8c8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_8c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_8c8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar14.Data,lVar12 * 2);
    }
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    pFVar16 = pFVar16 + 0x18;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// filt$0 @ 15025f950

void `FInternalShaderCompilerFunctions::InvokeCompile'::__l1::filt_0
               (_EXCEPTION_POINTERS *param_1,longlong param_2)

{
  HandleShaderCompileException(param_1,*(FString **)(param_2 + 0x88),*(FString **)(param_2 + 0x90));
  return;
}

// KnownPakFiles'' @ 1503d29a0

void __cdecl
`dynamic_atexit_destructor_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles__
          (void)

{
  UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.HashSize = 0;
  if (UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Hash.SecondaryData !=
      (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Hash.
                          SecondaryData);
  }
  TSparseArray<TSparseSetElement<UE::ShaderLibrary::Private::FMountedPakFileInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::ShaderLibrary::Private::FMountedPakFileInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFiles.Elements);
  return;
}

// KnownPakFilesAccessLock'' @ 1503d29e0

void __cdecl
`dynamic_atexit_destructor_for_'UE::ShaderLibrary::Private::FMountedPakFileInfo::
KnownPakFilesAccessLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503d29e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &UE::ShaderLibrary::Private::FMountedPakFileInfo::KnownPakFilesAccessLock);
  return;
}

// `dynamic_atexit_destructor_for_'ArtifactBasePath'' @ 1503d2a00

void __cdecl
`GetBuildMachineArtifactBasePath'::__l2::_dynamic_atexit_destructor_for__ArtifactBasePath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ArtifactBasePath.Data.AllocatorInstance.Data;
  if (ArtifactBasePath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ArtifactBasePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CVarBreakOnPreprocessJob'' @ 1503d2a20

void __cdecl _dynamic_atexit_destructor_for__CVarBreakOnPreprocessJob__(void)

{
  CVarBreakOnPreprocessJob._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBreakOnPreprocessJob);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisambiguateShaderDebugDir'' @ 1503d2a40

void __cdecl _dynamic_atexit_destructor_for__CVarDisambiguateShaderDebugDir__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisambiguateShaderDebugDir);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpDebugInfoForCacheHits'' @ 1503d2a60

void __cdecl _dynamic_atexit_destructor_for__CVarDumpDebugInfoForCacheHits__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpDebugInfoForCacheHits);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceDebugViewModes'' @ 1503d2a80

void __cdecl _dynamic_atexit_destructor_for__CVarForceDebugViewModes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceDebugViewModes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderCodeLibraryPreloadShaderMaps'' @ 1503d2aa0

void __cdecl _dynamic_atexit_destructor_for__CVarShaderCodeLibraryPreloadShaderMaps__(void)

{
  CVarShaderCodeLibraryPreloadShaderMaps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderCodeLibraryPreloadShaderMaps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderCodeLibrarySeparateLoadingCache'' @ 1503d2ac0

void __cdecl _dynamic_atexit_destructor_for__CVarShaderCodeLibrarySeparateLoadingCache__(void)

{
  CVarShaderCodeLibrarySeparateLoadingCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderCodeLibrarySeparateLoadingCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderDevelopmentMode'' @ 1503d2ae0

void __cdecl _dynamic_atexit_destructor_for__CVarShaderDevelopmentMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderDevelopmentMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderLibraryProduceExtendedStats'' @ 1503d2b00

void __cdecl
UE::ShaderLibrary::Private::_dynamic_atexit_destructor_for__CVarShaderLibraryProduceExtendedStats__
          (void)

{
  CVarShaderLibraryProduceExtendedStats._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShaderLibraryProduceExtendedStats);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderMapResourceRef'' @ 1503d2b20

void __cdecl _dynamic_atexit_destructor_for__CVarShaderMapResourceRef__(void)

{
  CVarShaderMapResourceRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderMapResourceRef);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderOverrideDebugDir'' @ 1503d2b40

void __cdecl _dynamic_atexit_destructor_for__CVarShaderOverrideDebugDir__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderOverrideDebugDir);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShaderWarningsFilter'' @ 1503d2b60

void __cdecl _dynamic_atexit_destructor_for__CVarShaderWarningsFilter__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShaderWarningsFilter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadersPropagateLocalWorkerOOMs'' @ 1503d2b80

void __cdecl _dynamic_atexit_destructor_for__CVarShadersPropagateLocalWorkerOOMs__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShadersPropagateLocalWorkerOOMs);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShowShaderWarnings'' @ 1503d2ba0

void __cdecl _dynamic_atexit_destructor_for__CVarShowShaderWarnings__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShowShaderWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUploadShaderDebugArtifactsRef'' @ 1503d2bc0

void __cdecl _dynamic_atexit_destructor_for__CVarUploadShaderDebugArtifactsRef__(void)

{
  CVarUploadShaderDebugArtifactsRef._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUploadShaderDebugArtifactsRef);
  return;
}

// `dynamic_atexit_destructor_for_'CompilerFlagsDictionary'' @ 1503d2be0

void __cdecl
`GetCompilerFlagsDictionary'::__l2::_dynamic_atexit_destructor_for__CompilerFlagsDictionary__(void)

{
  CompilerFlagsDictionary._72_4_ = 0;
  if (CompilerFlagsDictionary._64_8_ != 0) {
    FMemory::Free((void *)CompilerFlagsDictionary._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_ECompilerFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_ECompilerFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&CompilerFlagsDictionary);
  return;
}

// `dynamic_atexit_destructor_for_'DebugInfoPath'' @ 1503d2c20

void __cdecl `GetShaderDebugInfoPath'::__l2::_dynamic_atexit_destructor_for__DebugInfoPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DebugInfoPath.Data.AllocatorInstance.Data;
  if (DebugInfoPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DebugInfoPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FormatVersionMap'' @ 1503d2c40

void __cdecl
`FShaderCompileWorkerUtil::WriteTasks'::__l2::_dynamic_atexit_destructor_for__FormatVersionMap__
          (void)

{
  FormatVersionMap._72_4_ = 0;
  if (FormatVersionMap._64_8_ != 0) {
    FMemory::Free((void *)FormatVersionMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FormatVersionMap);
  return;
}

// `dynamic_atexit_destructor_for_'GBreakOnPreprocessJob'' @ 1503d2c80

void __cdecl _dynamic_atexit_destructor_for__GBreakOnPreprocessJob__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GBreakOnPreprocessJob.Data.AllocatorInstance.Data;
  if (GBreakOnPreprocessJob.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GBreakOnPreprocessJob.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GListShaderLibrariesCmd'' @ 1503d2ca0

void __cdecl _dynamic_atexit_destructor_for__GListShaderLibrariesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GListShaderLibrariesCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GSCWErrorCodeInfo'' @ 1503d2cc0

void __cdecl _dynamic_atexit_destructor_for__GSCWErrorCodeInfo__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GSCWErrorCodeInfo.Data.AllocatorInstance.Data;
  if (GSCWErrorCodeInfo.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GSCWErrorCodeInfo.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GShaderFileCache'' @ 1503d2ce0

void __cdecl _dynamic_atexit_destructor_for__GShaderFileCache__(void)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = 0x1f;
  puVar5 = (undefined8 *)&GShaderSourceDirectoryMappings.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FShaderFileCacheEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(puVar5 + -0x14));
    if (BVar3 == '\0') {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + -0x14));
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GShaderFileHashCalculationGuard'' @ 1503d2d90

void __cdecl _dynamic_atexit_destructor_for__GShaderFileHashCalculationGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503d2d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GShaderFileHashCalculationGuard);
  return;
}

// `dynamic_atexit_destructor_for_'GShaderHashAccessRWLock'' @ 1503d2db0

void __cdecl _dynamic_atexit_destructor_for__GShaderHashAccessRWLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503d2dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GShaderHashAccessRWLock);
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

// `dynamic_atexit_destructor_for_'GShaderHashCache'' @ 1503d2e10

/* WARNING: Type propagation algorithm not settling */

void __cdecl _dynamic_atexit_destructor_for__GShaderHashCache__(void)

{
  FScriptContainerElement *pFVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  FPlatform *pFVar3;
  longlong lVar4;
  
  pFVar3 = (FPlatform *)&GShaderHashCache.bInitialized;
  lVar4 = 0x9b;
  pTVar2 = (TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)&GShaderSourceSharedVirtualDirectories.ArrayNum;
  do {
    lVar4 = lVar4 + -1;
    *(undefined4 *)((longlong)(pTVar2 + 0xffffffffffffffff) + 0x20) = 0;
    pFVar3 = pFVar3 + -1;
    if (*(void **)((longlong)(pTVar2 + 0xffffffffffffffff) + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar2 + 0xffffffffffffffff) + 0x18));
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x10U));
    pFVar1 = (pFVar3->IncludeDirectory).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pTVar2 = (TSparseArray<TSparseSetElement<TTuple<FString,FSHAHash>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)(pTVar2 + 0xfffffffffffffffe) + 0x10U);
  } while (lVar4 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GShaderSourceDirectoryMappings'' @ 1503d2ea0

void __cdecl _dynamic_atexit_destructor_for__GShaderSourceDirectoryMappings__(void)

{
  GShaderSourceDirectoryMappings._72_4_ = 0;
  if (GShaderSourceDirectoryMappings._64_8_ != 0) {
    FMemory::Free((void *)GShaderSourceDirectoryMappings._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GShaderSourceDirectoryMappings);
  return;
}

// `dynamic_atexit_destructor_for_'GShaderSourceSharedVirtualDirectories'' @ 1503d2ee0

void __cdecl _dynamic_atexit_destructor_for__GShaderSourceSharedVirtualDirectories__(void)

{
  DestructItems<FString,int>
            ((FString *)GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data,
             GShaderSourceSharedVirtualDirectories.ArrayNum);
  if (GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(GShaderSourceSharedVirtualDirectories.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogShaderLibrary'' @ 1503d2f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogShaderLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogShaderLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'OnSharedShaderCodeRequest'' @ 1503d2f40

void __cdecl _dynamic_atexit_destructor_for__OnSharedShaderCodeRequest__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnSharedShaderCodeRequest._40_8_
             ,OnSharedShaderCodeRequest._48_4_);
  if (OnSharedShaderCodeRequest._40_8_ != 0) {
    FMemory::Free((void *)OnSharedShaderCodeRequest._40_8_);
  }
                    /* WARNING: Could not recover jumptable at 0x0001503d2f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&OnSharedShaderCodeRequest);
  return;
}

// `dynamic_atexit_destructor_for_'OnSharedShaderMapResourceExplicitRelease'' @ 1503d2f80

void __cdecl _dynamic_atexit_destructor_for__OnSharedShaderMapResourceExplicitRelease__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnSharedShaderMapResourceExplicitRelease,(FWriteAccessScope *)&local_28);
  if ((OnSharedShaderMapResourceExplicitRelease._16_4_ != 0) &&
     (OnSharedShaderMapResourceExplicitRelease._8_8_ != 0)) {
    (*(code *)**(undefined8 **)OnSharedShaderMapResourceExplicitRelease._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&OnSharedShaderMapResourceExplicitRelease.field_0x8,0,0,0x10);
    OnSharedShaderMapResourceExplicitRelease._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (OnSharedShaderMapResourceExplicitRelease._8_8_ != 0) {
    FMemory::Free((void *)OnSharedShaderMapResourceExplicitRelease._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnSharedShaderMapResourceExplicitRelease);
  return;
}

// `dynamic_atexit_destructor_for_'PipelineExtension'' @ 1503d3020

void __cdecl _dynamic_atexit_destructor_for__PipelineExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PipelineExtension.Data.AllocatorInstance.Data;
  if (PipelineExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PipelineExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'PluginsToIgnoreOnMount'' @ 1503d3040

void __cdecl
UE::ShaderLibrary::Private::_dynamic_atexit_destructor_for__PluginsToIgnoreOnMount__(void)

{
  PluginsToIgnoreOnMount.HashSize = 0;
  if (PluginsToIgnoreOnMount.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)PluginsToIgnoreOnMount.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&PluginsToIgnoreOnMount.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'ShaderArchivePatternStr'' @ 1503d3080

void __cdecl _dynamic_atexit_destructor_for__ShaderArchivePatternStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShaderArchivePatternStr.Data.AllocatorInstance.Data;
  if (ShaderArchivePatternStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShaderArchivePatternStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderAssetInfoExtension'' @ 1503d30a0

void __cdecl _dynamic_atexit_destructor_for__ShaderAssetInfoExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShaderAssetInfoExtension.Data.AllocatorInstance.Data;
  if (ShaderAssetInfoExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShaderAssetInfoExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderCodePatternStr'' @ 1503d30c0

void __cdecl _dynamic_atexit_destructor_for__ShaderCodePatternStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShaderCodePatternStr.Data.AllocatorInstance.Data;
  if (ShaderCodePatternStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShaderCodePatternStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderExtension'' @ 1503d30e0

void __cdecl _dynamic_atexit_destructor_for__ShaderExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShaderExtension.Data.AllocatorInstance.Data;
  if (ShaderExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShaderExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ShaderTypeInfoExtension'' @ 1503d3100

void __cdecl _dynamic_atexit_destructor_for__ShaderTypeInfoExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ShaderTypeInfoExtension.Data.AllocatorInstance.Data;
  if (ShaderTypeInfoExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ShaderTypeInfoExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StableExtension'' @ 1503d3120

void __cdecl _dynamic_atexit_destructor_for__StableExtension__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StableExtension.Data.AllocatorInstance.Data;
  if (StableExtension.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StableExtension.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StableInfoPatternStr'' @ 1503d3140

void __cdecl _dynamic_atexit_destructor_for__StableInfoPatternStr__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = StableInfoPatternStr.Data.AllocatorInstance.Data;
  if (StableInfoPatternStr.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (StableInfoPatternStr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'_GCsvCategory_Shaders'' @ 1503d3160

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_Shaders__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_Shaders.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_Shaders.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_Shaders.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

