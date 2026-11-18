// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 40

// StaticClass @ 14dd5e390

UClass * __cdecl UMoviePipelineGameOverrideSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameOverrideSetting",
               &Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineGameOverrideSetting,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineGameOverrideSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineGameOverrideSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton;
}

// UMoviePipelineGameOverrideSetting @ 14dd6b1d0

UMoviePipelineGameOverrideSetting * __thiscall
UMoviePipelineGameOverrideSetting::UMoviePipelineGameOverrideSetting
          (UMoviePipelineGameOverrideSetting *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoftGameModeOverride).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&___7UMoviePipelineGameOverrideSetting__6B_;
  *(undefined8 *)&(this->SoftGameModeOverride).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
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

// ~UMoviePipelineGameOverrideSetting @ 14dd6c180

void __thiscall
UMoviePipelineGameOverrideSetting::~UMoviePipelineGameOverrideSetting
          (UMoviePipelineGameOverrideSetting *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineGameOverrideSetting__6B_;
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
  this->_padding_ = (longlong)&___7UMoviePipelineSetting__6B_;
  DestructItems<FText,int>((FText *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyCVarSettings @ 14dd75c00

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMoviePipelineGameOverrideSetting::ApplyCVarSettings
          (UMoviePipelineGameOverrideSetting *this,bool param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UEngine *pUVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  int iVar10;
  FQualityLevels *pFVar11;
  IConsoleManager *pIVar12;
  IConsoleVariable *pIVar13;
  FOutputDeviceRedirector *pFVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  longlong lVar19;
  char cVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336;
  undefined1 local_335;
  undefined1 local_334;
  undefined1 local_333;
  undefined1 local_332;
  undefined1 local_331;
  undefined1 local_330;
  undefined1 local_32f;
  undefined1 local_32e;
  undefined1 local_32d;
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
  undefined1 local_329;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  undefined8 local_320;
  undefined8 local_318;
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
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  FQualityLevels local_148;
  uint local_e8;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  FQualityLevels local_90;
  
  if ((this->bCinematicQualitySettings != false) && (param_1)) {
    pFVar11 = Scalability::GetQualityLevels(&local_90);
    pTVar2 = &(this->PreviousQualityLevels).CPUBenchmarkSteps;
    (this->PreviousQualityLevels).ResolutionQuality = pFVar11->ResolutionQuality;
    pTVar1 = &pFVar11->CPUBenchmarkSteps;
    (this->PreviousQualityLevels).ViewDistanceQuality = pFVar11->ViewDistanceQuality;
    (this->PreviousQualityLevels).AntiAliasingQuality = pFVar11->AntiAliasingQuality;
    (this->PreviousQualityLevels).ShadowQuality = pFVar11->ShadowQuality;
    (this->PreviousQualityLevels).GlobalIlluminationQuality = pFVar11->GlobalIlluminationQuality;
    (this->PreviousQualityLevels).ReflectionQuality = pFVar11->ReflectionQuality;
    (this->PreviousQualityLevels).PostProcessQuality = pFVar11->PostProcessQuality;
    (this->PreviousQualityLevels).TextureQuality = pFVar11->TextureQuality;
    (this->PreviousQualityLevels).EffectsQuality = pFVar11->EffectsQuality;
    (this->PreviousQualityLevels).FoliageQuality = pFVar11->FoliageQuality;
    (this->PreviousQualityLevels).ShadingQuality = pFVar11->ShadingQuality;
    (this->PreviousQualityLevels).LandscapeQuality = pFVar11->LandscapeQuality;
    (this->PreviousQualityLevels).CPUBenchmarkResults = pFVar11->CPUBenchmarkResults;
    (this->PreviousQualityLevels).GPUBenchmarkResults = pFVar11->GPUBenchmarkResults;
    if (pTVar2 != pTVar1) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayNum =
           (pFVar11->CPUBenchmarkSteps).ArrayNum;
      (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayMax =
           (pFVar11->CPUBenchmarkSteps).ArrayMax;
      (pFVar11->CPUBenchmarkSteps).ArrayNum = 0;
      (pFVar11->CPUBenchmarkSteps).ArrayMax = 0;
    }
    pTVar1 = &pFVar11->GPUBenchmarkSteps;
    pTVar3 = &(this->PreviousQualityLevels).GPUBenchmarkSteps;
    if (pTVar3 != pTVar1) {
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayNum =
           (pFVar11->GPUBenchmarkSteps).ArrayNum;
      (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayMax =
           (pFVar11->GPUBenchmarkSteps).ArrayMax;
      (pFVar11->GPUBenchmarkSteps).ArrayNum = 0;
      (pFVar11->GPUBenchmarkSteps).ArrayMax = 0;
    }
    if (local_90.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_90.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
    local_148.ViewDistanceQuality = (this->PreviousQualityLevels).ViewDistanceQuality;
    local_148.ResolutionQuality = (this->PreviousQualityLevels).ResolutionQuality;
    local_148.CPUBenchmarkSteps.ArrayNum = (this->PreviousQualityLevels).CPUBenchmarkSteps.ArrayNum;
    lVar19 = (longlong)local_148.CPUBenchmarkSteps.ArrayNum;
    local_148.GPUBenchmarkResults = (this->PreviousQualityLevels).GPUBenchmarkResults;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_148.AntiAliasingQuality = (this->PreviousQualityLevels).AntiAliasingQuality;
    local_148.ShadowQuality = (this->PreviousQualityLevels).ShadowQuality;
    local_148.GlobalIlluminationQuality = (this->PreviousQualityLevels).GlobalIlluminationQuality;
    local_148.ReflectionQuality = (this->PreviousQualityLevels).ReflectionQuality;
    local_148.PostProcessQuality = (this->PreviousQualityLevels).PostProcessQuality;
    local_148.TextureQuality = (this->PreviousQualityLevels).TextureQuality;
    local_148.EffectsQuality = (this->PreviousQualityLevels).EffectsQuality;
    local_148.FoliageQuality = (this->PreviousQualityLevels).FoliageQuality;
    local_148.ShadingQuality = (this->PreviousQualityLevels).ShadingQuality;
    local_148.CPUBenchmarkResults = (this->PreviousQualityLevels).CPUBenchmarkResults;
    local_148.LandscapeQuality = (this->PreviousQualityLevels).LandscapeQuality;
    local_148.CPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_148.CPUBenchmarkSteps.ArrayNum == 0) {
      local_148.CPUBenchmarkSteps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_148.CPUBenchmarkSteps.ArrayNum,0,
                 &local_148.CPUBenchmarkSteps.AllocatorInstance,local_148.CPUBenchmarkSteps.ArrayNum
                 ,&local_148.CPUBenchmarkSteps.ArrayMax);
      memcpy(local_148.CPUBenchmarkSteps.AllocatorInstance.Data,pFVar4,lVar19 << 2);
    }
    local_148.GPUBenchmarkSteps.ArrayNum = (this->PreviousQualityLevels).GPUBenchmarkSteps.ArrayNum;
    lVar19 = (longlong)local_148.GPUBenchmarkSteps.ArrayNum;
    pFVar4 = (this->PreviousQualityLevels).GPUBenchmarkSteps.AllocatorInstance.Data;
    local_148.GPUBenchmarkSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_148.GPUBenchmarkSteps.ArrayNum == 0) {
      local_148.GPUBenchmarkSteps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_148.GPUBenchmarkSteps.ArrayNum,0,
                 &local_148.GPUBenchmarkSteps.AllocatorInstance,local_148.GPUBenchmarkSteps.ArrayNum
                 ,&local_148.GPUBenchmarkSteps.ArrayMax);
      memcpy(local_148.GPUBenchmarkSteps.AllocatorInstance.Data,pFVar4,lVar19 << 2);
    }
    Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax(&local_148,0);
    Scalability::SetQualityLevels(&local_148,false);
    if (local_148.GPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.GPUBenchmarkSteps.AllocatorInstance.Data);
    }
    if (local_148.CPUBenchmarkSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.CPUBenchmarkSteps.AllocatorInstance.Data);
    }
  }
  if (this->TextureStreaming == Disabled) {
    pIVar12 = IConsoleManager::Get();
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.TextureStreaming",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_res20[0] = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l32::<lambda_3>::operator()
                        (local_res20);
      if (!bVar9) goto LAB_14dd760dc;
    }
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))(pIVar13);
      local_300 = 0;
      this->PreviousTextureStreaming = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousTextureStreaming;
      local_2f8 = 0;
    }
LAB_14dd760c9:
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  else if (this->TextureStreaming == FullyLoad) {
    pIVar12 = IConsoleManager::Get();
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.Streaming.FramesForFullUpdate",0)
    ;
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_res8[0] = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l14::<lambda_1>::operator()
                        (local_res8);
      if (bVar9) goto LAB_14dd75f90;
    }
    else {
LAB_14dd75f90:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_320 = 0;
        this->PreviousFramesForFullUpdate = iVar10;
        iVar10 = 0;
      }
      else {
        iVar10 = this->PreviousFramesForFullUpdate;
        local_318 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    pIVar12 = IConsoleManager::Get();
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*pIVar12 + 0xc0))
                        (pIVar12,L"r.Streaming.FullyLoadUsedTextures",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_res18[0] = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l23::<lambda_2>::operator()
                        (local_res18);
      if (!bVar9) goto LAB_14dd760dc;
    }
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_310 = 0;
      this->PreviousFullyLoadUsedTextures = iVar10;
      iVar10 = 1;
    }
    else {
      iVar10 = this->PreviousFullyLoadUsedTextures;
      local_308 = 0;
    }
    goto LAB_14dd760c9;
  }
LAB_14dd760dc:
  if (this->bUseLODZero != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ForceLOD",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_338 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l44::<lambda_4>::operator()
                        (&local_338);
      if (bVar9) goto LAB_14dd76158;
    }
    else {
LAB_14dd76158:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_2f0 = 0;
        this->PreviousForceLOD = iVar10;
        iVar10 = 0;
      }
      else {
        iVar10 = this->PreviousForceLOD;
        local_2e8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.SkeletalMeshLODBias",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_337 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l53::<lambda_5>::operator()
                        (&local_337);
      if (bVar9) goto LAB_14dd76211;
    }
    else {
LAB_14dd76211:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_2e0 = 0;
        this->PreviousSkeletalMeshBias = iVar10;
        iVar10 = -10;
      }
      else {
        iVar10 = this->PreviousSkeletalMeshBias;
        local_2d8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ParticleLODBias",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_336 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l62::<lambda_6>::operator()
                        (&local_336);
      if (bVar9) goto LAB_14dd762cd;
    }
    else {
LAB_14dd762cd:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_2d0 = 0;
        this->PreviousParticleLODBias = iVar10;
        iVar10 = -10;
      }
      else {
        iVar10 = this->PreviousParticleLODBias;
        local_2c8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"foliage.DitheredLOD",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_335 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l71::<lambda_7>::operator()
                        (&local_335);
      if (bVar9) goto LAB_14dd76389;
    }
    else {
LAB_14dd76389:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_2c0 = 0;
        this->PreviousFoliageDitheredLOD = iVar10;
        iVar10 = 0;
      }
      else {
        iVar10 = this->PreviousFoliageDitheredLOD;
        local_2b8 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"foliage.ForceLOD",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_334 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l80::<lambda_8>::operator()
                        (&local_334);
      if (!bVar9) goto LAB_14dd76489;
    }
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_2b0 = 0;
      this->PreviousFoliageForceLOD = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousFoliageForceLOD;
      local_2a8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd76489:
  pUVar6 = GEngine;
  if ((this->bDisableHLODs != false) && (GEngine != (UEngine *)0x0)) {
    pcVar5 = *(code **)(GEngine->_padding_ + 8);
    pFVar14 = GetGlobalLogSingleton();
    uVar15 = (**(code **)(this->_padding_ + 0x180))(this);
    (*pcVar5)(&pUVar6->_padding_,uVar15,L"r.HLOD 0",pFVar14);
  }
  if (this->bUseHighQualityShadows != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Shadow.DistanceScale",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_333 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l98::<lambda_9>::operator()
                        (&local_333);
      if (bVar9) goto LAB_14dd76546;
    }
    else {
LAB_14dd76546:
      if (param_1) {
        fVar22 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
        this->PreviousShadowDistanceScale = fVar22;
        local_2a0 = 0;
        IConsoleVariable::SetWithCurrentPriority<int>
                  (pIVar13,this->ShadowDistanceScale,(FName)0x0,ECVF_SetByConsole,
                   ECVF_SetByScalability);
      }
      else {
        local_298 = 0;
        IConsoleVariable::SetWithCurrentPriority<float>
                  (pIVar13,this->PreviousShadowDistanceScale,(FName)0x0,ECVF_SetByConsole,
                   ECVF_SetByScalability);
      }
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ShadowQuality",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_332 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l107::<lambda_10>::
              operator()(&local_332);
      if (bVar9) goto LAB_14dd7661b;
    }
    else {
LAB_14dd7661b:
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_290 = 0;
        this->PreviousShadowQuality = iVar10;
        iVar10 = 5;
      }
      else {
        iVar10 = this->PreviousShadowQuality;
        local_288 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Shadow.RadiusThreshold",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_331 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l116::<lambda_11>::
              operator()(&local_331);
      if (!bVar9) goto LAB_14dd76729;
    }
    if (param_1) {
      fVar23 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
      fVar22 = this->ShadowRadiusThreshold;
      this->PreviousShadowRadiusThreshold = fVar23;
      local_280 = 0;
    }
    else {
      fVar22 = this->PreviousShadowRadiusThreshold;
      local_278 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<float>
              (pIVar13,fVar22,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd76729:
  if (this->bOverrideViewDistanceScale != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.ViewDistanceScale",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_330 = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'[::A]::<lambda_12>::operator()
                        (&local_330);
      if (!bVar9) goto LAB_14dd7680b;
    }
    if (param_1) {
      fVar22 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
      this->PreviousViewDistanceScale = fVar22;
      local_270 = 0;
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,this->ViewDistanceScale,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability)
      ;
    }
    else {
      local_268 = 0;
      IConsoleVariable::SetWithCurrentPriority<float>
                (pIVar13,this->PreviousViewDistanceScale,(FName)0x0,ECVF_SetByConsole,
                 ECVF_SetByScalability);
    }
  }
LAB_14dd7680b:
  if (this->bOverrideGrassCullDistanceScale != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"grass.CullDistanceScale",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_32f = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'[::M]::<lambda_13>::operator()
                        (&local_32f);
      if (!bVar9) goto LAB_14dd768dc;
    }
    if (param_1) {
      fVar23 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
      fVar22 = this->GrassCullDistanceScale;
      this->PreviousGrassCullDistanceScale = fVar23;
      local_260 = 0;
    }
    else {
      fVar22 = this->PreviousGrassCullDistanceScale;
      local_258 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<float>
              (pIVar13,fVar22,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd768dc:
  if (this->bOverrideGrassDensityScale != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"grass.densityScale",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_32e = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l152::<lambda_14>::
              operator()(&local_32e);
      if (!bVar9) goto LAB_14dd769ad;
    }
    if (param_1) {
      fVar23 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
      fVar22 = this->GrassDensityScale;
      this->PreviousGrassDensityScale = fVar23;
      local_250 = 0;
    }
    else {
      fVar22 = this->PreviousGrassDensityScale;
      local_248 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<float>
              (pIVar13,fVar22,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd769ad:
  if (this->bDisableGPUTimeout != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.D3D12.GPUTimeout",0);
    if (pIVar13 != (IConsoleVariable *)0x0) {
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))(pIVar13);
        this->PreviousGPUTimeout = iVar10;
        iVar10 = 0;
        local_240 = 0;
      }
      else {
        iVar10 = this->PreviousGPUTimeout;
        local_238 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
  }
  if (this->bFlushStreamingManagers != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Streaming.SyncStatesWhenBlocking",0);
    if (pIVar13 == (IConsoleVariable *)0x0) {
      local_32d = 0;
      bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l176::<lambda_15>::
              operator()(&local_32d);
      if (!bVar9) goto LAB_14dd76b2c;
    }
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_230 = 0;
      this->PreviousStreamingManagerSyncState = iVar10;
      iVar10 = 1;
    }
    else {
      iVar10 = this->PreviousStreamingManagerSyncState;
      local_228 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
LAB_14dd76b2c:
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar16 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.PostProcessing.PropagateAlpha",0);
  if (plVar16 == (longlong *)0x0) {
    local_32c = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l185::<lambda_16>::operator()
                      (&local_32c);
    if (bVar9) goto LAB_14dd76ba2;
  }
  else {
LAB_14dd76ba2:
    if (param_1) {
      bVar9 = (bool)(**(code **)(*plVar16 + 0xc0))();
      this->PreviousAlphaOutput = bVar9;
      pTVar8 = CVarMoviePipelineAlphaOutputOverride.Ref;
      local_220 = 0;
      bVar9 = IsInParallelGameThread();
      if (bVar9) {
LAB_14dd76be0:
        lVar19 = 0;
      }
      else {
        bVar9 = IsInGameThread();
        lVar19 = 1;
        if (bVar9) goto LAB_14dd76be0;
      }
      cVar20 = pTVar8->ShadowedValue[lVar19];
      local_e0 = local_220;
      local_d8 = 0;
      local_e4 = 1;
      local_d0 = 0x2000000;
      local_d4 = 0xf000000;
      local_e8 = (**(code **)(*plVar16 + 0x18))(plVar16);
      local_e8 = local_e8 & 0xff000000;
      puVar21 = &local_e8;
      puVar17 = local_a8;
    }
    else {
      cVar20 = this->PreviousAlphaOutput;
      local_c0 = 0;
      local_218 = 0;
      local_b8 = 0;
      local_c4 = 1;
      local_b0 = 0x2000000;
      local_b4 = 0xf000000;
      local_c8 = (**(code **)(*plVar16 + 0x18))(plVar16);
      local_c8 = local_c8 & 0xff000000;
      puVar21 = &local_c8;
      puVar17 = local_9c;
    }
    lVar19 = *plVar16;
    uVar15 = (**(code **)(lVar19 + 0xa8))(plVar16,puVar17,puVar21);
    puVar18 = &u_0;
    if (cVar20 != '\0') {
      puVar18 = &u_1;
    }
    (**(code **)(lVar19 + 0xb0))(plVar16,puVar18,uVar15);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"a.URO.Enable",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_32b = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l195::<lambda_17>::operator()
                      (&local_32b);
    if (bVar9) goto LAB_14dd76d3e;
  }
  else {
LAB_14dd76d3e:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_210 = 0;
      this->PreviousAnimationUROEnabled = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousAnimationUROEnabled;
      local_208 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"au.NeverMuteNonRealtimeAudioDevices",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_32a = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l204::<lambda_18>::operator()
                      (&local_32a);
    if (bVar9) goto LAB_14dd76df7;
  }
  else {
LAB_14dd76df7:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_200 = 0;
      this->PreviousNeverMuteNonRealtimeAudio = iVar10;
      iVar10 = 1;
    }
    else {
      iVar10 = this->PreviousNeverMuteNonRealtimeAudio;
      local_1f8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SkyLight.RealTimeReflectionCapture.TimeSlice",
                       0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_329 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l213::<lambda_19>::operator()
                      (&local_329);
    if (bVar9) goto LAB_14dd76eb6;
  }
  else {
LAB_14dd76eb6:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_1f0 = 0;
      this->PreviousSkyLightRealTimeReflectionCaptureTimeSlice = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousSkyLightRealTimeReflectionCaptureTimeSlice;
      local_1e8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.VolumetricRenderTarget",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_328 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l222::<lambda_20>::operator()
                      (&local_328);
    if (bVar9) goto LAB_14dd76f75;
  }
  else {
LAB_14dd76f75:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_1e0 = 0;
      this->PreviousVolumetricRenderTarget = iVar10;
      iVar10 = 1;
    }
    else {
      iVar10 = this->PreviousVolumetricRenderTarget;
      local_1d8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.VolumetricRenderTarget.Mode",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_327 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l231::<lambda_21>::operator()
                      (&local_327);
    if (bVar9) goto LAB_14dd77037;
  }
  else {
LAB_14dd77037:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_1d0 = 0;
      this->PreviousVolumetricRenderTargetMode = iVar10;
      iVar10 = 3;
    }
    else {
      iVar10 = this->PreviousVolumetricRenderTargetMode;
      local_1c8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"wp.Runtime.BlockOnSlowStreaming",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_326 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l240::<lambda_22>::operator()
                      (&local_326);
    if (bVar9) goto LAB_14dd770f9;
  }
  else {
LAB_14dd770f9:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_1c0 = 0;
      this->PreviousIgnoreStreamingPerformance = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousIgnoreStreamingPerformance;
      local_1b8 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"p.Chaos.ImmPhys.MinStepTime",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_325 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l249::<lambda_23>::operator()
                      (&local_325);
    if (bVar9) goto LAB_14dd771b8;
  }
  else {
LAB_14dd771b8:
    if (param_1) {
      fVar22 = (float)(**(code **)(*(longlong *)pIVar13 + 0xd0))();
      local_1b0 = 0;
      this->PreviousChaosImmPhysicsMinStepTime = fVar22;
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,0,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
    else {
      local_1a8 = 0;
      IConsoleVariable::SetWithCurrentPriority<float>
                (pIVar13,this->PreviousChaosImmPhysicsMinStepTime,(FName)0x0,ECVF_SetByConsole,
                 ECVF_SetByScalability);
    }
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"r.SkipRedundantTransformUpdate",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_324 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l258::<lambda_24>::operator()
                      (&local_324);
    if (bVar9) goto LAB_14dd7728e;
  }
  else {
LAB_14dd7728e:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_1a0 = 0;
      this->PreviousSkipRedundantTransformUpdate = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousSkipRedundantTransformUpdate;
      local_198 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"p.ChaosCloth.UseTimeStepSmoothing",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_323 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l267::<lambda_25>::operator()
                      (&local_323);
    if (bVar9) goto LAB_14dd7734d;
  }
  else {
LAB_14dd7734d:
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
      local_190 = 0;
      this->PreviousChaosClothUseTimeStepSmoothing = iVar10;
      iVar10 = 0;
    }
    else {
      iVar10 = this->PreviousChaosClothUseTimeStepSmoothing;
      local_188 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"Slate.bAllowThrottling",0);
  if (pIVar13 == (IConsoleVariable *)0x0) {
    local_322 = 0;
    bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l276::<lambda_26>::operator()
                      (&local_322);
    if (!bVar9) goto LAB_14dd77459;
  }
  if (param_1) {
    iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
    local_180 = 0;
    this->PreviousAllowSlateThrottling = iVar10;
    iVar10 = 0;
  }
  else {
    iVar10 = this->PreviousAllowSlateThrottling;
    local_178 = 0;
  }
  IConsoleVariable::SetWithCurrentPriority<int>
            (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
LAB_14dd77459:
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar13 = (IConsoleVariable *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,
                       L"r.Water.SkipWaterInfoTextureRenderWhenWorldRenderingDisabled",0);
  if (pIVar13 != (IConsoleVariable *)0x0) {
    if (param_1) {
      iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))(pIVar13);
      this->PreviousSkipWaterInfoTextureRenderWhenWorldRenderingDisabled = iVar10;
      iVar10 = 0;
      local_170 = 0;
    }
    else {
      iVar10 = this->PreviousSkipWaterInfoTextureRenderWhenWorldRenderingDisabled;
      local_168 = 0;
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
  }
  pTVar7 = CVarMoviePipelineVTNaniteAutoLOD.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar7->ShadowedValue[0] != 0) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar13 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Nanite.VSMInvalidateOnLODDelta",0);
    if ((pIVar13 != (IConsoleVariable *)0x0) ||
       (bVar9 = `UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l297::<lambda_27>::
                operator()(&local_321), bVar9)) {
      if (param_1) {
        iVar10 = (**(code **)(*(longlong *)pIVar13 + 200))();
        local_160 = 0;
        this->PreviousNaniteVSMInvalidateOnLODDelta = iVar10;
        iVar10 = 1;
      }
      else {
        iVar10 = this->PreviousNaniteVSMInvalidateOnLODDelta;
        local_158 = 0;
      }
      IConsoleVariable::SetWithCurrentPriority<int>
                (pIVar13,iVar10,(FName)0x0,ECVF_SetByConsole,ECVF_SetByScalability);
    }
  }
  if ((this->bCinematicQualitySettings != false) && (!param_1)) {
    Scalability::SetQualityLevels(&this->PreviousQualityLevels,false);
  }
  return;
}

// BuildNewProcessCommandLineArgsImpl @ 14dd78a80

void __thiscall
UMoviePipelineGameOverrideSetting::BuildNewProcessCommandLineArgsImpl
          (UMoviePipelineGameOverrideSetting *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  char cVar3;
  bool bVar4;
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
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x328))();
  if (cVar3 == '\0') {
    return;
  }
  if (this->bCinematicQualitySettings != false) {
    ::FString::FString(&local_288,L"sg.ViewDistanceQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_288);
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_278,L"sg.AntiAliasingQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_278);
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_268,L"sg.ShadowQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_268);
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_258,L"sg.GlobalIlluminationQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_258);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_248,L"sg.ReflectionQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_248);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_238,L"sg.PostProcessQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_238);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_228,L"sg.TextureQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_228);
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_218,L"sg.EffectsQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_218);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_208,L"sg.FoliageQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_208);
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_1f8,L"sg.ShadingQuality=4");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1f8);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  if (this->TextureStreaming == Disabled) {
    ::FString::FString(&local_1c8,L"r.TextureStreaming=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1c8);
    local_1d8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  else {
    if (this->TextureStreaming != FullyLoad) goto LAB_14dd78d02;
    ::FString::FString(&local_1e8,L"r.Streaming.FramesForFullUpdate=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1e8);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_1d8,L"r.Streaming.FullyLoadUsedTextures=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1d8);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
LAB_14dd78d02:
  if (this->bUseLODZero != false) {
    ::FString::FString(&local_1b8,L"r.ForceLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1b8);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_1a8,L"r.SkeletalMeshLODBias=-10");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_1a8);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_198,L"r.ParticleLODBias=-10");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_198);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_188,L"foliage.DitheredLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_188);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_178,L"foliage.ForceLOD=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_178);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if (this->bDisableHLODs != false) {
    ::FString::FString(&local_168,L"r.HLOD 0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_4,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (this->bUseHighQualityShadows != false) {
    ::FString::PrintfImpl(&local_158,L"r.Shadow.DistanceScale=%d");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_158);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_148,L"r.Shadow.RadiusThreshold=%f");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_148);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_138,L"r.ShadowQuality=5");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_138);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if (this->bOverrideViewDistanceScale != false) {
    ::FString::PrintfImpl(&local_128,L"r.ViewDistanceScale=%d");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_128);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  if (this->bOverrideGrassCullDistanceScale != false) {
    ::FString::PrintfImpl(&local_118,L"grass.CullDistanceScale=%f");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_118);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (this->bOverrideGrassDensityScale != false) {
    ::FString::PrintfImpl(&local_108,L"grass.densityScale=%f");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_108);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  if (this->bDisableGPUTimeout != false) {
    ::FString::FString(&local_f8,L"r.D3D12.GPUTimeout=0");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_f8);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  if (this->bFlushStreamingManagers != false) {
    ::FString::FString(&local_e8,L"r.Streaming.SyncStatesWhenBlocking=1");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_e8);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_d8,L"a.URO.Enable=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_c8,L"au.NeverMuteNonRealtimeAudioDevices=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_c8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_b8,L"r.SkyLight.RealTimeReflectionCapture.TimeSlice=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_a8,L"r.VolumetricRenderTarget=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_a8);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_98,L"r.VolumetricRenderTarget.Mode=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_88,L"wp.Runtime.BlockOnSlowStreaming=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_78,L"p.Chaos.ImmPhys.MinStepTime=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_68,L"r.SkipRedundantTransformUpdate=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"p.ChaosCloth.UseTimeStepSmoothing=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl
            (&local_48,L"r.Water.SkipWaterInfoTextureRenderWhenWorldRenderingDisabled=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_38,L"Slate.bAllowThrottling=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pTVar2 = CVarMoviePipelineVTNaniteAutoLOD.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    ::FString::PrintfImpl(&local_28,L"r.Nanite.VSMInvalidateOnLODDelta=%d");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    IsInGameThread();
  }
  ::FString::PrintfImpl(&local_18,L"r.PostProcessing.PropagateAlpha=%d");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>(param_3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14dd8bd10

UClass * __cdecl UMoviePipelineGameOverrideSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineGameOverrideSetting",
               &Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton,
               StaticRegisterNativesUMoviePipelineGameOverrideSetting,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineGameOverrideSetting>,
               InternalVTableHelperCtorCaller<UMoviePipelineGameOverrideSetting>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineGameOverrideSetting.InnerSingleton;
}

// IgnoreTransientFilters @ 14dd8ed10

bool __thiscall
UMoviePipelineGameOverrideSetting::IgnoreTransientFilters(UMoviePipelineGameOverrideSetting *this)

{
  return true;
}

// IsValidOnPrimary @ 14dd90350

bool __thiscall
UMoviePipelineGameOverrideSetting::IsValidOnPrimary(UMoviePipelineGameOverrideSetting *this)

{
  return true;
}

// IsValidOnShots @ 14dd903b0

bool __thiscall
UMoviePipelineGameOverrideSetting::IsValidOnShots(UMoviePipelineGameOverrideSetting *this)

{
  return false;
}

// PostLoad @ 14dd95b90

void __thiscall UMoviePipelineGameOverrideSetting::PostLoad(UMoviePipelineGameOverrideSetting *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  UObject::PostLoad((UObject *)this);
  pUVar2 = (this->GameModeOverride).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (local_res8 = (this->GameModeOverride).Class.field0_0x0.DebugPtr,
         local_res8 != (UClass *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        FSoftObjectPtr::operator=
                  (&(this->SoftGameModeOverride).SoftObjectPtr,(FObjectPtr)&local_res8);
        (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
      }
    }
  }
  return;
}

// SetupForPipelineImpl @ 14dda5480

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineGameOverrideSetting::SetupForPipelineImpl
          (UMoviePipelineGameOverrideSetting *this,UMoviePipeline *param_1)

{
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  ApplyCVarSettings(this,true);
  return;
}

// StaticRegisterNativesUMoviePipelineGameOverrideSetting @ 14dda66d0

void __cdecl
UMoviePipelineGameOverrideSetting::StaticRegisterNativesUMoviePipelineGameOverrideSetting(void)

{
  return;
}

// TeardownForPipelineImpl @ 14dda68b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMoviePipelineGameOverrideSetting::TeardownForPipelineImpl
          (UMoviePipelineGameOverrideSetting *this,UMoviePipeline *param_1)

{
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  ApplyCVarSettings(this,false);
  return;
}

// operator() @ 15058e2b0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l107::<lambda_10>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984663>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984663>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e2f0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l116::<lambda_11>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984662>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984662>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e330

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'[::A]::<lambda_12>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984657>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984657>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e370

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'[::M]::<lambda_13>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984652>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984652>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e3b0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l152::<lambda_14>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984647>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984647>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e3f0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l176::<lambda_15>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984636>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984636>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e430

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l185::<lambda_16>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984633>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984633>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e470

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l195::<lambda_17>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984623>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984623>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e4b0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l204::<lambda_18>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984620>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984620>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e4f0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l213::<lambda_19>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984617>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984617>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058eb30

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984695>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984695>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058eb70

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l222::<lambda_20>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984614>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984614>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ebb0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l231::<lambda_21>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984613>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984613>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ebf0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l240::<lambda_22>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984610>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984610>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ec30

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l249::<lambda_23>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984607>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984607>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ec70

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l258::<lambda_24>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984602>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984602>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ecb0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l267::<lambda_25>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984599>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984599>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ecf0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l276::<lambda_26>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984595>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984595>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ed30

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l297::<lambda_27>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984586>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984586>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ee20

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984694>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984694>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058eeb0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l32::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984691>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984691>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ef30

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l44::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984682>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984682>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058ef70

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l53::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984681>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984681>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058efb0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l62::<lambda_6>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984680>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984680>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058eff0

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l71::<lambda_7>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984679>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984679>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058f030

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l80::<lambda_8>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984678>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984678>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058f070

bool __thiscall
`UMoviePipelineGameOverrideSetting::ApplyCVarSettings'::__l98::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4641596531453984664>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4641596531453984664>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

