// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FVolumetricCloudRenderSceneInfo @ 1458594b0

FVolumetricCloudRenderSceneInfo * __thiscall
FVolumetricCloudRenderSceneInfo::FVolumetricCloudRenderSceneInfo
          (FVolumetricCloudRenderSceneInfo *this,FVolumetricCloudSceneProxy *param_1)

{
  this->VolumetricCloudSceneProxy = param_1;
  FVolumetricCloudCommonShaderParameters::FVolumetricCloudCommonShaderParameters
            (&this->VolumetricCloudCommonShaderParameters);
  this->VolumetricCloudCommonShaderParametersUB =
       (TUniformBufferRef<FVolumetricCloudCommonGlobalShaderParameters>)0x0;
  return this;
}

// ~FVolumetricCloudRenderSceneInfo @ 145859b70

void __thiscall
FVolumetricCloudRenderSceneInfo::~FVolumetricCloudRenderSceneInfo
          (FVolumetricCloudRenderSceneInfo *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TUniformBufferRef<FVolumetricCloudCommonGlobalShaderParameters> this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->VolumetricCloudCommonShaderParametersUB;
  if (this_00 == (TUniformBufferRef<FVolumetricCloudCommonGlobalShaderParameters>)0x0) {
    return;
  }
  LOCK();
  paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 8);
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 - 1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

