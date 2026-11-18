// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 33

// StaticClass @ 14dcf45e0

UClass * __cdecl UMovieGraphGlobalGameOverridesNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalGameOverridesNode",
               &Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalGameOverridesNode,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalGameOverridesNode>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalGameOverridesNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton;
}

// UMovieGraphGlobalGameOverridesNode @ 14dd0a340

UMovieGraphGlobalGameOverridesNode * __thiscall
UMovieGraphGlobalGameOverridesNode::UMovieGraphGlobalGameOverridesNode
          (UMovieGraphGlobalGameOverridesNode *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this_00 = &(this->SoftGameModeOverride).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMovieGraphGlobalGameOverridesNode__6B_;
  (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PreviousQualityLevels).CPUBenchmarkResults = -1.0;
  (this->PreviousQualityLevels).GPUBenchmarkResults = -1.0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayNum = 0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayMax = 0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayNum = 0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayMax = 0;
  Scalability::FQualityLevels::SetDefaults(&this->PreviousQualityLevels);
  return this;
}

// UMovieGraphGlobalGameOverridesNode @ 14dd0a3d0

UMovieGraphGlobalGameOverridesNode * __thiscall
UMovieGraphGlobalGameOverridesNode::UMovieGraphGlobalGameOverridesNode
          (UMovieGraphGlobalGameOverridesNode *this)

{
  undefined1 *this_00;
  UClass *pUVar1;
  UClass *local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphGlobalGameOverridesNode__6B_;
  (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  pUVar1 = Z_Construct_UClass_AMoviePipelineGameMode_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this_00 = &(this->SoftGameModeOverride).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FSoftObjectPtr::operator=(&(this->SoftGameModeOverride).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->ScalabilityQualityLevel = Cinematic;
  this->bDisableTextureStreaming = false;
  this->bDisableLODs = false;
  this->bDisableHLODs = false;
  this->bFlushLevelStreaming = false;
  this->bFlushAssetCompiler = false;
  this->bFlushShaderCompiler = false;
  this->bFlushGrassStreaming = false;
  (this->PreviousQualityLevels).CPUBenchmarkResults = -1.0;
  (this->PreviousQualityLevels).GPUBenchmarkResults = -1.0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayNum = 0;
  (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayMax = 0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayNum = 0;
  (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayMax = 0;
  this->bFlushStreamingManagers = false;
  this->VirtualTextureFeedbackFactor = 1;
  this->bRebuildLumenSceneBetweenRenderLayers = false;
  Scalability::FQualityLevels::SetDefaults(&this->PreviousQualityLevels);
  return this;
}

// ~UMovieGraphGlobalGameOverridesNode @ 14dd0d960

void __thiscall
UMovieGraphGlobalGameOverridesNode::~UMovieGraphGlobalGameOverridesNode
          (UMovieGraphGlobalGameOverridesNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMovieGraphGlobalGameOverridesNode__6B_;
  pFVar1 = (this->PreviousQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousQualityLevels).CPUBenchmarkSteps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// ApplySettings @ 14dd13da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
UMovieGraphGlobalGameOverridesNode::ApplySettings
          (UMovieGraphGlobalGameOverridesNode *this,bool param_1,UWorld *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  UClass *this_00;
  FQualityLevels *pFVar10;
  IConsoleVariable *pIVar11;
  FOutputDeviceRedirector *pFVar12;
  longlong *plVar13;
  undefined8 uVar14;
  IConsoleManager *pIVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar18;
  ForAnyElementType FVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined1 local_31c;
  undefined1 local_31b;
  undefined1 local_31a;
  undefined1 local_319;
  undefined1 local_318;
  undefined1 local_317;
  undefined1 local_316 [6];
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  FString local_1a0;
  uint local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  uint local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  uint local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  FQualityLevels local_128;
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  undefined1 local_b0 [16];
  FQualityLevels local_a0;
  
  this_00 = StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (param_1) {
    pFVar10 = Scalability::GetQualityLevels(&local_a0);
    puVar16 = &pUVar1[7].field_0x20;
    *(float *)&pUVar1[6].field_0x10 = pFVar10->ResolutionQuality;
    pTVar18 = &pFVar10->CPUBenchmarkSteps;
    *(int *)&pUVar1[6].field_0x14 = pFVar10->ViewDistanceQuality;
    *(int *)&pUVar1[6].field_0x18 = pFVar10->AntiAliasingQuality;
    *(int *)&pUVar1[6].field_0x1c = pFVar10->ShadowQuality;
    *(int *)&pUVar1[6].field_0x20 = pFVar10->GlobalIlluminationQuality;
    *(int *)&pUVar1[6].field_0x24 = pFVar10->ReflectionQuality;
    *(int *)(pUVar1 + 7) = pFVar10->PostProcessQuality;
    *(int *)&pUVar1[7].field_0x4 = pFVar10->TextureQuality;
    *(int *)&pUVar1[7].field_0x8 = pFVar10->EffectsQuality;
    *(int *)&pUVar1[7].field_0xc = pFVar10->FoliageQuality;
    *(int *)&pUVar1[7].field_0x10 = pFVar10->ShadingQuality;
    *(int *)&pUVar1[7].field_0x14 = pFVar10->LandscapeQuality;
    *(float *)&pUVar1[7].field_0x18 = pFVar10->CPUBenchmarkResults;
    *(float *)&pUVar1[7].field_0x1c = pFVar10->GPUBenchmarkResults;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar16 != pTVar18) {
      if (*(void **)puVar16 != (void *)0x0) {
        FMemory::Free(*(void **)puVar16);
      }
      *(FScriptContainerElement **)puVar16 = (pTVar18->AllocatorInstance).Data;
      (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pUVar1 + 8) = (pFVar10->CPUBenchmarkSteps).ArrayNum;
      *(int *)&pUVar1[8].field_0x4 = (pFVar10->CPUBenchmarkSteps).ArrayMax;
      (pFVar10->CPUBenchmarkSteps).ArrayNum = 0;
      (pFVar10->CPUBenchmarkSteps).ArrayMax = 0;
    }
    pTVar18 = &pFVar10->GPUBenchmarkSteps;
    puVar16 = &pUVar1[8].field_0x8;
    if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar16 != pTVar18) {
      if (*(void **)puVar16 != (void *)0x0) {
        FMemory::Free(*(void **)puVar16);
      }
      *(FScriptContainerElement **)puVar16 = (pTVar18->AllocatorInstance).Data;
      (pTVar18->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)&pUVar1[8].field_0x10 = (pFVar10->GPUBenchmarkSteps).ArrayNum;
      *(int *)&pUVar1[8].field_0x14 = (pFVar10->GPUBenchmarkSteps).ArrayMax;
      (pFVar10->GPUBenchmarkSteps).ArrayNum = 0;
      (pFVar10->GPUBenchmarkSteps).ArrayMax = 0;
    }
    if (local_a0.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_a0.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
    local_128.CPUBenchmarkResults = -1.0;
    local_128.GPUBenchmarkResults = -1.0;
    local_128.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.CPUBenchmarkSteps.ArrayNum = 0;
    local_128.CPUBenchmarkSteps.ArrayMax = 0;
    local_128.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.GPUBenchmarkSteps.ArrayNum = 0;
    local_128.GPUBenchmarkSteps.ArrayMax = 0;
    Scalability::FQualityLevels::SetDefaults(&local_128);
    Scalability::FQualityLevels::SetFromSingleQualityLevel
              (&local_128,(uint)this->ScalabilityQualityLevel);
    Scalability::SetQualityLevels(&local_128,false);
    if (local_128.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_128.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
  }
  if (this->bDisableTextureStreaming != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.TextureStreaming",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_res10[0] = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l12::<lambda_1>::operator()
                        (local_res10);
      if (!bVar5) goto LAB_14dd1408a;
    }
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_310 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[8].field_0x18 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[8].field_0x18;
      local_308 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd1408a:
  if (this->bDisableLODs != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ForceLOD",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_res8[0] = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l24::<lambda_2>::operator()
                        (local_res8);
      if (bVar5) goto LAB_14dd14110;
    }
    else {
LAB_14dd14110:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_300 = 0;
        iVar9 = 0;
        *(undefined4 *)&pUVar1[8].field_0x1c = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[8].field_0x1c;
        local_2f8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.SkeletalMeshLODBias",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_res20[0] = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l33::<lambda_3>::operator()
                        (local_res20);
      if (bVar5) goto LAB_14dd141da;
    }
    else {
LAB_14dd141da:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_2f0 = 0;
        iVar9 = -10;
        *(undefined4 *)&pUVar1[8].field_0x20 = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[8].field_0x20;
        local_2e8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ParticleLODBias",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_328 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l42::<lambda_4>::operator()
                        (&local_328);
      if (bVar5) goto LAB_14dd142a3;
    }
    else {
LAB_14dd142a3:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_2e0 = 0;
        iVar9 = -10;
        *(undefined4 *)&pUVar1[8].field_0x24 = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[8].field_0x24;
        local_2d8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"foliage.DitheredLOD",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_327 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l51::<lambda_5>::operator()
                        (&local_327);
      if (bVar5) goto LAB_14dd1436a;
    }
    else {
LAB_14dd1436a:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_2d0 = 0;
        iVar9 = 0;
        *(undefined4 *)(pUVar1 + 9) = uVar8;
      }
      else {
        iVar9 = *(int *)(pUVar1 + 9);
        local_2c8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"foliage.ForceLOD",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_326 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l60::<lambda_6>::operator()
                        (&local_326);
      if (!bVar5) goto LAB_14dd1447b;
    }
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_2c0 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[9].field_0x4 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x4;
      local_2b8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd1447b:
  pUVar4 = GEngine;
  if (((this->bDisableHLODs != false) && (GEngine != (UEngine *)0x0)) && (param_2 != (UWorld *)0x0))
  {
    pcVar3 = *(code **)(GEngine->_padding_ + 8);
    pFVar12 = GetGlobalLogSingleton();
    (*pcVar3)(&pUVar4->_padding_,param_2,L"r.HLOD 0",pFVar12);
  }
  if (this->bFlushStreamingManagers != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Streaming.SyncStatesWhenBlocking",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_325 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l78::<lambda_7>::operator()
                        (&local_325);
      if (!bVar5) goto LAB_14dd14587;
    }
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      *(undefined4 *)&pUVar1[9].field_0x8 = uVar8;
      local_2b0 = 0;
      iVar9 = 1;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x8;
      local_2a8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd14587:
  if (this->bRebuildLumenSceneBetweenRenderLayers != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.LumenScene.Radiosity.UpdateFactor",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_324 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l90::<lambda_8>::operator()
                        (&local_324);
      if (bVar5) goto LAB_14dd14611;
    }
    else {
LAB_14dd14611:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_2a0 = 0;
        iVar9 = 1;
        *(undefined4 *)&pUVar1[9].field_0xc = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[9].field_0xc;
        local_298 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.LumenScene.SurfaceCache.CardCaptureFactor",0
                        );
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_323 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l99::<lambda_9>::operator()
                        (&local_323);
      if (bVar5) goto LAB_14dd146d6;
    }
    else {
LAB_14dd146d6:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_290 = 0;
        iVar9 = 1;
        *(undefined4 *)&pUVar1[9].field_0x10 = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[9].field_0x10;
        local_288 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.LumenScene.SurfaceCache.Feedback",0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_322 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l108::<lambda_10>::operator()
                        (&local_322);
      if (bVar5) goto LAB_14dd1479b;
    }
    else {
LAB_14dd1479b:
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_280 = 0;
        iVar9 = 0;
        *(undefined4 *)&pUVar1[9].field_0x14 = uVar8;
      }
      else {
        iVar9 = *(int *)&pUVar1[9].field_0x14;
        local_278 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.LumenScene.SurfaceCache.RecaptureEveryFrame"
                         ,0);
    if (pIVar11 == (IConsoleVariable *)0x0) {
      local_321 = 0;
      bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l117::<lambda_11>::operator()
                        (&local_321);
      if (!bVar5) goto LAB_14dd148af;
    }
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_270 = 0;
      iVar9 = 1;
      *(undefined4 *)&pUVar1[9].field_0x18 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x18;
      local_268 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd148af:
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.PostProcessing.PropagateAlpha",0);
  if (plVar13 == (longlong *)0x0) {
    local_320 = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l126::<lambda_12>::operator()
                      (&local_320);
    if (bVar5) goto LAB_14dd14926;
  }
  else {
LAB_14dd14926:
    if (param_1) {
      uVar6 = (**(code **)(*plVar13 + 0xc0))();
      pUVar1[10].field_0x20 = uVar6;
      local_260 = 0;
      cVar7 = UE::MoviePipeline::GetAlphaOutputOverride();
      local_188 = local_260;
      local_180 = 0;
      local_18c = 1;
      local_178 = 0x2000000;
      local_17c = 0xf000000;
      local_190 = (**(code **)(*plVar13 + 0x18))(plVar13);
      local_190 = local_190 & 0xff000000;
      puVar20 = &local_190;
      puVar16 = local_c8;
    }
    else {
      cVar7 = pUVar1[10].field_0x20;
      local_258 = 0;
      local_168 = 0;
      local_160 = 0;
      local_16c = 1;
      local_158 = 0x2000000;
      local_15c = 0xf000000;
      local_170 = (**(code **)(*plVar13 + 0x18))(plVar13);
      local_170 = local_170 & 0xff000000;
      puVar20 = &local_170;
      puVar16 = local_bc;
    }
    lVar2 = *plVar13;
    uVar14 = (**(code **)(lVar2 + 0xa8))(plVar13,puVar16,puVar20);
    puVar17 = &u_0;
    if (cVar7 != '\0') {
      puVar17 = &u_1;
    }
    (**(code **)(lVar2 + 0xb0))(plVar13,puVar17,uVar14);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"a.URO.Enable",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31f = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'[::I]::<lambda_13>::operator()
                      (&local_31f);
    if (bVar5) goto LAB_14dd14a9c;
  }
  else {
LAB_14dd14a9c:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_250 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[9].field_0x1c = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x1c;
      local_248 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SkyLight.RealTimeReflectionCapture.TimeSlice",
                       0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31e = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l145::<lambda_14>::operator()
                      (&local_31e);
    if (bVar5) goto LAB_14dd14b5e;
  }
  else {
LAB_14dd14b5e:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_240 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[9].field_0x20 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x20;
      local_238 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.VolumetricRenderTarget",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31d = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l154::<lambda_15>::operator()
                      (&local_31d);
    if (bVar5) goto LAB_14dd14c20;
  }
  else {
LAB_14dd14c20:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_230 = 0;
      iVar9 = 1;
      *(undefined4 *)&pUVar1[9].field_0x24 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[9].field_0x24;
      local_228 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.VolumetricRenderTarget.Mode",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31c = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l163::<lambda_16>::operator()
                      (&local_31c);
    if (bVar5) goto LAB_14dd14ce5;
  }
  else {
LAB_14dd14ce5:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_220 = 0;
      iVar9 = 3;
      *(undefined4 *)(pUVar1 + 10) = uVar8;
    }
    else {
      iVar9 = *(int *)(pUVar1 + 10);
      local_218 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"wp.Runtime.BlockOnSlowStreaming",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31b = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l172::<lambda_17>::operator()
                      (&local_31b);
    if (bVar5) goto LAB_14dd14daa;
  }
  else {
LAB_14dd14daa:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_210 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[10].field_0x4 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[10].field_0x4;
      local_208 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"p.Chaos.ImmPhys.MinStepTime",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_31a = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l181::<lambda_18>::operator()
                      (&local_31a);
    if (bVar5) goto LAB_14dd14e70;
  }
  else {
LAB_14dd14e70:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 0xd0))();
      local_200 = 0;
      *(undefined4 *)&pUVar1[10].field_0x8 = uVar8;
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    else {
      local_1f8 = 0;
      local_148 = 0;
      local_140 = 0;
      local_14c = 1;
      local_138 = 0x2000000;
      local_13c = 0xf000000;
      local_150 = (**(code **)(*(longlong *)pIVar11 + 0x18))(pIVar11);
      local_150 = local_150 & 0xff000000;
      ::FString::PrintfImpl(&local_1a0,L"%g");
      lVar2 = *(longlong *)pIVar11;
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_1a0.Data.ArrayNum != 0) {
        FVar19.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      uVar14 = (**(code **)(lVar2 + 0xa8))(pIVar11,local_b0,&local_150);
      (**(code **)(lVar2 + 0xb0))(pIVar11,FVar19.Data,uVar14);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SkipRedundantTransformUpdate",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_319 = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l190::<lambda_19>::operator()
                      (&local_319);
    if (bVar5) goto LAB_14dd14ffe;
  }
  else {
LAB_14dd14ffe:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_1f0 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[10].field_0xc = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[10].field_0xc;
      local_1e8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"p.ChaosCloth.UseTimeStepSmoothing",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_318 = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l199::<lambda_20>::operator()
                      (&local_318);
    if (bVar5) goto LAB_14dd150c0;
  }
  else {
LAB_14dd150c0:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_1e0 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[10].field_0x10 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[10].field_0x10;
      local_1d8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,
                       L"r.Water.SkipWaterInfoTextureRenderWhenWorldRenderingDisabled",0);
  if (pIVar11 != (IConsoleVariable *)0x0) {
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))(pIVar11);
      local_1d0 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[10].field_0x14 = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[10].field_0x14;
      local_1c8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar11 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"Slate.bAllowThrottling",0);
  if (pIVar11 == (IConsoleVariable *)0x0) {
    local_317 = 0;
    bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l217::<lambda_21>::operator()
                      (&local_317);
    if (bVar5) goto LAB_14dd15247;
  }
  else {
LAB_14dd15247:
    if (param_1) {
      uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
      local_1c0 = 0;
      iVar9 = 0;
      *(undefined4 *)&pUVar1[10].field_0x1c = uVar8;
    }
    else {
      iVar9 = *(int *)&pUVar1[10].field_0x1c;
      local_1b8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar11,iVar9,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar13 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"MoviePipeline.EnableVTInvalidateOnNaniteLOD",1);
  if ((plVar13 != (longlong *)0x0) && (iVar9 = (**(code **)(*plVar13 + 200))(plVar13), iVar9 != 0))
  {
    pIVar15 = IConsoleManager::Get();
    pIVar11 = (IConsoleVariable *)
              (**(code **)((longlong)*pIVar15 + 0xc0))
                        (pIVar15,L"r.Nanite.VSMInvalidateOnLODDelta",0);
    if ((pIVar11 != (IConsoleVariable *)0x0) ||
       (bVar5 = `UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l229::<lambda_22>::operator()
                          (local_316), bVar5)) {
      if (param_1) {
        uVar8 = (**(code **)(*(longlong *)pIVar11 + 200))();
        local_1b0 = 0;
        *(undefined4 *)&pUVar1[10].field_0x18 = uVar8;
        IConsoleVariable::SetWithCurrentPriority<int>
                  (pIVar11,1,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
        return;
      }
      local_1a8 = 0;
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar11,*(int *)&pUVar1[10].field_0x18,(FName)0x0,ECVF_SetByConsole,
                 ECVF_SetByScalability);
      goto LAB_14dd153d9;
    }
  }
  if (param_1) {
    return;
  }
LAB_14dd153d9:
  Scalability::SetQualityLevels((FQualityLevels *)&pUVar1[6].field_0x10,false);
  return;
}

// BuildNewProcessCommandLineArgsImpl @ 14dd16ad0

void __thiscall
UMovieGraphGlobalGameOverridesNode::BuildNewProcessCommandLineArgsImpl
          (UMovieGraphGlobalGameOverridesNode *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_4a8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_498;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_488;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_478;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_468;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_458;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_448;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_438;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_428;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_418;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_408;
  FQualityLevels local_3f8;
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
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FStringFormatArg local_168;
  FStringFormatArg local_148;
  FStringFormatArg local_128;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  local_3f8.CPUBenchmarkResults = -1.0;
  local_3f8.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.CPUBenchmarkSteps.ArrayNum = 0;
  local_3f8.CPUBenchmarkSteps.ArrayMax = 0;
  local_3f8.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f8.GPUBenchmarkSteps.ArrayNum = 0;
  local_3f8.GPUBenchmarkSteps.ArrayMax = 0;
  local_3f8.GPUBenchmarkResults = -1.0;
  Scalability::FQualityLevels::SetDefaults(&local_3f8);
  Scalability::FQualityLevels::SetFromSingleQualityLevel
            (&local_3f8,(uint)this->ScalabilityQualityLevel);
  FStringFormatArg::FStringFormatArg(&local_108,local_3f8.ViewDistanceQuality);
  local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_4a8.AllocatorInstance,1,&local_4a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_4a8.AllocatorInstance.Data,&local_108,1);
  ::FString::FormatImpl(&local_1a8,L"sg.ViewDistanceQuality={0}",&local_4a8);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1a8);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_4a8.AllocatorInstance.Data,local_4a8.ArrayNum);
  if ((FStringFormatArg *)local_4a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_4a8.AllocatorInstance.Data);
  }
  if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_168,local_3f8.AntiAliasingQuality);
  local_498.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_498.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_498.AllocatorInstance,1,&local_498.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_498.AllocatorInstance.Data,&local_168,1);
  ::FString::FormatImpl(&local_398,L"sg.AntiAliasingQuality={0}",&local_498);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_398);
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_498.AllocatorInstance.Data,local_498.ArrayNum);
  if ((FStringFormatArg *)local_498.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_498.AllocatorInstance.Data);
  }
  if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_148,local_3f8.ShadowQuality);
  local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_488.AllocatorInstance,1,&local_488.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_488.AllocatorInstance.Data,&local_148,1);
  ::FString::FormatImpl(&local_388,L"sg.ShadowQuality={0}",&local_488);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_388);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
  if ((FStringFormatArg *)local_488.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_488.AllocatorInstance.Data);
  }
  if (local_148.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_128,local_3f8.GlobalIlluminationQuality);
  local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_478.AllocatorInstance,1,&local_478.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_478.AllocatorInstance.Data,&local_128,1);
  ::FString::FormatImpl(&local_378,L"sg.GlobalIlluminationQuality={0}",&local_478);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_378);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_478.AllocatorInstance.Data,local_478.ArrayNum);
  if ((FStringFormatArg *)local_478.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_478.AllocatorInstance.Data);
  }
  if (local_128.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_28,local_3f8.ReflectionQuality);
  local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_468.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_468.AllocatorInstance,1,&local_468.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_468.AllocatorInstance.Data,&local_28,1);
  ::FString::FormatImpl(&local_368,L"sg.ReflectionQuality={0}",&local_468);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_368);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_468.AllocatorInstance.Data,local_468.ArrayNum);
  if ((FStringFormatArg *)local_468.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_468.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_e8,local_3f8.PostProcessQuality);
  local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_458.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_458.AllocatorInstance,1,&local_458.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_458.AllocatorInstance.Data,&local_e8,1);
  ::FString::FormatImpl(&local_358,L"sg.PostProcessQuality={0}",&local_458);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_358);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_458.AllocatorInstance.Data,local_458.ArrayNum);
  if ((FStringFormatArg *)local_458.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_c8,local_3f8.TextureQuality);
  local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_448.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_448.AllocatorInstance,1,&local_448.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_448.AllocatorInstance.Data,&local_c8,1);
  ::FString::FormatImpl(&local_348,L"sg.TextureQuality={0}",&local_448);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_348);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_448.AllocatorInstance.Data,local_448.ArrayNum);
  if ((FStringFormatArg *)local_448.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_448.AllocatorInstance.Data);
  }
  if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_a8,local_3f8.EffectsQuality);
  local_438.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_438.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_438.AllocatorInstance,1,&local_438.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_438.AllocatorInstance.Data,&local_a8,1);
  ::FString::FormatImpl(&local_338,L"sg.EffectsQuality={0}",&local_438);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_338);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_438.AllocatorInstance.Data,local_438.ArrayNum);
  if ((FStringFormatArg *)local_438.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_88,local_3f8.FoliageQuality);
  local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_428.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_428.AllocatorInstance,1,&local_428.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_428.AllocatorInstance.Data,&local_88,1);
  ::FString::FormatImpl(&local_328,L"sg.FoliageQuality={0}",&local_428);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_328);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_428.AllocatorInstance.Data,local_428.ArrayNum);
  if ((FStringFormatArg *)local_428.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_68,local_3f8.ShadingQuality);
  local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_418.AllocatorInstance,1,&local_418.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_418.AllocatorInstance.Data,&local_68,1);
  ::FString::FormatImpl(&local_318,L"sg.ShadingQuality={0}",&local_418);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_318);
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_418.AllocatorInstance.Data,local_418.ArrayNum);
  if ((FStringFormatArg *)local_418.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_418.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  FStringFormatArg::FStringFormatArg(&local_48,local_3f8.LandscapeQuality);
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_408.AllocatorInstance,1,&local_408.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_408.AllocatorInstance.Data,&local_48,1);
  ::FString::FormatImpl(&local_308,L"sg.LandscapeQuality={0}",&local_408);
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_308);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_408.AllocatorInstance.Data,local_408.ArrayNum);
  if ((FStringFormatArg *)local_408.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_3f8.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.GPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (local_3f8.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.CPUBenchmarkSteps.AllocatorInstance.Data);
  }
  if (this->bDisableTextureStreaming != false) {
    ::FString::FString(&local_2f8,L"r.TextureStreaming=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2f8);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if (this->bDisableLODs != false) {
    ::FString::FString(&local_2e8,L"r.ForceLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2e8);
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_2d8,L"r.SkeletalMeshLODBias=-10");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2d8);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_2c8,L"r.ParticleLODBias=-10");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2c8);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_2b8,L"foliage.DitheredLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2b8);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_2a8,L"foliage.ForceLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_2a8);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
  }
  if (this->bDisableHLODs != false) {
    ::FString::FString(&local_298,L"r.HLOD 0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_4,&local_298);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  if (this->bFlushStreamingManagers != false) {
    ::FString::FString(&local_288,L"r.Streaming.SyncStatesWhenBlocking=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_288);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if (this->bRebuildLumenSceneBetweenRenderLayers != false) {
    ::FString::FString(&local_278,L"r.LumenScene.Radiosity.UpdateFactor=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_278);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_268,L"r.LumenScene.SurfaceCache.CardCaptureFactor=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_268);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_258,L"r.LumenScene.SurfaceCache.Feedback=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_258);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_248,L"r.LumenScene.SurfaceCache.RecaptureEveryFrame=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_248);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_238,L"a.URO.Enable=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_238);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_228,L"r.SkyLight.RealTimeReflectionCapture.TimeSlice=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_228);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_218,L"r.VolumetricRenderTarget=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_218);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_208,L"r.VolumetricRenderTarget.Mode=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_208);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1f8,L"wp.Runtime.BlockOnSlowStreaming=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1f8);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1e8,L"p.Chaos.ImmPhys.MinStepTime=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1e8);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1d8,L"r.SkipRedundantTransformUpdate=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1d8);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_1c8,L"p.ChaosCloth.UseTimeStepSmoothing=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1c8);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl
            (&local_1b8,L"r.Water.SkipWaterInfoTextureRenderWhenWorldRenderingDisabled=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1b8);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_178,L"Slate.bAllowThrottling=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_178);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
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
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"MoviePipeline.EnableVTInvalidateOnNaniteLOD",1);
  if (plVar4 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 200))(plVar4);
    if (iVar3 != 0) {
      ::FString::PrintfImpl(&local_198,L"r.Nanite.VSMInvalidateOnLODDelta=%d");
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_198);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
    }
  }
  UE::MoviePipeline::GetAlphaOutputOverride();
  ::FString::PrintfImpl(&local_188,L"r.PostProcessing.PropagateAlpha=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_188);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return;
}

// GetBranchRestriction @ 14dd23ea0

EMovieGraphBranchRestriction __thiscall
UMovieGraphGlobalGameOverridesNode::GetBranchRestriction(UMovieGraphGlobalGameOverridesNode *this)

{
  return Globals;
}

// GetGameModeOverride @ 14dd261e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TSubclassOf<AGameModeBase> __cdecl
UMovieGraphGlobalGameOverridesNode::GetGameModeOverride(UMoviePipelineExecutorJob *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UMoviePipelineSetting *pUVar4;
  FName FVar5;
  UMovieGraphConfig *this;
  UMovieGraphConfig *pUVar6;
  UMovieGraphEvaluatedConfig *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  UObject *in_RDX;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  UClass *pUVar12;
  wchar_t *pwVar13;
  FString local_158;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_148;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_138;
  FMovieGraphTraversalContext local_128;
  FString local_38;
  FString local_28;
  
  this = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                   ((TSoftObjectPtr<UMovieGraphConfig> *)&in_RDX[7].field_0x20);
  pUVar6 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                     ((TSoftObjectPtr<UMovieGraphConfig> *)&in_RDX[7].field_0x20);
  pUVar8 = (UClass *)0x0;
  pUVar12 = (UClass *)0x0;
  if ((pUVar6 == (UMovieGraphConfig *)0x0) || (this == (UMovieGraphConfig *)0x0)) {
    UMoviePipelinePrimaryConfig::GetAllSettings
              (*(UMoviePipelinePrimaryConfig **)&in_RDX[6].field_0x10,&local_148,false,false);
    pFVar1 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 8;
    for (FVar11.Data = local_148.AllocatorInstance.Data; FVar11.Data != pFVar1;
        FVar11.Data = FVar11.Data + 8) {
      pUVar12 = *(UClass **)(*(longlong *)FVar11.Data + 0x10);
      pUVar8 = Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
      if (pUVar12 == pUVar8) {
        if ((FVar11.Data != (FScriptContainerElement *)0x0) &&
           (pUVar4 = *(UMoviePipelineSetting **)FVar11.Data, pUVar4 != (UMoviePipelineSetting *)0x0)
           ) {
          pUVar12 = Z_Construct_UClass_UMoviePipelineGameOverrideSetting_NoRegister();
          iVar2 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar12->_padding_)) {
            pFVar9 = GetTypeName<UMoviePipelineGameOverrideSetting>(&local_38);
            pwVar10 = L"";
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<UMoviePipelineSetting>(&local_28,pUVar4);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar10,pwVar13);
          }
          pUVar12 = TSoftClassPtr<AGameModeBase>::LoadSynchronous
                              ((TSoftClassPtr<AGameModeBase> *)&pUVar4[1]._padding_);
          param_1->_padding_ = (longlong)pUVar12;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          goto LAB_14dd264da;
        }
        break;
      }
    }
  }
  else {
    local_128.Shot.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0;
    local_128.RootGraph.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphConfig>_u_0)0x0;
    local_128.RenderDataIdentifier.CameraName.Data.ArrayNum = 0;
    local_128.RenderDataIdentifier.CameraName.Data.ArrayMax = 0;
    local_128.Time.OutputFrameNumber = 0;
    local_128.Time.ShotOutputFrameNumber = 0;
    local_128.Time.TemporalSampleIndex = 0;
    local_128.Time.TemporalSampleCount = 0;
    local_128.Time.SpatialSampleIndex = 0;
    local_128.Time.SpatialSampleCount = 0;
    local_128.Time.RootTimeCode.Hours = 0;
    local_128.Time.RootTimeCode.Minutes = 0;
    local_128.Time.RootTimeCode.Seconds = 0;
    local_128.Time.RootTimeCode.Frames = 0;
    local_128.ShotIndex = 0;
    local_128.ShotCount = 0;
    local_128.RenderDataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
    local_128.RenderDataIdentifier.RootBranchName.Number = 0;
    local_128.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_128.RenderDataIdentifier.LayerName.Data.ArrayNum = 0;
    local_128.RenderDataIdentifier.LayerName.Data.ArrayMax = 0;
    local_128.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_128.RenderDataIdentifier.RendererName.Data.ArrayNum = 0;
    local_128.RenderDataIdentifier.RendererName.Data.ArrayMax = 0;
    local_128.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_128.RenderDataIdentifier.SubResourceName.Data.ArrayNum = 0;
    local_128.RenderDataIdentifier.SubResourceName.Data.ArrayMax = 0;
    local_128.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_128.Time.RenderedFrameNumber = 0;
    local_128.Time.FrameDeltaTime = 0.0;
    local_128.Time.WorldTimeDilation = 0.0;
    local_128.Time.bHasRelativeTimeBeenUsed = false;
    local_128.Time.WorldSeconds = 0.0;
    local_128.Time.MotionBlurFraction = 0.0;
    local_128.Time.FrameRate.Numerator = 0;
    local_128.Time.FrameRate.Denominator = 0;
    local_128.Time.bIsFirstTemporalSampleForFrame = false;
    local_128.Time.bIsLastTemporalSampleForFrame = false;
    local_128.Time.bDiscardOutput = false;
    local_128.Time.bRequiresAccumulator = false;
    local_128.Time.EvaluatedConfig.field0_0x0.DebugPtr =
         (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
    local_128.Time.RootTimeCode.Subframe = 0.0;
    local_128.Time.RootTimeCode.bDropFrameFormat = false;
    local_128.Time.RootFrameNumber.Value = 0;
    local_128.Time.ShotTimeCode.Hours = 0;
    local_128.Time.ShotTimeCode.Minutes = 0;
    local_128.Time.ShotTimeCode.Seconds = 0;
    local_128.Time.ShotTimeCode.Frames = 0;
    local_128.Time.ShotTimeCode.Subframe = 0.0;
    local_128.Time.ShotTimeCode.bDropFrameFormat = false;
    local_128.Time.ShotFrameNumber.Value = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (in_RDX != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(in_RDX);
    }
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    this_00 = UMovieGraphConfig::CreateFlattenedGraph(this,&local_128,&local_158);
    FVar5 = UMovieGraphNode::GlobalsPinName;
    if (this_00 != (UMovieGraphEvaluatedConfig *)0x0) {
      pUVar7 = StaticClass();
      UMovieGraphEvaluatedConfig::GetSettingsForBranch(this_00,&local_138,pUVar7,FVar5,false,true);
      if (local_138.ArrayNum < 1) {
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
      }
      else {
        lVar3 = *(longlong *)local_138.AllocatorInstance.Data;
        FMemory::Free(local_138.AllocatorInstance.Data);
        pUVar12 = pUVar8;
        if (lVar3 != 0) {
          pUVar8 = StaticClass();
          iVar2 = (int)pUVar8->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar8->_padding_)) {
            pUVar12 = TSoftClassPtr<AGameModeBase>::LoadSynchronous
                                ((TSoftClassPtr<AGameModeBase> *)(lVar3 + 0xc0));
          }
        }
      }
      param_1->_padding_ = (longlong)pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_128.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
      }
      if (local_128.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
      }
      local_148.AllocatorInstance.Data =
           local_128.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
      if (local_128.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
        local_148.AllocatorInstance.Data =
             local_128.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
      }
LAB_14dd264da:
      if (local_148.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return (TSubclassOf<AGameModeBase>)(TObjectPtr<UClass>)param_1;
      }
      FMemory::Free(local_148.AllocatorInstance.Data);
      return (TSubclassOf<AGameModeBase>)(TObjectPtr<UClass>)param_1;
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_128.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
    }
    if (local_128.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
    }
    local_148.AllocatorInstance.Data =
         local_128.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
    if (local_128.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
      local_148.AllocatorInstance.Data =
           local_128.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data;
    }
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  param_1->_padding_ = 0;
  return (TSubclassOf<AGameModeBase>)(TObjectPtr<UClass>)param_1;
}

// GetPrivateStaticClass @ 14dd2c690

UClass * __cdecl UMovieGraphGlobalGameOverridesNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalGameOverridesNode",
               &Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalGameOverridesNode,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalGameOverridesNode>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalGameOverridesNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalGameOverridesNode.InnerSingleton;
}

// PostLoad @ 14dd3a480

void __thiscall
UMovieGraphGlobalGameOverridesNode::PostLoad(UMovieGraphGlobalGameOverridesNode *this)

{
  undefined1 uVar1;
  int iVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *local_res8;
  
  UMovieGraphNode::PostLoad((UMovieGraphNode *)this);
  pUVar3 = (this->GameModeOverride).Class.field0_0x0.DebugPtr;
  if (pUVar3 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar3->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) &&
         (local_res8 = (this->GameModeOverride).Class.field0_0x0.DebugPtr,
         local_res8 != (UClass *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        FSoftObjectPtr::operator=
                  (&(this->SoftGameModeOverride).SoftObjectPtr,(FObjectPtr)&local_res8);
        uVar1 = this->field_0xb0;
        (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
        this->field_0xb0 = (this->bOverride_GameModeOverride * '\x02' ^ uVar1 & 0xfd) & 0xfe;
      }
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphGlobalGameOverridesNode @ 14dd451d0

void __cdecl
UMovieGraphGlobalGameOverridesNode::StaticRegisterNativesUMovieGraphGlobalGameOverridesNode(void)

{
  return;
}

// operator() @ 15058cfb0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l108::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509248>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509248>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058cff0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l117::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509247>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509247>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d030

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l126::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509244>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509244>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d070

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'[::I]::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509232>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509232>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d0b0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l145::<lambda_14>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509229>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d0f0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l154::<lambda_15>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509226>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509226>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d130

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l163::<lambda_16>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509225>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509225>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d170

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l172::<lambda_17>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509222>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509222>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d1b0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l181::<lambda_18>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509219>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509219>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058d1f0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l190::<lambda_19>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509214>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509214>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ddf0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509279>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509279>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058de30

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l199::<lambda_20>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509211>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509211>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058de70

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l217::<lambda_21>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509204>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509204>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058deb0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l229::<lambda_22>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058def0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509274>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509274>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058df70

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l33::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509273>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509273>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e050

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l42::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509272>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509272>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e0d0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l51::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509271>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509271>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e1b0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l60::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509270>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509270>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e1f0

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l78::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509255>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509255>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e230

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l90::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509250>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509250>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e270

bool __thiscall
`UMovieGraphGlobalGameOverridesNode::ApplySettings'::__l99::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1294932704168509249>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1294932704168509249>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

