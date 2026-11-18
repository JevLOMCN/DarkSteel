// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 19

// StaticClass @ 14dc68c90

UClass * __cdecl UMoviePipelineRenderPass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineRenderPass",
               &Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton,
               StaticRegisterNativesUMoviePipelineRenderPass,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineRenderPass>,
               InternalVTableHelperCtorCaller<UMoviePipelineRenderPass>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton;
}

// UMoviePipelineRenderPass @ 14dc73ae0

UMoviePipelineRenderPass * __thiscall
UMoviePipelineRenderPass::UMoviePipelineRenderPass
          (UMoviePipelineRenderPass *this,FVTableHelper *param_1)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineRenderPass__6B_;
  return this;
}

// UMoviePipelineRenderPass @ 14dc73b10

UMoviePipelineRenderPass * __thiscall
UMoviePipelineRenderPass::UMoviePipelineRenderPass(UMoviePipelineRenderPass *this)

{
  UMoviePipelineSetting::UMoviePipelineSetting((UMoviePipelineSetting *)this);
  *(undefined ***)this = &___7UMoviePipelineRenderPass__6B_;
  return this;
}

// ~UMoviePipelineRenderPass @ 14dc74ab0

void __thiscall UMoviePipelineRenderPass::~UMoviePipelineRenderPass(UMoviePipelineRenderPass *this)

{
  *(undefined ***)this = &___7UMoviePipelineRenderPass__6B_;
  UMoviePipelineSetting::~UMoviePipelineSetting((UMoviePipelineSetting *)this);
  return;
}

// GatherOutputPassesImpl @ 14dc7ebf0

void __thiscall
UMoviePipelineRenderPass::GatherOutputPassesImpl
          (UMoviePipelineRenderPass *this,
          TArray<FMoviePipelinePassIdentifier,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14dc82890

UClass * __cdecl UMoviePipelineRenderPass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineRenderPass",
               &Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton,
               StaticRegisterNativesUMoviePipelineRenderPass,0x48,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineRenderPass>,
               InternalVTableHelperCtorCaller<UMoviePipelineRenderPass>,local_res8,
               UMoviePipelineSetting::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineRenderPass.InnerSingleton;
}

// IsValidOnPrimary @ 14dc844e0

bool __thiscall UMoviePipelineRenderPass::IsValidOnPrimary(UMoviePipelineRenderPass *this)

{
  return true;
}

// IsValidOnShots @ 14dc84520

bool __thiscall UMoviePipelineRenderPass::IsValidOnShots(UMoviePipelineRenderPass *this)

{
  return true;
}

// NeedsFrameThrottle @ 14dc85120

bool __thiscall UMoviePipelineRenderPass::NeedsFrameThrottle(UMoviePipelineRenderPass *this)

{
  return false;
}

// OnFrameStartImpl @ 14dc85130

void __thiscall UMoviePipelineRenderPass::OnFrameStartImpl(UMoviePipelineRenderPass *this)

{
  return;
}

// OnTileEnd @ 14dc85240

void __thiscall
UMoviePipelineRenderPass::OnTileEnd(UMoviePipelineRenderPass *this,TIntPoint<int> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc85243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x388))();
  return;
}

// OnTileEndImpl @ 14dc85250

void __thiscall
UMoviePipelineRenderPass::OnTileEndImpl(UMoviePipelineRenderPass *this,TIntPoint<int> param_1)

{
  return;
}

// OnTileStart @ 14dc85260

void __thiscall
UMoviePipelineRenderPass::OnTileStart(UMoviePipelineRenderPass *this,TIntPoint<int> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dc85263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x380))();
  return;
}

// OnTileStartImpl @ 14dc85270

void __thiscall
UMoviePipelineRenderPass::OnTileStartImpl(UMoviePipelineRenderPass *this,TIntPoint<int> param_1)

{
  return;
}

// RenderSample_GameThreadImpl @ 14dc86980

void __thiscall
UMoviePipelineRenderPass::RenderSample_GameThreadImpl
          (UMoviePipelineRenderPass *this,FMoviePipelineRenderPassMetrics *param_1)

{
  return;
}

// SetupImpl @ 14dc896b0

void __thiscall
UMoviePipelineRenderPass::SetupImpl
          (UMoviePipelineRenderPass *this,FMoviePipelineRenderPassInitSettings *param_1)

{
  return;
}

// StaticRegisterNativesUMoviePipelineRenderPass @ 14dc89d60

void __cdecl UMoviePipelineRenderPass::StaticRegisterNativesUMoviePipelineRenderPass(void)

{
  return;
}

// TeardownImpl @ 14dc89e60

void __thiscall UMoviePipelineRenderPass::TeardownImpl(UMoviePipelineRenderPass *this)

{
  return;
}

// WaitUntilTasksComplete @ 14dc8ea10

void __thiscall UMoviePipelineRenderPass::WaitUntilTasksComplete(UMoviePipelineRenderPass *this)

{
  return;
}

