// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 51

// ReleaseRHI @ 1456bd760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSystemTextures::ReleaseRHI(FSystemTextures *this)

{
  int *piVar1;
  FRHIShaderResourceView *pFVar2;
  IPooledRenderTarget *pIVar3;
  
  pFVar2 = (this->WhiteDummySRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->WhiteDummySRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pIVar3 = (this->WhiteDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->WhiteDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->BlackDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->BlackDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->BlackArrayDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->BlackArrayDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->BlackAlphaOneDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->BlackAlphaOneDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->BlackArrayDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->BlackArrayDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PerlinNoiseGradient).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->PerlinNoiseGradient).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PerlinNoise3D).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->PerlinNoise3D).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->SobolSampling).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->SobolSampling).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->SSAORandomization).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->SSAORandomization).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->GTAOPreIntegrated).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->GTAOPreIntegrated).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PreintegratedGF).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->PreintegratedGF).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->HairLUT0).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->HairLUT0).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->HairLUT1).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->HairLUT1).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->HairLUT2).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->HairLUT2).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->GGXLTCMat).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->GGXLTCMat).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->GGXLTCAmp).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->GGXLTCAmp).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->SheenLTC).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->SheenLTC).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->MaxFP16Depth).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->MaxFP16Depth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->DepthDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->DepthDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->GreenDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->GreenDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->DefaultNormal8Bit).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->DefaultNormal8Bit).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->VolumetricBlackDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricBlackDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->VolumetricBlackAlphaOneDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricBlackAlphaOneDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->VolumetricBlackUintDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->VolumetricBlackUintDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->CubeBlackDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->CubeBlackDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->CubeArrayBlackDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->CubeArrayBlackDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->ZeroUIntDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->ZeroUIntDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->ZeroUIntArrayDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->ZeroUIntArrayDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->ZeroUIntArrayAtomicCompatDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->ZeroUIntArrayAtomicCompatDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->MidGreyDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->MidGreyDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->StencilDummy).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->StencilDummy).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar2 = (this->StencilDummySRV).Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->StencilDummySRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pIVar3 = (this->BlackDepthCube).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->BlackDepthCube).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->GTAOPreIntegrated).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->GTAOPreIntegrated).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->AsciiTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->AsciiTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->SpaceFillingCurve).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->SpaceFillingCurve).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  DestructItems<FDefaultTexture,int>
            ((FDefaultTexture *)(this->DefaultTextures).AllocatorInstance.Data,
             (this->DefaultTextures).ArrayNum);
  piVar1 = &(this->DefaultTextures).ArrayMax;
  (this->DefaultTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->DefaultTextures).AllocatorInstance,0,piVar1);
  }
  DestructItems<FDefaultBuffer,int>
            ((FDefaultBuffer *)(this->DefaultBuffers).AllocatorInstance.Data,
             (this->DefaultBuffers).ArrayNum);
  piVar1 = &(this->DefaultBuffers).ArrayMax;
  (this->DefaultBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->DefaultBuffers).AllocatorInstance,0,piVar1);
  }
  if ((this->HashDefaultTextures).IndexSize != 0) {
    memset((this->HashDefaultTextures).Hash,0xff,
           (ulonglong)((this->HashDefaultTextures).HashSize << 2));
  }
  if ((this->HashDefaultBuffers).IndexSize != 0) {
    memset((this->HashDefaultBuffers).Hash,0xff,
           (ulonglong)((this->HashDefaultBuffers).HashSize << 2));
  }
  FRenderTargetPool::FreeUnusedResources((FRenderTargetPool *)&GRenderTargetPool);
  this->FeatureLevelInitializedTo = Num;
  return;
}

// ~FSystemTextures @ 1456deca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSystemTextures::~FSystemTextures(FSystemTextures *this)

{
  FScriptContainerElement *pFVar1;
  IPooledRenderTarget *pIVar2;
  FRHIShaderResourceView *pFVar3;
  
  if ((this->HashDefaultBuffers).IndexSize != 0) {
    (this->HashDefaultBuffers).HashMask = 0;
    (this->HashDefaultBuffers).IndexSize = 0;
    operator_delete__((this->HashDefaultBuffers).Hash);
    (this->HashDefaultBuffers).Hash = FHashTable::EmptyHash;
    operator_delete__((this->HashDefaultBuffers).NextIndex);
    (this->HashDefaultBuffers).NextIndex = (uint *)0x0;
  }
  if ((this->HashDefaultTextures).IndexSize != 0) {
    (this->HashDefaultTextures).HashMask = 0;
    (this->HashDefaultTextures).IndexSize = 0;
    operator_delete__((this->HashDefaultTextures).Hash);
    (this->HashDefaultTextures).Hash = FHashTable::EmptyHash;
    operator_delete__((this->HashDefaultTextures).NextIndex);
    (this->HashDefaultTextures).NextIndex = (uint *)0x0;
  }
  DestructItems<FDefaultBuffer,int>
            ((FDefaultBuffer *)(this->DefaultBuffers).AllocatorInstance.Data,
             (this->DefaultBuffers).ArrayNum);
  pFVar1 = (this->DefaultBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDefaultTexture,int>
            ((FDefaultTexture *)(this->DefaultTextures).AllocatorInstance.Data,
             (this->DefaultTextures).ArrayNum);
  pFVar1 = (this->DefaultTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SpaceFillingCurve).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->AsciiTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->StencilDummySRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->WhiteDummySRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pIVar2 = (this->ZeroUIntArrayAtomicCompatDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->ZeroUIntArrayDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->ZeroUIntDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CubeArrayBlackDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->CubeBlackDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricBlackUintDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricBlackAlphaOneDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->VolumetricBlackDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->MidGreyDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DefaultNormal8Bit).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GreenDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->BlackDepthCube).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->StencilDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DepthDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->MaxFP16Depth).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SheenLTC).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GGXLTCAmp).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GGXLTCMat).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->HairLUT2).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->HairLUT1).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->HairLUT0).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->PreintegratedGF).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GTAOPreIntegrated).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SSAORandomization).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SobolSampling).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->PerlinNoise3D).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->PerlinNoiseGradient).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->BlackArrayDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->BlackAlphaOneDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->BlackDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->WhiteDummy).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetBlackAlphaOneDummy @ 145707d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetBlackAlphaOneDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->BlackAlphaOneDummy,L"BlackAlphaOneDummy",SkipTracking);
  return pFVar1;
}

// GetBlackArrayDummy @ 145707d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetBlackArrayDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->BlackArrayDummy,L"BlackArrayDummy",SkipTracking);
  return pFVar1;
}

// GetBlackDummy @ 145707d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall FSystemTextures::GetBlackDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->BlackDummy,L"BlackDummy",SkipTracking);
  return pFVar1;
}

// GetCubeArrayBlackDummy @ 145708f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetCubeArrayBlackDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->CubeArrayBlackDummy,L"CubeArrayBlackDummy",SkipTracking);
  return pFVar1;
}

// GetCubeBlackDummy @ 145708f50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetCubeBlackDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->CubeBlackDummy,L"CubeBlackDummy",SkipTracking);
  return pFVar1;
}

// GetDefaultBuffer @ 145709010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer(FSystemTextures *this,FRDGBuilder *param_1,uint param_2)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<unsigned_int>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      (uint *)0x0);
  return pFVar1;
}

// GetDefaultBuffer @ 145709050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,
          TIntVector4<unsigned_int> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TIntVector4<unsigned_int>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      param_3);
  return pFVar1;
}

// GetDefaultBuffer @ 145709090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,TVector4<float> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      param_3);
  return pFVar1;
}

// GetDefaultBuffer @ 1457090d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,TVector<float> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TVector<float>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      param_3);
  return pFVar1;
}

// GetDefaultBuffer @ 145709110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FRDGBuffer *pFVar1;
  uint local_res20 [2];
  
  local_res20[0] = param_3;
  pFVar1 = GetInternalDefaultBuffer<unsigned_int>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      local_res20);
  return pFVar1;
}

// GetDefaultBuffer @ 145709160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,float param_3)

{
  FRDGBuffer *pFVar1;
  float local_res20 [2];
  
  local_res20[0] = param_3;
  pFVar1 = GetInternalDefaultBuffer<float>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,VertexBuffer,
                      local_res20);
  return pFVar1;
}

// GetDefaultByteAddressBuffer @ 1457091b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultByteAddressBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<unsigned_int>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      ByteAddressBuffer,(uint *)0x0);
  return pFVar1;
}

// GetDefaultNormal8Bit @ 1457091f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultNormal8Bit(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->DefaultNormal8Bit,L"DefaultNormal8Bit",SkipTracking);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 145709430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer(FSystemTextures *this,FRDGBuilder *param_1,uint param_2)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<unsigned_int>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,(uint *)0x0);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 145709470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,
          TIntVector4<unsigned_int> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TIntVector4<unsigned_int>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,param_3);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 1457094b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,TVector4<float> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,param_3);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 1457094f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,TVector<float> *param_3)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = GetInternalDefaultBuffer<UE::Math::TVector<float>_>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,param_3);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 145709530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FRDGBuffer *pFVar1;
  uint local_res20 [2];
  
  local_res20[0] = param_3;
  pFVar1 = GetInternalDefaultBuffer<unsigned_int>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,local_res20);
  return pFVar1;
}

// GetDefaultStructuredBuffer @ 145709580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FSystemTextures::GetDefaultStructuredBuffer
          (FSystemTextures *this,FRDGBuilder *param_1,uint param_2,float param_3)

{
  FRDGBuffer *pFVar1;
  float local_res20 [2];
  
  local_res20[0] = param_3;
  pFVar1 = GetInternalDefaultBuffer<float>
                     (param_1,&this->DefaultBuffers,&this->HashDefaultBuffers,param_2,
                      StructuredBuffer,local_res20);
  return pFVar1;
}

// GetDefaultTexture2D @ 1457095d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,
          TIntVector4<unsigned_int> *param_3)

{
  FRDGTexture *pFVar1;
  TIntVector4<unsigned_int>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar1 = GetInternalDefaultTexture<UE::Math::TIntVector4<unsigned_int>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      (TIntVector4<unsigned_int> *)&local_18._s_0);
  return pFVar1;
}

// GetDefaultTexture2D @ 145709620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,TVector4<float> *param_3)

{
  FRDGTexture *pFVar1;
  TVector4<float>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  pFVar1 = GetInternalDefaultTexture<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      (TVector4<float> *)&local_18._s_0);
  return pFVar1;
}

// GetDefaultTexture2D @ 145709670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,TVector<float> *param_3)

{
  FRDGTexture *pFVar1;
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  pFVar1 = GetInternalDefaultTexture<UE::Math::TVector<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      (TVector<float> *)&local_18[0]._s_0);
  return pFVar1;
}

// GetDefaultTexture2D @ 1457096d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,
          FClearValueBinding *param_3)

{
  float fVar1;
  FRDGTexture *pFVar2;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar1 = *(float *)&param_3->Value;
  _local_18 = (param_3->Value).DSValue;
  _fStack_10 = *(undefined8 *)((longlong)&param_3->Value + 8);
  if ((((param_2 == PF_DepthStencil) || (param_2 == PF_ShadowDepth)) || (param_2 == PF_R32_FLOAT))
     || ((param_2 == PF_D24 || (param_2 == PF_X24_G8)))) {
    fStack_14 = fVar1;
    local_18 = fVar1;
    fStack_c = fVar1;
    fStack_10 = fVar1;
  }
  pFVar2 = GetInternalDefaultTexture<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      (TVector4<float> *)&local_18);
  return pFVar2;
}

// GetDefaultTexture2D @ 145709780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,uint param_3)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = GetInternalDefaultTexture<unsigned_int>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      param_3);
  return pFVar1;
}

// GetDefaultTexture2D @ 1457097c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture2D
          (FSystemTextures *this,FRDGBuilder *param_1,EPixelFormat param_2,float param_3)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = GetInternalDefaultTexture<float>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,Texture2D,param_2,
                      param_3);
  return pFVar1;
}

// GetDefaultTexture @ 145709800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,TIntPoint<int> *param_4)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = GetInternalDefaultTexture<UE::Math::TIntPoint<int>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TIntPoint<int>)(param_4->field0_0x0)._s_0);
  return pFVar1;
}

// GetDefaultTexture @ 145709850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,TIntVector4<unsigned_int> *param_4)

{
  FRDGTexture *pFVar1;
  TIntVector4<unsigned_int>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar1 = GetInternalDefaultTexture<UE::Math::TIntVector4<unsigned_int>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TIntVector4<unsigned_int> *)&local_18._s_0);
  return pFVar1;
}

// GetDefaultTexture @ 1457098a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,TVector2<double> *param_4)

{
  FRDGTexture *pFVar1;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  pFVar1 = GetInternalDefaultTexture<UE::Math::TVector2<double>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TVector2<double> *)&local_18._s_0);
  return pFVar1;
}

// GetDefaultTexture @ 1457098f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,TVector4<float> *param_4)

{
  FRDGTexture *pFVar1;
  TVector4<float>_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  pFVar1 = GetInternalDefaultTexture<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TVector4<float> *)&local_18._s_0);
  return pFVar1;
}

// GetDefaultTexture @ 145709940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,TVector<float> *param_4)

{
  FRDGTexture *pFVar1;
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_8_ = *(undefined8 *)&param_4->field0_0x0;
  local_18[0]._8_4_ = (param_4->field0_0x0)._s_0.Z;
  pFVar1 = GetInternalDefaultTexture<UE::Math::TVector<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TVector<float> *)&local_18[0]._s_0);
  return pFVar1;
}

// GetDefaultTexture @ 1457099a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,FClearValueBinding *param_4)

{
  float fVar1;
  FRDGTexture *pFVar2;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar1 = *(float *)&param_4->Value;
  _local_18 = (param_4->Value).DSValue;
  _fStack_10 = *(undefined8 *)((longlong)&param_4->Value + 8);
  if ((((param_3 == PF_DepthStencil) || (param_3 == PF_ShadowDepth)) || (param_3 == PF_R32_FLOAT))
     || ((param_3 == PF_D24 || (param_3 == PF_X24_G8)))) {
    fStack_14 = fVar1;
    local_18 = fVar1;
    fStack_c = fVar1;
    fStack_10 = fVar1;
  }
  pFVar2 = GetInternalDefaultTexture<UE::Math::TVector4<float>_>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      (TVector4<float> *)&local_18);
  return pFVar2;
}

// GetDefaultTexture @ 145709a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,uint param_4)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = GetInternalDefaultTexture<unsigned_int>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      param_4);
  return pFVar1;
}

// GetDefaultTexture @ 145709aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetDefaultTexture
          (FSystemTextures *this,FRDGBuilder *param_1,ETextureDimension param_2,EPixelFormat param_3
          ,float param_4)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = GetInternalDefaultTexture<float>
                     (param_1,&this->DefaultTextures,&this->HashDefaultTextures,param_2,param_3,
                      param_4);
  return pFVar1;
}

// GetDepthDummy @ 145709af0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall FSystemTextures::GetDepthDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->DepthDummy,L"DepthDummy",SkipTracking);
  return pFVar1;
}

// GetGreenDummy @ 145709e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall FSystemTextures::GetGreenDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->GreenDummy,L"GreenDummy",SkipTracking);
  return pFVar1;
}

// GetMaxFP16Depth @ 14570a2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetMaxFP16Depth(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->MaxFP16Depth,L"MaxFP16Depth",SkipTracking);
  return pFVar1;
}

// GetMidGreyDummy @ 14570a300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetMidGreyDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->MidGreyDummy,L"MidGreyDummy",SkipTracking);
  return pFVar1;
}

// GetSpaceFillingCurveTexture @ 14570a630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetSpaceFillingCurveTexture(FSystemTextures *this,FRDGBuilder *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHITexture *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FRHITextureCreateDesc *pFVar7;
  ulonglong uVar8;
  FRDGTexture *pFVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8 [8];
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  FLLMScope local_1c0;
  FLLMScope local_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  FMemScope local_1a8;
  FMemScope local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  FRHITexture *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined2 local_16c;
  longlong local_168 [2];
  uint local_158;
  FRHITextureDesc local_148;
  wchar_t *local_f8;
  ERHIAccess local_f0;
  ERHITextureInitAction local_ec;
  FResourceBulkDataInterface *local_e8;
  FName local_e0;
  FName local_d8;
  FRHITextureCreateDesc local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pTVar1 = &this->SpaceFillingCurve;
  if (pTVar1->Reference == (IPooledRenderTarget *)0x0) {
    pFVar7 = FRHITextureCreateDesc::Create2D(&local_c8,L"SpaceFillingCurve",0x100,0x100,PF_R16_UINT)
    ;
    pFVar7->_padding_ = 8;
    FRHITextureDesc::FRHITextureDesc(&local_148,(FRHITextureDesc *)pFVar7);
    local_f8 = pFVar7->DebugName;
    local_f0 = pFVar7->InitialState;
    local_ec = pFVar7->InitAction;
    local_e8 = pFVar7->BulkData;
    local_e0 = pFVar7->ClassName;
    local_d8 = pFVar7->OwnerName;
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    uVar14 = 0;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x10000,&local_1d0,0,(int *)((longlong)&local_1c8 + 4));
    uVar13 = uVar14;
    do {
      uVar19 = (uint)uVar13;
      uVar8 = uVar14;
      do {
        uVar18 = 0xff;
        uVar12 = (uint)uVar8;
        uVar17 = (ulonglong)(0xff - uVar12);
        if (uVar12 <= uVar19) {
          uVar17 = uVar8;
        }
        uVar8 = (ulonglong)(0xff - uVar19);
        if (uVar12 <= uVar19) {
          uVar8 = uVar13;
        }
        local_1b0 = (uint)(uVar19 < uVar12);
        do {
          iVar6 = (int)uVar8;
          iVar11 = (int)uVar17;
          uVar15 = iVar6 + iVar11;
          iVar10 = iVar11;
          if (uVar15 < 0x100) {
            iVar10 = iVar6;
          }
          iVar6 = 0xff - iVar6;
          if (uVar15 < 0x100) {
            iVar6 = iVar11;
          }
          uVar5 = iVar10 * 2;
          uVar16 = iVar6 * 2;
          iVar11 = local_1b0 * 2 + 1;
          if (uVar15 < 0x100) {
            iVar11 = local_1b0 * 2;
          }
          local_1b0 = iVar11 * 2;
          if (0xff < uVar5) {
            local_1b0 = local_1b0 + 1;
            uVar16 = uVar5 - 0xff;
            uVar5 = iVar6 * -2 + 0xff;
          }
          uVar17 = (ulonglong)uVar16;
          uVar8 = (ulonglong)uVar5;
          uVar18 = uVar18 >> 1;
        } while (uVar18 != 0);
        local_1b8 = uVar12;
        uStack_1b4 = uVar19;
        if (((local_1d0.Data <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 <
             local_1d0.Data + (longlong)local_1c8._4_4_ * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FRDGTexture *)(*pcVar3)();
          return pFVar9;
        }
        iVar6 = (int)local_1c8;
        if ((int)local_1c8 == local_1c8._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_1d0,(int *)((longlong)&local_1c8 + 4));
        }
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar6 + 1);
        uVar8 = (ulonglong)(uVar12 + 1);
        *(ulonglong *)(local_1d0.Data + (longlong)iVar6 * 0xc) = CONCAT44(uStack_1b4,local_1b8);
        *(uint *)(local_1d0.Data + (longlong)iVar6 * 0xc + 8) = local_1b0;
      } while ((int)(uVar12 + 1) < 0x100);
      uVar13 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < 0x100);
    AlgoImpl::
    IntroSortInternal<UE::Math::TIntVector3<int>,int,FIdentityFunctor,TDereferenceWrapper<UE::Math::TIntVector3<int>,_FSystemTextures::GetSpaceFillingCurveTexture_::__l5::<lambda_1>_>_>
              ((TIntVector3<int> *)local_1d0.Data,iVar6 + 1,local_1d8[0],(<lambda_1> *)local_1d8);
    FRenderTargetPool::FindFreeElement
              ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_1->_padding_,
               &local_148,pTVar1,local_f8);
    if ((pTVar1->Reference == (IPooledRenderTarget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SpaceFillingCurve.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
                           ,0x4a4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FRDGTexture *)(*pcVar3)();
      return pFVar9;
    }
    pFVar2 = (pTVar1->Reference->RenderTargetItem).TargetableTexture.Reference;
    FLLMScope::FLLMScope(&local_1bc,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_1a0,Textures,true);
    local_180 = 0;
    local_170 = 1;
    local_178 = 0;
    local_16c = 0x100;
    local_188 = pFVar2;
    FLLMScope::FLLMScope(&local_1c0,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_1a8,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_168);
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(&local_1c0);
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(&local_1bc);
    uVar13 = uVar14;
    do {
      if (((int)local_1c8 <= (int)uVar13) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FRDGTexture *)(*pcVar3)();
        return pFVar9;
      }
      local_198 = *(undefined8 *)(local_1d0.Data + uVar14);
      local_190 = *(undefined4 *)(local_1d0.Data + uVar14 + 8);
      uVar14 = uVar14 + 0xc;
      *(short *)(local_168[0] +
                (ulonglong)((int)((ulonglong)local_198 >> 0x20) * (local_158 >> 1) + (int)local_198)
                * 2) = (short)uVar13;
      uVar19 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar19;
    } while ((int)uVar19 < 0x10000);
    FRHICommandListImmediate::UnlockTexture2D
              ((FRHICommandListImmediate *)param_1->_padding_,
               (pTVar1->Reference->RenderTargetItem).TargetableTexture.Reference,0,false,true);
    if (local_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
    if (local_148.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_148.AliasableFormats.AllocatorInstance.SecondaryData);
    }
  }
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     (param_1,(TRefCountPtr<IPooledRenderTarget> *)&GSystemTextures.field_0x130,
                      L"SpaceFillingCurve",SkipTracking);
  return pFVar9;
}

// GetStencilDummy @ 14570dd60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetStencilDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->StencilDummy,L"StencilDummy",SkipTracking);
  return pFVar1;
}

// GetVolumetricBlackDummy @ 145710530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetVolumetricBlackDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->VolumetricBlackDummy,L"VolumetricBlackDummy",SkipTracking);
  return pFVar1;
}

// GetVolumetricBlackUintDummy @ 145710560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetVolumetricBlackUintDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->VolumetricBlackUintDummy,L"VolumetricBlackUintDummy",
                      SkipTracking);
  return pFVar1;
}

// GetWhiteDummy @ 1457105b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall FSystemTextures::GetWhiteDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->WhiteDummy,L"WhiteDummy",SkipTracking);
  return pFVar1;
}

// GetZeroUIntArrayAtomicCompatDummy @ 145710610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetZeroUIntArrayAtomicCompatDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->ZeroUIntArrayAtomicCompatDummy,
                      L"ZeroUIntArrayAtomicCompatDummy",SkipTracking);
  return pFVar1;
}

// GetZeroUIntArrayDummy @ 145710640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetZeroUIntArrayDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->ZeroUIntArrayDummy,L"ZeroUIntArrayDummy",SkipTracking);
  return pFVar1;
}

// GetZeroUIntDummy @ 145710670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FSystemTextures::GetZeroUIntDummy(FSystemTextures *this,FRDGBuilder *param_1)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture
                     (param_1,&this->ZeroUIntDummy,L"ZeroUIntDummy",SkipTracking);
  return pFVar1;
}

// InitializeCommonTextures @ 1457122b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSystemTextures::InitializeCommonTextures(FSystemTextures *this,FRHICommandListImmediate *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  IPooledRenderTarget *pIVar3;
  FRHIShaderResourceView *pFVar4;
  IPooledRenderTarget *pIVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FRHITextureCreateDesc *pFVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  TRefCountPtr<IPooledRenderTarget> *pTVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auStackY_d58 [32];
  undefined4 local_d04;
  undefined4 local_d00 [2];
  FRHITexture *local_cf8;
  FRHIResource *local_cf0;
  FRHIResource *local_ce8;
  FRHIResource *local_ce0;
  FRHIResource *local_cd8;
  FRHIResource *local_cd0;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  FRHIResource *local_cc0;
  FRHIResource *local_cb8;
  FRHIResource *local_cb0;
  FRHIResource *local_ca8;
  FRHIResource *local_ca0;
  undefined8 local_c98;
  undefined4 local_c90;
  undefined1 local_c88 [16];
  undefined1 local_c78 [16];
  FName local_c68;
  undefined1 local_c60 [24];
  longlong local_c48;
  undefined1 local_c40 [16];
  FName local_c30;
  undefined1 local_c28 [16];
  undefined1 local_c18 [16];
  undefined1 local_c08 [16];
  undefined1 local_bf8 [16];
  undefined1 local_be8 [16];
  undefined1 local_bd8 [16];
  FName local_bc8;
  FResourceBulkDataInterface local_bc0;
  FColor *local_bb8;
  longlong local_bb0;
  FResourceBulkDataInterface local_ba8;
  undefined4 *local_ba0;
  undefined4 local_b98;
  FResourceBulkDataInterface local_b90 [3];
  FInitializer local_b78;
  ForElementType<EPixelFormat> local_b68;
  ETextureCreateFlags EStack_b60;
  undefined1 local_b58 [32];
  undefined1 local_b38 [44];
  undefined1 local_b0c [12];
  TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_b00;
  undefined8 local_ae8;
  undefined4 local_ae0;
  FRHIGPUMask local_adc;
  FLastRenderTimeContainer local_ad8;
  FName local_ad0;
  FName local_ac8;
  undefined1 local_ab8 [64];
  void *local_a78;
  wchar_t *local_a68;
  ERHIAccess local_a60;
  ERHITextureInitAction local_a5c;
  FResourceBulkDataInterface *local_a58;
  FName local_a50;
  FName local_a48;
  undefined1 local_a38 [64];
  void *local_9f8;
  wchar_t *local_9e8;
  ERHIAccess local_9e0;
  ERHITextureInitAction local_9dc;
  FResourceBulkDataInterface *local_9d8;
  FName local_9d0;
  FName local_9c8;
  FRHITextureDesc local_9b8;
  wchar_t *local_968;
  undefined4 local_960;
  undefined4 local_95c;
  undefined8 local_958;
  longlong local_950;
  undefined8 local_948;
  FRHITextureCreateDesc local_938;
  FRHITextureCreateDesc local_8b8;
  FRHITextureCreateDesc local_838;
  FRHITextureCreateDesc local_7b8;
  FRHITextureCreateDesc local_738;
  FRHITextureCreateDesc local_6b8;
  FRHITextureCreateDesc local_638;
  FRHITextureDesc local_5b8;
  wchar_t *local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined1 local_538 [32];
  float local_518;
  TIntPoint<int>_u_0 local_514;
  ushort local_50c;
  ushort local_50a;
  uchar local_508;
  uchar local_507;
  ETextureDimension local_506;
  EPixelFormat local_505;
  EPixelFormat local_504;
  uchar local_503;
  undefined1 local_500 [8];
  void *local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  wchar_t *local_4e8;
  ERHIAccess local_4e0;
  ERHITextureInitAction local_4dc;
  FResourceBulkDataInterface *local_4d8;
  FName local_4d0;
  FName local_4c8;
  FRHITextureCreateDesc local_4b8;
  FRHITextureCreateDesc local_438;
  FRHITextureDesc local_3b8;
  wchar_t *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  undefined1 local_338 [48];
  code *local_308;
  longlong local_2f8 [3];
  longlong *local_2e0;
  FRHICommandListBase *local_2d8;
  FRHITexture *local_2d0;
  undefined1 local_2a8 [48];
  longlong local_278;
  longlong local_268 [3];
  longlong *local_250;
  FRHICommandListBase *local_248;
  FRHITexture *local_240;
  undefined1 local_218 [48];
  longlong local_1e8;
  longlong local_1d8 [3];
  longlong *local_1c0;
  FRHICommandListBase *local_1b8;
  FRHITexture *local_1b0;
  undefined1 local_188 [48];
  longlong local_158;
  longlong local_148 [3];
  longlong *local_130;
  FRHICommandListBase *local_128;
  FRHITexture *local_120;
  FRHITextureCreateDesc local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_d58;
  TVar8 = CreateRenderTarget((FRHITexture *)local_c88,
                             (wchar_t *)(GWhiteTexture->TextureRHI).Reference);
  pTVar16 = &this->WhiteDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c88._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c88._0_8_ + 0x38))();
  }
  EStack_b60 = None;
  local_b68 = (ForElementType<EPixelFormat>)0x2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture
            ((FInitializer *)&local_b68,
             (pTVar16->Reference->RenderTargetItem).TargetableTexture.Reference);
  TVar9 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHITexture *)(local_c88 + 8),
                     (FInitializer *)
                     (pTVar16->Reference->RenderTargetItem).TargetableTexture.Reference);
  pTVar2 = &this->WhiteDummySRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar9.Reference) {
    pFVar4 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_c88._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c88._8_8_);
  }
  FRHITextureCreateDesc::Create2D(&local_838,L"BlackDummy",1,1,PF_B8G8R8A8);
  CreateDummyTexture<FColor>
            ((FRHICommandListImmediate *)&local_cf0,(FRHITextureCreateDesc *)param_1,
             (FColor *)&local_838);
  TVar8 = CreateRenderTarget((FRHITexture *)local_c78,(wchar_t *)local_cf0);
  pTVar16 = &this->BlackDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c78._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c78._0_8_ + 0x38))();
  }
  if (local_cf0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cf0);
  }
  if ((void *)local_838._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_838._padding_);
  }
  FRHITextureCreateDesc::Create2DArray(&local_8b8,L"BlackArrayDummy",1,1,1,PF_B8G8R8A8);
  CreateDummyTexture<FColor>
            ((FRHICommandListImmediate *)&local_ce8,(FRHITextureCreateDesc *)param_1,
             (FColor *)&local_8b8);
  TVar8 = CreateRenderTarget((FRHITexture *)(local_c78 + 8),(wchar_t *)local_ce8);
  pTVar1 = &this->BlackArrayDummy;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c78._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c78._8_8_ + 0x38))();
  }
  if (local_ce8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_ce8);
  }
  if ((void *)local_8b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_8b8._padding_);
  }
  FRHITextureCreateDesc::Create2D
            ((FRHITextureCreateDesc *)local_b38,L"ZeroUIntDummy",1,1,PF_R32_UINT);
  local_ba0 = &local_d04;
  local_d04 = 0;
  local_506 = local_b0c[6];
  local_538._0_8_ = local_b38._0_8_;
  local_505 = local_b0c[7];
  local_504 = local_b0c[8];
  local_514 = (TIntPoint<int>_u_0)local_b38._36_8_;
  local_50c = local_b0c._0_2_;
  local_50a = local_b0c._2_2_;
  local_508 = local_b0c[4];
  local_507 = local_b0c[5];
  local_538._24_4_ = local_b38._24_4_;
  local_518 = (float)local_b38._32_4_;
  local_503 = local_b0c[9];
  local_538._28_4_ = local_b38._28_4_;
  local_ba8 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
  local_b98 = 5.60519e-45;
  local_4f8 = (void *)0x0;
  local_4f0 = 0;
  local_4ec = 1;
  local_538._8_8_ = local_b38._8_8_;
  local_538._16_8_ = local_b38._16_8_;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (local_500,&local_b00);
  local_538._0_8_ = local_538._0_8_ | 8;
  local_4e8 = (wchar_t *)local_ae8;
  local_4e0 = local_ae0;
  local_4dc = local_adc.GPUMask;
  local_4d8 = (FResourceBulkDataInterface *)local_ad8.LastRenderTime;
  local_4d0 = local_ad0;
  local_4c8 = local_ac8;
  FLazyName::Resolve(&SystemTexturesName);
  local_4d0 = local_c68;
  local_4d8 = &local_ba8;
  local_4dc = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_2a8,
             (FRHITextureCreateDesc *)local_538);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_2a8);
  if ((local_248 != (FRHICommandListBase *)0x0) && (local_240 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_2a8);
  }
  if (local_278 != 0) {
    plVar12 = local_268;
    if (local_250 != (longlong *)0x0) {
      plVar12 = local_250;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_2a8._0_8_ != 0) {
    plVar12 = (longlong *)(local_2a8 + 0x10);
    if ((longlong *)local_2a8._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_2a8._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_4f8 != (void *)0x0) {
    FMemory::Free(local_4f8);
  }
  local_ba8 = (FResourceBulkDataInterface)&___7FResourceBulkDataInterface__6B_;
  TVar8 = CreateRenderTarget((FRHITexture *)local_c60,(wchar_t *)local_ce0);
  pTVar1 = &this->ZeroUIntDummy;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c60._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c60._0_8_ + 0x38))();
  }
  if (local_ce0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_ce0);
  }
  if (local_b00.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_b00.AllocatorInstance.SecondaryData);
  }
  FRHITextureCreateDesc::Create2DArray
            ((FRHITextureCreateDesc *)local_ab8,L"ZeroUIntArrayDummy",1,1,1,PF_R32_UINT);
  local_b90[1] = (FResourceBulkDataInterface)local_d00;
  local_d00[0] = 0;
  local_438._padding_._2_1_ = local_ab8[0x32];
  local_438._padding_ = local_ab8._0_8_;
  local_438._padding_._3_1_ = local_ab8[0x33];
  local_438._padding_._4_1_ = local_ab8[0x34];
  local_438._36_8_ = local_ab8._36_8_;
  local_438._padding_._4_2_ = local_ab8._44_2_;
  local_438._padding_._6_2_ = local_ab8._46_2_;
  local_438._padding_._0_1_ = local_ab8[0x30];
  local_438._padding_._1_1_ = local_ab8[0x31];
  local_438._padding_._0_4_ = local_ab8._24_4_;
  local_438._padding_._0_4_ = local_ab8._32_4_;
  local_438._padding_._5_1_ = local_ab8[0x35];
  local_438._padding_._4_4_ = local_ab8._28_4_;
  local_b90[0] = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
  local_b90[2]._0_4_ = 4;
  local_438._padding_ = 0;
  local_438._padding_._0_4_ = 0;
  local_438._padding_._4_4_ = 1;
  local_438._padding_ = local_ab8._8_8_;
  local_438._padding_ = local_ab8._16_8_;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&local_438._padding_,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             (local_ab8 + 0x38));
  local_438._padding_ = local_438._padding_ | 8;
  local_438.DebugName = local_a68;
  local_438.InitialState = local_a60;
  local_438.InitAction = local_a5c;
  local_438.BulkData = local_a58;
  local_438.ClassName = local_a50;
  local_438.OwnerName = local_a48;
  FLazyName::Resolve(&SystemTexturesName);
  local_438.ClassName.ComparisonIndex.Value = local_c60._8_4_;
  local_438.ClassName.Number = local_c60._12_4_;
  local_438.BulkData = local_b90;
  local_438.InitAction = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_218,&local_438);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_218);
  if ((local_1b8 != (FRHICommandListBase *)0x0) && (local_1b0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_218);
  }
  if (local_1e8 != 0) {
    plVar12 = local_1d8;
    if (local_1c0 != (longlong *)0x0) {
      plVar12 = local_1c0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_218._0_8_ != 0) {
    plVar12 = (longlong *)(local_218 + 0x10);
    if ((longlong *)local_218._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_218._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((void *)local_438._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_438._padding_);
  }
  local_b90[0] = (FResourceBulkDataInterface)&___7FResourceBulkDataInterface__6B_;
  TVar8 = CreateRenderTarget((FRHITexture *)(local_c18 + 8),(wchar_t *)local_cd8);
  pTVar1 = &this->ZeroUIntArrayDummy;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c18._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c18._8_8_ + 0x38))();
  }
  if (local_cd8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cd8);
  }
  if (local_a78 != (void *)0x0) {
    FMemory::Free(local_a78);
  }
  FRHITextureCreateDesc::Create2D(&local_7b8,L"BlackAlphaOneDummy",1,1,PF_B8G8R8A8);
  CreateDummyTexture<FColor>
            ((FRHICommandListImmediate *)&local_cd0,(FRHITextureCreateDesc *)param_1,
             (FColor *)&local_7b8);
  TVar8 = CreateRenderTarget((FRHITexture *)(local_c60 + 0x10),(wchar_t *)local_cd0);
  pTVar1 = &this->BlackAlphaOneDummy;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c60._16_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c60._16_8_ + 0x38))();
  }
  if (local_cd0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cd0);
  }
  if ((void *)local_7b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_7b8._padding_);
  }
  local_cc8 = 1;
  local_5b8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  uStack_cc4 = 1;
  local_568 = L"GreenDummy";
  local_5b8.Extent.field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
  local_5b8.Flags = None;
  local_5b8.ClearValue._0_8_ = 1;
  local_5b8.ClearValue.Value._4_8_ = 0;
  local_5b8.ClearValue.Value.Color[3] = 0.0;
  local_5b8.ExtData = 0;
  local_5b8.Depth = 1;
  local_5b8.ArraySize = 1;
  local_5b8.NumMips = '\x01';
  local_5b8.NumSamples = '\x01';
  local_5b8.Dimension = Texture2DArray;
  local_5b8.Format = PF_B8G8R8A8;
  local_5b8.UAVFormat = PF_Unknown;
  local_5b8.FastVRAMPercentage = 0xff;
  local_5b8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_5b8.AliasableFormats.ArrayNum = 0;
  local_5b8.AliasableFormats.ArrayMax = 1;
  local_560 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  FRHITextureDesc::FRHITextureDesc(&local_3b8,&local_5b8);
  local_368 = local_568;
  local_360 = (undefined4)local_560;
  local_35c = local_560._4_4_;
  local_358 = local_558;
  local_350 = local_550;
  local_348 = local_548;
  if (local_5b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_5b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_3b8.Flags = ShaderResource;
  FLazyName::Resolve(&SystemTexturesName);
  local_350 = local_c48;
  FRHITextureDesc::FRHITextureDesc(&local_9b8,&local_3b8);
  local_968 = local_368;
  local_960 = local_360;
  local_95c = local_35c;
  local_958 = local_358;
  local_950 = local_350;
  local_948 = local_348;
  if (local_3b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_3b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  CreateDummyTexture<FColor>
            ((FRHICommandListImmediate *)&local_cc0,(FRHITextureCreateDesc *)param_1,
             (FColor *)&local_9b8);
  TVar8 = CreateRenderTarget((FRHITexture *)local_c40,(wchar_t *)local_cc0);
  pTVar1 = &this->GreenDummy;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c40._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c40._0_8_ + 0x38))();
  }
  if (local_cc0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cc0);
  }
  if (local_9b8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_9b8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHITextureCreateDesc::Create2D(&local_738,L"DefaultNormal8Bit",1,1,PF_B8G8R8A8);
  CreateDummyTexture<FColor>
            ((FRHICommandListImmediate *)&local_cb8,(FRHITextureCreateDesc *)param_1,
             (FColor *)&local_738);
  TVar8 = CreateRenderTarget((FRHITexture *)(local_c40 + 8),(wchar_t *)local_cb8);
  pTVar1 = &this->DefaultNormal8Bit;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c40._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c40._8_8_ + 0x38))();
  }
  if (local_cb8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cb8);
  }
  if ((void *)local_738._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_738._padding_);
  }
  lVar19 = 0x80;
  pFVar10 = FRHITextureCreateDesc::Create2D(&local_f8,L"PerlinNoiseGradient",0x80,0x80,PF_B8G8R8A8);
  pFVar10->_padding_ = 8;
  FLazyName::Resolve(&SystemTexturesName);
  pFVar10->ClassName = local_c30;
  pFVar10->InitAction = Initializer;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_938,(FRHITextureDesc *)pFVar10);
  local_938.DebugName = pFVar10->DebugName;
  local_938.InitialState = pFVar10->InitialState;
  local_938.InitAction = pFVar10->InitAction;
  local_938.BulkData = pFVar10->BulkData;
  local_938.ClassName = pFVar10->ClassName;
  local_938.OwnerName = pFVar10->OwnerName;
  if ((void *)local_f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_338,&local_938);
  if (local_308 == (code *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSubresourceCallback",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                       ,0x56,
                       L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_c98 = 0;
  local_c90 = 0;
  UE::Core::Private::Function::CheckCallable(local_308);
  pcVar6 = local_308;
  plVar12 = local_2f8;
  if (local_2e0 != (longlong *)0x0) {
    plVar12 = local_2e0;
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  plVar12 = (longlong *)(*pcVar6)(local_b58,uVar11,&local_c98);
  fVar26 = __real_41400000;
  fVar24 = __real_3f800000;
  uVar13 = 0x3039;
  local_bb0 = plVar12[2];
  puVar15 = (uint *)(*plVar12 + 8);
  do {
    lVar18 = 8;
    puVar17 = puVar15;
    do {
      uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[-2] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                              0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[-1] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                              0xffffffff];
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      *puVar17 = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                           0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[1] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[2] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[3] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      puVar17[4] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[5] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[6] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[7] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[8] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[9] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                             0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[10] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                              0xffffffff];
      uVar14 = uVar13 * 0xbb38435 + 0x3619636b;
      puVar17[0xb] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                               0xffffffff];
      uVar13 = uVar14 * 0xbb38435 + 0x3619636b;
      puVar17[0xc] = gradtable[(longlong)(((float)(uVar14 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                               0xffffffff];
      puVar17[0xd] = gradtable[(longlong)(((float)(uVar13 >> 9 | 0x3f800000) - fVar24) * fVar26) &
                               0xffffffff];
      puVar17 = puVar17 + 0x10;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    puVar15 = (uint *)((longlong)puVar15 + local_bb0);
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_338);
  TVar8 = CreateRenderTarget((FRHITexture *)local_c28,(wchar_t *)local_cb0);
  pTVar1 = &this->PerlinNoiseGradient;
  if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
    pIVar3 = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c28._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c28._0_8_ + 0x38))();
  }
  if (local_cb0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_cb0);
  }
  if ((local_2d8 != (FRHICommandListBase *)0x0) && (local_2d0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_338);
  }
  if (local_308 != (code *)0x0) {
    plVar12 = local_2f8;
    if (local_2e0 != (longlong *)0x0) {
      plVar12 = local_2e0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_338._0_8_ != 0) {
    plVar12 = (longlong *)(local_338 + 0x10);
    if ((longlong *)local_338._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_338._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((void *)local_938._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_938._padding_);
  }
  if (ZPULL(GPixelFormats[10],0,1) != 0) {
    FRHITextureCreateDesc::Create2D(&local_6b8,L"MaxFP16Depth",1,1,PF_FloatRGBA);
    fVar24 = (float)(~__xmm_80000000800000008000000080000000 &
                    ___xmm_477fdc00477fdc00477fdc00477fdc00);
    fVar26 = (float)(~_UNK_150651574 & _UNK_151003224);
    fVar27 = (float)(~_UNK_150651578 & _UNK_151003228);
    fVar28 = (float)(~_UNK_15065157c & _UNK_15100322c);
    auVar23._0_4_ =
         (int)(___xmm_477fdc00477fdc00477fdc00477fdc00 & __xmm_80000000800000008000000080000000) >>
         0x10;
    auVar23._4_4_ = (int)(_UNK_151003224 & _UNK_150651574) >> 0x10;
    auVar23._8_4_ = (int)(_UNK_151003228 & _UNK_150651578) >> 0x10;
    auVar23._12_4_ = (int)(_UNK_15100322c & _UNK_15065157c) >> 0x10;
    auVar22._0_4_ =
         (~-(uint)((int)fVar24 < ___xmm_38800000388000003880000038800000) &
          (uint)((___xmm_c8000fffc8000fffc8000fffc8000fff + (int)fVar24) -
                (((int)fVar24 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar24 + ___xmm_3f0000003f0000003f0000003f000000) -
         (int)___xmm_3f0000003f0000003f0000003f000000 &
         -(uint)((int)fVar24 < ___xmm_38800000388000003880000038800000)) &
         -(uint)((int)fVar24 < ___xmm_47800000478000004780000047800000);
    auVar22._4_4_ =
         (~-(uint)((int)fVar26 < _UNK_1508be4b4) &
          (uint)((_UNK_1508be504 + (int)fVar26) - (((int)fVar26 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar26 + _UNK_150689624) - (int)_UNK_150689624 &
         -(uint)((int)fVar26 < _UNK_1508be4b4)) & -(uint)((int)fVar26 < _UNK_1508be4e4);
    auVar22._8_4_ =
         (~-(uint)((int)fVar27 < _UNK_1508be4b8) &
          (uint)((_UNK_1508be508 + (int)fVar27) - (((int)fVar27 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar27 + _UNK_150689628) - (int)_UNK_150689628 &
         -(uint)((int)fVar27 < _UNK_1508be4b8)) & -(uint)((int)fVar27 < _UNK_1508be4e8);
    auVar22._12_4_ =
         (~-(uint)((int)fVar28 < _UNK_1508be4bc) &
          (uint)((_UNK_1508be50c + (int)fVar28) - (((int)fVar28 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar28 + _UNK_15068962c) - (int)_UNK_15068962c &
         -(uint)((int)fVar28 < _UNK_1508be4bc)) & -(uint)((int)fVar28 < _UNK_1508be4ec);
    auVar29._0_4_ =
         ~-(uint)((int)fVar24 < ___xmm_47800000478000004780000047800000) &
         (((uint)fVar24 >> 0xd & ___xmm_000001ff000001ff000001ff000001ff |
          ___xmm_00000200000002000000020000000200) & -(uint)NAN(fVar24) |
         ___xmm_00007c0000007c0000007c0000007c00);
    auVar29._4_4_ =
         ~-(uint)((int)fVar26 < _UNK_1508be4e4) &
         (((uint)fVar26 >> 0xd & _UNK_1508be474 | _UNK_1508be484) & -(uint)NAN(fVar26) |
         _UNK_150689594);
    auVar29._8_4_ =
         ~-(uint)((int)fVar27 < _UNK_1508be4e8) &
         (((uint)fVar27 >> 0xd & _UNK_1508be478 | _UNK_1508be488) & -(uint)NAN(fVar27) |
         _UNK_150689598);
    auVar29._12_4_ =
         ~-(uint)((int)fVar28 < _UNK_1508be4ec) &
         (((uint)fVar28 >> 0xd & _UNK_1508be47c | _UNK_1508be48c) & -(uint)NAN(fVar28) |
         _UNK_15068959c);
    auVar23 = auVar22 | auVar29 | auVar23;
    packssdw(auVar23,auVar23);
    CreateDummyTexture<FFloat16Color>
              ((FRHICommandListImmediate *)&local_ca8,(FRHITextureCreateDesc *)param_1,
               (FFloat16Color *)&local_6b8);
    TVar8 = CreateRenderTarget((FRHITexture *)(local_c28 + 8),(wchar_t *)local_ca8);
    pTVar1 = &this->MaxFP16Depth;
    if ((IPooledRenderTarget *)pTVar1 != TVar8.Reference) {
      pIVar3 = pTVar1->Reference;
      pTVar1->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pIVar3 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x38))();
      }
    }
    if ((longlong *)local_c28._8_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_c28._8_8_ + 0x38))();
    }
    if (local_ca8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_ca8);
    }
    if ((void *)local_6b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_6b8._padding_);
    }
  }
  pIVar3 = pTVar16->Reference;
  pIVar5 = (this->DepthDummy).Reference;
  if (pIVar5 != pIVar3) {
    (this->DepthDummy).Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5);
    }
  }
  TVar8 = CreateRenderTarget((FRHITexture *)local_c18,
                             (wchar_t *)(GBlackTextureDepthCube->TextureRHI).Reference);
  pTVar16 = &this->BlackDepthCube;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c18._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c18._0_8_ + 0x38))();
  }
  FRHITextureCreateDesc::Create2D
            ((FRHITextureCreateDesc *)local_a38,L"StencilDummy",1,1,PF_R8G8B8A8_UINT);
  local_bb0 = CONCAT44(local_bb0._4_4_,4);
  local_bc0 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
  local_4b8._padding_ = 0;
  local_bb8 = &FColor::White;
  local_4b8._padding_._2_1_ = local_a38[0x32];
  local_4b8._padding_ = local_a38._0_8_;
  local_4b8._padding_._3_1_ = local_a38[0x33];
  local_4b8._padding_._4_1_ = local_a38[0x34];
  local_4b8._36_8_ = local_a38._36_8_;
  local_4b8._padding_._4_2_ = local_a38._44_2_;
  local_4b8._padding_._6_2_ = local_a38._46_2_;
  local_4b8._padding_._0_1_ = local_a38[0x30];
  local_4b8._padding_._1_1_ = local_a38[0x31];
  local_4b8._padding_._0_4_ = local_a38._24_4_;
  local_4b8._padding_._0_4_ = local_a38._32_4_;
  local_4b8._padding_._5_1_ = local_a38[0x35];
  local_4b8._padding_._4_4_ = local_a38._28_4_;
  local_4b8._padding_._0_4_ = 0;
  local_4b8._padding_._4_4_ = 1;
  local_4b8._padding_ = local_a38._8_8_;
  local_4b8._padding_ = local_a38._16_8_;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&local_4b8._padding_,
             (TArray<EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
             (local_a38 + 0x38));
  local_4b8._padding_ = local_4b8._padding_ | 8;
  local_4b8.DebugName = local_9e8;
  local_4b8.InitialState = local_9e0;
  local_4b8.InitAction = local_9dc;
  local_4b8.BulkData = local_9d8;
  local_4b8.ClassName = local_9d0;
  local_4b8.OwnerName = local_9c8;
  FLazyName::Resolve(&SystemTexturesName);
  local_4b8.ClassName = local_bc8;
  local_4b8.BulkData = &local_bc0;
  local_4b8.InitAction = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_188,&local_4b8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_188);
  if ((local_128 != (FRHICommandListBase *)0x0) && (local_120 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_188);
  }
  if (local_158 != 0) {
    plVar12 = local_148;
    if (local_130 != (longlong *)0x0) {
      plVar12 = local_130;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_188._0_8_ != 0) {
    plVar12 = (longlong *)(local_188 + 0x10);
    if ((longlong *)local_188._40_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_188._40_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((void *)local_4b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_4b8._padding_);
  }
  TVar8 = CreateRenderTarget((FRHITexture *)local_c08,(wchar_t *)local_cf8);
  pTVar16 = &this->StencilDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_c08._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_c08._0_8_ + 0x38))();
  }
  local_b78._8_1_ = '\0';
  local_b78._9_3_ = 0;
  local_b78._12_4_ = 0;
  local_b78._0_8_ = 2;
  FRHIViewDesc::FTextureSRV::FInitializer::SetDimensionFromTexture(&local_b78,local_cf8);
  TVar9 = FRHICommandListBase::CreateShaderResourceView
                    ((FRHICommandListBase *)param_1,(FRHITexture *)(local_c08 + 8),
                     (FInitializer *)
                     (pTVar16->Reference->RenderTargetItem).TargetableTexture.Reference);
  pTVar2 = &this->StencilDummySRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar9.Reference) {
    pFVar4 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((FRHIResource *)local_c08._8_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c08._8_8_);
  }
  if (local_cf8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_cf8);
  }
  if (local_9f8 != (void *)0x0) {
    FMemory::Free(local_9f8);
  }
  if (ZPULL(GPixelFormats[10],0,1) != 0) {
    FRHITextureCreateDesc::Create2D(&local_638,L"MidGreyDummy",1,1,PF_FloatRGBA);
    fVar24 = (float)(~__xmm_80000000800000008000000080000000 &
                    (uint)___xmm_3f0000003f0000003f0000003f000000);
    fVar26 = (float)(~_UNK_150651574 & (uint)_UNK_150689624);
    fVar27 = (float)(~_UNK_150651578 & (uint)_UNK_150689628);
    fVar28 = (float)(~_UNK_15065157c & (uint)_UNK_15068962c);
    auVar21._0_4_ =
         (int)((uint)___xmm_3f0000003f0000003f0000003f000000 &
              __xmm_80000000800000008000000080000000) >> 0x10;
    auVar21._4_4_ = (int)((uint)_UNK_150689624 & _UNK_150651574) >> 0x10;
    auVar21._8_4_ = (int)((uint)_UNK_150689628 & _UNK_150651578) >> 0x10;
    auVar21._12_4_ = (int)((uint)_UNK_15068962c & _UNK_15065157c) >> 0x10;
    auVar20._0_4_ =
         (~-(uint)((int)fVar24 < ___xmm_38800000388000003880000038800000) &
          (uint)((___xmm_c8000fffc8000fffc8000fffc8000fff + (int)fVar24) -
                (((int)fVar24 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar24 + ___xmm_3f0000003f0000003f0000003f000000) -
         (int)___xmm_3f0000003f0000003f0000003f000000 &
         -(uint)((int)fVar24 < ___xmm_38800000388000003880000038800000)) &
         -(uint)((int)fVar24 < ___xmm_47800000478000004780000047800000);
    auVar20._4_4_ =
         (~-(uint)((int)fVar26 < _UNK_1508be4b4) &
          (uint)((_UNK_1508be504 + (int)fVar26) - (((int)fVar26 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar26 + _UNK_150689624) - (int)_UNK_150689624 &
         -(uint)((int)fVar26 < _UNK_1508be4b4)) & -(uint)((int)fVar26 < _UNK_1508be4e4);
    auVar20._8_4_ =
         (~-(uint)((int)fVar27 < _UNK_1508be4b8) &
          (uint)((_UNK_1508be508 + (int)fVar27) - (((int)fVar27 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar27 + _UNK_150689628) - (int)_UNK_150689628 &
         -(uint)((int)fVar27 < _UNK_1508be4b8)) & -(uint)((int)fVar27 < _UNK_1508be4e8);
    auVar20._12_4_ =
         (~-(uint)((int)fVar28 < _UNK_1508be4bc) &
          (uint)((_UNK_1508be50c + (int)fVar28) - (((int)fVar28 << 0x12) >> 0x1f)) >> 0xd |
         (int)(fVar28 + _UNK_15068962c) - (int)_UNK_15068962c &
         -(uint)((int)fVar28 < _UNK_1508be4bc)) & -(uint)((int)fVar28 < _UNK_1508be4ec);
    auVar25._0_4_ =
         ~-(uint)((int)fVar24 < ___xmm_47800000478000004780000047800000) &
         (((uint)fVar24 >> 0xd & ___xmm_000001ff000001ff000001ff000001ff |
          ___xmm_00000200000002000000020000000200) & -(uint)NAN(fVar24) |
         ___xmm_00007c0000007c0000007c0000007c00);
    auVar25._4_4_ =
         ~-(uint)((int)fVar26 < _UNK_1508be4e4) &
         (((uint)fVar26 >> 0xd & _UNK_1508be474 | _UNK_1508be484) & -(uint)NAN(fVar26) |
         _UNK_150689594);
    auVar25._8_4_ =
         ~-(uint)((int)fVar27 < _UNK_1508be4e8) &
         (((uint)fVar27 >> 0xd & _UNK_1508be478 | _UNK_1508be488) & -(uint)NAN(fVar27) |
         _UNK_150689598);
    auVar25._12_4_ =
         ~-(uint)((int)fVar28 < _UNK_1508be4ec) &
         (((uint)fVar28 >> 0xd & _UNK_1508be47c | _UNK_1508be48c) & -(uint)NAN(fVar28) |
         _UNK_15068959c);
    auVar21 = auVar20 | auVar25 | auVar21;
    packssdw(auVar21,auVar21);
    CreateDummyTexture<FFloat16Color>
              ((FRHICommandListImmediate *)&local_ca0,(FRHITextureCreateDesc *)param_1,
               (FFloat16Color *)&local_638);
    TVar8 = CreateRenderTarget((FRHITexture *)local_bf8,(wchar_t *)local_ca0);
    pTVar16 = &this->MidGreyDummy;
    if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
      pIVar3 = pTVar16->Reference;
      pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pIVar3 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x38))();
      }
    }
    if ((longlong *)local_bf8._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_bf8._0_8_ + 0x38))();
    }
    if (local_ca0 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_ca0);
    }
    if ((void *)local_638._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_638._padding_);
    }
  }
  TVar8 = CreateRenderTarget((FRHITexture *)(local_bf8 + 8),
                             (wchar_t *)(GBlackVolumeTexture->TextureRHI).Reference);
  pTVar16 = &this->VolumetricBlackDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_bf8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_bf8._8_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)local_be8,
                             (wchar_t *)(GBlackAlpha1VolumeTexture->TextureRHI).Reference);
  pTVar16 = &this->VolumetricBlackAlphaOneDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_be8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_be8._0_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)(local_be8 + 8),
                             (wchar_t *)(GBlackUintVolumeTexture->TextureRHI).Reference);
  pTVar16 = &this->VolumetricBlackUintDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_be8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_be8._8_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)local_bd8,
                             (wchar_t *)(GBlackTextureCube->TextureRHI).Reference);
  pTVar16 = &this->CubeBlackDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_bd8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_bd8._0_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)(local_bd8 + 8),
                             (wchar_t *)(GBlackCubeArrayTexture->TextureRHI).Reference);
  pTVar16 = &this->CubeArrayBlackDummy;
  if ((IPooledRenderTarget *)pTVar16 != TVar8.Reference) {
    pIVar3 = pTVar16->Reference;
    pTVar16->Reference = (IPooledRenderTarget *)(TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_bd8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_bd8._8_8_ + 0x38))();
  }
  return;
}

// InitializeEngineDependentTextures @ 145713be0

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
FSystemTextures::InitializeEngineDependentTextures
          (FSystemTextures *this,FRHICommandListImmediate *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  IPooledRenderTarget *pIVar2;
  bool bVar3;
  TRefCountPtr<IPooledRenderTarget> TVar4;
  undefined7 in_register_00000089;
  longlong *local_res8;
  
  if (GEngine != (UEngine *)0x0) {
    pTVar1 = &this->GGXLTCMat;
    if ((pTVar1->Reference == (IPooledRenderTarget *)0x0) &&
       (bVar3 = IsTextureDataValid((GEngine->GGXLTCMatTexture).field0_0x0.DebugPtr), bVar3)) {
      TVar4 = ::CreateTexture((FRHICommandListImmediate *)&local_res8,
                              (TObjectPtr<UTexture2D> *)param_1,(char)GEngine - PF_R16_UINT,
                              (wchar_t *)CONCAT71(in_register_00000089,10));
      if ((IPooledRenderTarget *)pTVar1 != TVar4.Reference) {
        pIVar2 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar4.Reference)->_padding_;
        (TVar4.Reference)->_padding_ = 0;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x38))();
        }
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x38))();
      }
    }
    pTVar1 = &this->GGXLTCAmp;
    if ((pTVar1->Reference == (IPooledRenderTarget *)0x0) &&
       (bVar3 = IsTextureDataValid((GEngine->GGXLTCAmpTexture).field0_0x0.DebugPtr), bVar3)) {
      TVar4 = ::CreateTexture((FRHICommandListImmediate *)&local_res8,
                              (TObjectPtr<UTexture2D> *)param_1,(char)GEngine + ~PF_R8,
                              (wchar_t *)CONCAT71(in_register_00000089,0xf));
      if ((IPooledRenderTarget *)pTVar1 != TVar4.Reference) {
        pIVar2 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar4.Reference)->_padding_;
        (TVar4.Reference)->_padding_ = 0;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x38))();
        }
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x38))();
      }
    }
    pTVar1 = &this->SheenLTC;
    if ((pTVar1->Reference == (IPooledRenderTarget *)0x0) &&
       (bVar3 = IsTextureDataValid((GEngine->SheenLTCTexture).field0_0x0.DebugPtr), bVar3)) {
      TVar4 = ::CreateTexture((FRHICommandListImmediate *)&local_res8,
                              (TObjectPtr<UTexture2D> *)param_1,(char)GEngine + PF_UYVY,
                              (wchar_t *)CONCAT71(in_register_00000089,10));
      if ((IPooledRenderTarget *)pTVar1 != TVar4.Reference) {
        pIVar2 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar4.Reference)->_padding_;
        (TVar4.Reference)->_padding_ = 0;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x38))();
        }
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x38))();
      }
    }
  }
  if ((((this->GGXLTCMat).Reference != (IPooledRenderTarget *)0x0) &&
      ((this->GGXLTCAmp).Reference != (IPooledRenderTarget *)0x0)) &&
     ((bVar3 = Substrate::IsSubstrateEnabled(), !bVar3 ||
      ((this->SheenLTC).Reference != (IPooledRenderTarget *)0x0)))) {
    this->bEngineDependentTexturesInitialized = true;
    return;
  }
  this->bEngineDependentTexturesInitialized = false;
  return;
}

// InitializeFeatureLevelDependentTextures @ 145713dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSystemTextures::InitializeFeatureLevelDependentTextures
          (FSystemTextures *this,FRHICommandListImmediate *param_1,Type param_2)

{
  undefined4 uVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  float fVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ETextureCreateFlags EVar10;
  longlong lVar11;
  ETextureCreateFlags EVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  int iVar26;
  TConsoleVariableData<int> *pTVar27;
  TConsoleVariableData<int> *pTVar28;
  Type TVar29;
  bool bVar30;
  ushort uVar31;
  ERHITextureInitAction EVar32;
  FRHITextureCreateDesc *pFVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  TRefCountPtr<IPooledRenderTarget> TVar36;
  FRHITextureDesc *pFVar37;
  void *pvVar38;
  longlong *plVar39;
  int *piVar40;
  uint uVar41;
  undefined8 *puVar42;
  longlong lVar43;
  undefined1 *puVar44;
  int iVar45;
  ulonglong uVar46;
  int *piVar47;
  int iVar48;
  ulonglong uVar49;
  undefined2 *puVar50;
  longlong lVar51;
  int iVar52;
  int iVar53;
  uint uVar54;
  int iVar55;
  int iVar56;
  longlong lVar57;
  TRefCountPtr<IPooledRenderTarget> *pTVar58;
  uint uVar59;
  int iVar60;
  uint uVar61;
  ForAnyElementType FVar62;
  undefined1 *puVar63;
  ETextureDimension EVar64;
  int *piVar65;
  undefined2 *puVar66;
  FSystemTextures *pFVar67;
  ushort *puVar68;
  ushort *puVar69;
  undefined2 *puVar70;
  FRHICommandListBase *this_00;
  EPixelFormat EVar71;
  float extraout_XMM0_Da;
  float fVar72;
  float extraout_XMM0_Db_00;
  double dVar73;
  double dVar74;
  float extraout_XMM0_Db;
  undefined1 auVar75 [16];
  int iVar88;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  float fVar90;
  uint uVar91;
  uint uVar102;
  uint uVar105;
  uint uVar106;
  undefined1 auVar92 [16];
  int iVar103;
  int iVar107;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  uint uVar104;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  uint uVar108;
  uint uVar115;
  uint uVar117;
  undefined1 auVar109 [16];
  uint uVar118;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  uint uVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  int iVar119;
  int iVar125;
  int iVar126;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  int iVar127;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar128;
  int iVar129;
  int iVar135;
  int iVar136;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  int iVar137;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar138;
  undefined1 auVar139 [16];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 auStackY_1328 [32];
  ForAnyElementType local_12c8;
  int local_12c0 [3];
  uchar local_12b4 [4];
  int local_12b0;
  Type local_12ac;
  FRHICommandListBase *local_12a8;
  float local_12a0;
  undefined4 uStack_129c;
  ForAnyElementType local_1298;
  int local_1290 [3];
  Type local_1284;
  undefined4 local_1280 [2];
  FRHITexture *local_1278;
  FSystemTextures *local_1270;
  FRHITexture *local_1268;
  FRHITransitionInfo *local_1258;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  longlong local_1248;
  FRHIResource *local_1238;
  undefined4 local_1230;
  undefined4 uStack_122c;
  FRHIResource *local_1228;
  FRHIResource *local_1220;
  undefined4 local_1218;
  undefined4 uStack_1214;
  FRHIResource *local_1210;
  undefined8 local_1208;
  undefined4 local_1200;
  undefined8 local_11f8;
  undefined4 local_11f0;
  undefined8 local_11e8;
  undefined4 local_11e0;
  undefined8 local_11d8;
  undefined4 local_11d0;
  FUpdateTextureRegion3D local_11c8;
  FUpdateTextureRegion3D local_11a0;
  FUpdateTextureRegion3D local_1178;
  undefined1 local_1150 [24];
  FName local_1138;
  undefined1 local_1130 [16];
  FName local_1120;
  undefined1 local_1118 [24];
  FName local_1100;
  FName local_10f8;
  FRHITransitionInfo local_10f0;
  FResourceBulkDataInterface local_10c0;
  undefined4 *local_10b8;
  undefined4 local_10b0;
  TArrayView<FRHITransitionInfo_const_,int> local_10a8;
  undefined1 local_1098 [32];
  longlong local_1078;
  ETextureCreateFlags EStack_1070;
  longlong local_1068;
  undefined8 uStack_1060;
  longlong local_1058;
  ETextureCreateFlags EStack_1050;
  longlong local_1048;
  undefined8 uStack_1040;
  undefined1 local_1038 [24];
  undefined1 local_1020 [24];
  undefined1 local_1008 [32];
  undefined8 local_fe8;
  FRHITextureDesc local_ce8;
  wchar_t *local_c98;
  ERHIAccess local_c90;
  ERHITextureInitAction local_c8c;
  FResourceBulkDataInterface *local_c88;
  FName local_c80;
  FName local_c78;
  FRHITextureCreateDesc local_c68;
  FRHITextureCreateDesc local_be8;
  FRHITextureCreateDesc local_b68;
  FRHITextureCreateDesc local_ae8;
  FRHITextureCreateDesc local_a68;
  FRHITextureDesc local_9e8;
  wchar_t *local_998;
  undefined8 local_990;
  FResourceBulkDataInterface *local_988;
  undefined8 local_980;
  FName local_978;
  FRHITextureDesc local_968;
  wchar_t *local_918;
  ERHIAccess local_910;
  ERHITextureInitAction local_90c;
  FResourceBulkDataInterface *local_908;
  FName local_900;
  FName local_8f8;
  undefined1 local_8e8 [28];
  uint local_8cc;
  uint local_8c8;
  TIntPoint<int>_u_0 local_8c4;
  ushort local_8bc;
  ushort local_8ba;
  uchar local_8b8;
  uchar local_8b7;
  ETextureDimension local_8b6;
  EPixelFormat local_8b5;
  EPixelFormat local_8b4;
  uchar local_8b3;
  undefined1 local_8b0 [8];
  void *local_8a8;
  undefined4 local_8a0;
  undefined4 local_89c;
  wchar_t *local_898;
  ERHIAccess local_890;
  ERHITextureInitAction local_88c;
  FResourceBulkDataInterface *local_888;
  FName local_880;
  FName local_878;
  FPooledRenderTargetDesc local_868;
  FRHITextureDesc local_808;
  wchar_t *local_7b8;
  ERHIAccess local_7b0;
  ERHITextureInitAction local_7ac;
  FResourceBulkDataInterface *local_7a8;
  FName local_7a0;
  FName local_798;
  undefined1 local_788 [48];
  code *local_758;
  longlong local_748 [3];
  longlong *local_730;
  FRHICommandListBase *local_728;
  FRHITexture *local_720;
  undefined1 local_6f8 [48];
  code *local_6c8;
  longlong local_6b8 [3];
  longlong *local_6a0;
  FRHICommandListBase *local_698;
  FRHITexture *local_690;
  undefined1 local_668 [48];
  code *local_638;
  longlong local_628 [3];
  longlong *local_610;
  FRHICommandListBase *local_608;
  FRHITexture *local_600;
  undefined1 local_5d8 [48];
  code *local_5a8;
  longlong local_598 [3];
  longlong *local_580;
  FRHICommandListBase *local_578;
  FRHITexture *local_570;
  undefined1 local_548 [48];
  longlong local_518;
  longlong local_508 [3];
  longlong *local_4f0;
  FRHICommandListBase *local_4e8;
  FRHITexture *local_4e0;
  undefined1 local_4b8 [48];
  longlong local_488;
  longlong local_478 [3];
  longlong *local_460;
  FRHICommandListBase *local_458;
  FRHITexture *local_450;
  FPooledRenderTargetDesc local_428;
  undefined1 local_3c8 [80];
  undefined1 local_378 [80];
  FRHITextureCreateDesc local_328;
  FRHITextureCreateDesc local_2a8;
  FRHITextureCreateDesc local_228;
  FRHITextureCreateDesc local_1a8;
  undefined4 uStack_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1328;
  iVar48 = 0;
  local_1284 = ES2_REMOVED;
  if (this->FeatureLevelInitializedTo != Num) {
    local_1284 = this->FeatureLevelInitializedTo;
  }
  local_12ac = param_2;
  local_12a8 = (FRHICommandListBase *)param_1;
  local_1270 = this;
  if ((int)local_1284 < 1) {
    if (ZPULL(GPixelFormats[0x20],0,1) != 0) {
      pFVar33 = FRHITextureCreateDesc::Create2D(&local_328,L"SobolSampling",0x20,0x10,PF_R16_UINT);
      pFVar33->_padding_ = 8;
      FLazyName::Resolve(&SystemTexturesName);
      pFVar33->ClassName = local_1138;
      pFVar33->InitAction = Initializer;
      FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_ae8,(FRHITextureDesc *)pFVar33);
      local_ae8.DebugName = pFVar33->DebugName;
      local_ae8.InitialState = pFVar33->InitialState;
      local_ae8.InitAction = pFVar33->InitAction;
      local_ae8.BulkData = pFVar33->BulkData;
      local_ae8.ClassName = pFVar33->ClassName;
      local_ae8.OwnerName = pFVar33->OwnerName;
      if ((void *)local_328._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_328._padding_);
      }
      FRHICommandListBase::CreateTextureInitializer
                ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_788,&local_ae8);
      if ((local_758 == (code *)0x0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("GetSubresourceCallback",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                              ,0x56,
                              L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                             ), bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar56 = 0;
      local_1208 = 0;
      local_1200 = 0;
      UE::Core::Private::Function::CheckCallable(local_758);
      pcVar4 = local_758;
      plVar39 = local_748;
      if (local_730 != (longlong *)0x0) {
        plVar39 = local_730;
      }
      uVar34 = (**(code **)(*plVar39 + 8))();
      puVar35 = (undefined8 *)(*pcVar4)(local_1020,uVar34);
      lVar57 = puVar35[2];
      puVar69 = (ushort *)*puVar35;
      iVar52 = iVar56;
      local_1248 = lVar57;
      puVar68 = puVar69;
      do {
        do {
          uVar31 = FSobol::ComputeGPUSpatialSeed(iVar52,iVar48,0);
          *puVar69 = uVar31;
          iVar52 = iVar52 + 1;
          puVar69 = puVar69 + 1;
          iVar53 = iVar56;
        } while (iVar52 < 0x10);
        do {
          uVar31 = FSobol::ComputeGPUSpatialSeed(iVar53,iVar48,1);
          iVar53 = iVar53 + 1;
          *puVar69 = uVar31;
          puVar69 = puVar69 + 1;
        } while (iVar53 < 0x10);
        iVar48 = iVar48 + 1;
        puVar69 = (ushort *)((longlong)puVar68 + lVar57);
        iVar52 = iVar56;
        puVar68 = puVar69;
      } while (iVar48 < 0x10);
      FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_788);
      TVar36 = CreateRenderTarget((FRHITexture *)local_1130,(wchar_t *)local_1238);
      param_1 = (FRHICommandListImmediate *)local_12a8;
      pTVar58 = &this->SobolSampling;
      if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
        pIVar2 = pTVar58->Reference;
        pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
        (TVar36.Reference)->_padding_ = 0;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x38))();
        }
      }
      if ((longlong *)local_1130._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_1130._0_8_ + 0x38))();
      }
      if (local_1238 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_1238);
      }
      if ((local_728 != (FRHICommandListBase *)0x0) && (local_720 != (FRHITexture *)0x0)) {
        FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_788);
      }
      if (local_758 != (code *)0x0) {
        plVar39 = local_748;
        if (local_730 != (longlong *)0x0) {
          plVar39 = local_730;
        }
        (**(code **)(*plVar39 + 0x10))();
      }
      if (local_788._0_8_ != 0) {
        plVar39 = (longlong *)(local_788 + 0x10);
        if ((longlong *)local_788._40_8_ != (longlong *)0x0) {
          plVar39 = (longlong *)local_788._40_8_;
        }
        (**(code **)(*plVar39 + 0x10))();
      }
      if ((void *)local_ae8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_ae8._padding_);
      }
    }
LAB_145714139:
    if (2 < (int)local_12ac) {
      local_868.ClearValue.Value.Color[3] = FClearValueBinding::Transparent.Value.Color[3];
      local_868.Format = PF_B8G8R8A8;
      local_868.UAVFormat = PF_Unknown;
      local_868.ClearValue._0_8_ = FClearValueBinding::Transparent._0_8_;
      local_868.ClearValue.Value._4_8_ = FClearValueBinding::Transparent.Value._4_8_;
      local_868.DebugName = L"UnknownTextureVolume";
      local_868.NumSamples = '\x01';
      local_868.FastVRAMPercentage = 0xff;
      local_868.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0
      ;
      local_868.AliasableFormats.ArrayNum = 0;
      local_868.AliasableFormats.ArrayMax = 1;
      local_868.Extent.field0_0x0._s_0.X = 1;
      local_868.Extent.field0_0x0._s_0.Y = 1;
      local_868.Depth = 1;
      local_868.ArraySize = 1;
      local_868.field13_0x58.PackedBits = '\0';
      local_868.NumMips = '\x01';
      local_868.Flags = NoFastClear|HideInVisualizeTexture|ShaderResource|RenderTargetable;
      pFVar37 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_3c8,&local_868);
      FRenderTargetPool::FindFreeElement
                ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_1,pFVar37,
                 &this->HairLUT0,L"HairLUT0");
      if ((void *)local_3c8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3c8._64_8_);
      }
      local_11a0.Height = local_868.Extent.field0_0x0._s_0.Y;
      local_11a0.Depth = local_868._52_4_ & 0xffff;
      local_11a0.Width = local_868.Extent.field0_0x0._s_0.X;
      local_12b4[0] = '\0';
      local_12b4[1] = '\0';
      local_12b4[2] = '\0';
      local_12b4[3] = '\0';
      local_11a0.DestX = 0;
      local_11a0.DestY = 0;
      local_11a0.DestZ = 0;
      local_11a0.SrcX = 0;
      local_11a0.SrcY = 0;
      local_11a0.SrcZ = 0;
      FRHICommandListBase::UpdateTexture3D
                ((FRHICommandListBase *)param_1,
                 (((this->HairLUT0).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
                 &local_11a0,local_868.Extent.field0_0x0._s_0.X * 4,
                 local_868.Extent.field0_0x0._s_0.X * local_868.Extent.field0_0x0._s_0.Y * 4,
                 local_12b4);
      uStack_1250 = 1;
      local_10f0.field1_0x8 =
           (FRHITransitionInfo_u_8)
           (((this->HairLUT0).Reference)->RenderTargetItem).TargetableTexture.Reference;
      local_10f0._padding_._4_2_ = 0xffff;
      local_1258 = &local_10f0;
      local_10a8._8_8_ = CONCAT44(uStack_124c,1);
      local_10f0._padding_._0_4_ = 0xffffffff;
      local_10f0.Type = Texture;
      local_10f0.AccessBefore = None;
      local_10f0.AccessAfter = SRVMask;
      local_10f0.Flags = None;
      local_10f0.CommitInfo.bIsSet = false;
      local_10a8.DataPtr = local_1258;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_10a8,None);
      pIVar2 = (this->HairLUT0).Reference;
      pIVar3 = (this->HairLUT1).Reference;
      if (pIVar3 != pIVar2) {
        (this->HairLUT1).Reference = pIVar2;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x30))();
        }
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
        }
      }
      pIVar2 = (this->HairLUT0).Reference;
      pIVar3 = (this->HairLUT2).Reference;
      if (pIVar3 != pIVar2) {
        (this->HairLUT2).Reference = pIVar2;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x30))();
        }
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
        }
      }
      if (local_868.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_868.AliasableFormats.AllocatorInstance.SecondaryData);
      }
    }
  }
  else if ((int)local_1284 < 3) goto LAB_145714139;
  local_1230 = 0x300;
  uStack_122c = 8;
  FPooledRenderTargetDesc::Create2DDesc
            (&local_428,(TIntPoint<int>)0x800000300,PF_R8,&FClearValueBinding::None,None,
             ShaderResource,false,'\x01',true,false,false);
  lVar57 = 6;
  puVar35 = &local_fe8;
  puVar42 = (undefined8 *)&__static_06b5fc28ec6595443569f68622128e5d001ddea33f58d18b580ce7fecbab8d34
  ;
  do {
    uVar34 = puVar42[1];
    uVar7 = puVar42[2];
    uVar8 = puVar42[3];
    *puVar35 = *puVar42;
    puVar35[1] = uVar34;
    uVar34 = puVar42[4];
    uVar9 = puVar42[5];
    puVar35[2] = uVar7;
    puVar35[3] = uVar8;
    uVar7 = puVar42[6];
    uVar8 = puVar42[7];
    puVar35[4] = uVar34;
    puVar35[5] = uVar9;
    uVar34 = puVar42[8];
    uVar9 = puVar42[9];
    puVar35[6] = uVar7;
    puVar35[7] = uVar8;
    uVar7 = puVar42[10];
    uVar8 = puVar42[0xb];
    puVar35[8] = uVar34;
    puVar35[9] = uVar9;
    uVar34 = puVar42[0xc];
    uVar9 = puVar42[0xd];
    puVar35[10] = uVar7;
    puVar35[0xb] = uVar8;
    uVar7 = puVar42[0xe];
    uVar8 = puVar42[0xf];
    puVar35[0xc] = uVar34;
    puVar35[0xd] = uVar9;
    puVar35[0xe] = uVar7;
    puVar35[0xf] = uVar8;
    lVar57 = lVar57 + -1;
    puVar35 = puVar35 + 0x10;
    puVar42 = puVar42 + 0x10;
  } while (lVar57 != 0);
  pTVar58 = &this->AsciiTexture;
  pFVar37 = (FRHITextureDesc *)::Translate((FRDGTextureDesc *)local_378,&local_428);
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,(FRHICommandListBase *)param_1,pFVar37,pTVar58,
             L"AsciiTexture");
  if ((void *)local_378._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_378._64_8_);
  }
  uVar46 = 0;
  pvVar38 = FRHICommandListImmediate::LockTexture2D
                      (param_1,(pTVar58->Reference->RenderTargetItem).TargetableTexture.Reference,0,
                       RLM_WriteOnly,(uint *)(local_1290 + 2),false,true,(ulong64 *)0x0);
  uVar49 = uVar46;
  do {
    uVar61 = 0;
    uVar59 = 2;
    do {
      lVar57 = (ulonglong)(uVar61 * local_1290[2]) + (ulonglong)(uint)((int)uVar49 * 8);
      puVar63 = (undefined1 *)&local_fe8;
      if (3 < uVar61) {
        puVar63 = (undefined1 *)((longlong)&local_fe8 + 4);
      }
      bVar6 = (byte)uVar59;
      uVar41 = *(uint *)(puVar63 + uVar46);
      *(char *)(lVar57 + (longlong)pvVar38) = -((1 << (bVar6 - 2 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 1 + (longlong)pvVar38) = -((1 << (bVar6 - 1 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 2 + (longlong)pvVar38) = -((1 << (bVar6 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 3 + (longlong)pvVar38) = -((1 << (bVar6 + 1 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 4 + (longlong)pvVar38) = -((1 << (bVar6 + 2 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 5 + (longlong)pvVar38) = -((1 << (bVar6 + 3 & 0x1f) & uVar41) != 0);
      *(char *)(lVar57 + 6 + (longlong)pvVar38) = -((1 << (bVar6 + 4 & 0x1f) & uVar41) != 0);
      uVar61 = uVar61 + 1;
      uVar59 = uVar59 + 8;
      *(char *)(lVar57 + 7 + (longlong)pvVar38) = -((1 << (bVar6 + 5 & 0x1f) & uVar41) != 0);
    } while (uVar59 < 0x42);
    uVar59 = (int)uVar49 + 1;
    uVar49 = (ulonglong)uVar59;
    uVar46 = uVar46 + 8;
  } while (uVar59 < 0x60);
  FRHICommandListImmediate::UnlockTexture2D
            (param_1,(pTVar58->Reference->RenderTargetItem).TargetableTexture.Reference,0,false,true
            );
  if (local_428.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_428.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  EVar71 = PF_R8G8;
  if (ZPULL(GPixelFormats[0xe],0,1) != 0) {
    EVar71 = PF_R8G8;
    if ((GPixelFormats[0xe].Capabilities & TextureFilterable) != None) {
      EVar71 = PF_G16R16;
    }
  }
  local_9e8.ClearValue._0_8_ = 1;
  local_9e8.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_9e8.AliasableFormats.ArrayMax = 1;
  local_12a0 = 1.79366e-43;
  local_998 = L"PreintegratedGF";
  uStack_129c = 0x20;
  local_9e8.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x2000000080;
  local_9e8.Flags = None;
  local_9e8.ClearValue.Value._4_8_ = 0;
  local_9e8.ClearValue.Value.Color[3] = 0.0;
  local_9e8.ExtData = 0;
  local_9e8.Depth = 1;
  local_9e8.ArraySize = 1;
  local_9e8.NumMips = '\x01';
  local_9e8.NumSamples = '\x01';
  local_9e8.Dimension = Texture2D;
  local_9e8.UAVFormat = PF_Unknown;
  local_9e8.FastVRAMPercentage = 0xff;
  local_9e8.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_9e8.AliasableFormats.ArrayNum = 0;
  local_990 = 0;
  local_988 = (FResourceBulkDataInterface *)0x0;
  local_980 = 0;
  local_978.ComparisonIndex.Value = 0;
  local_978.Number = 0;
  local_9e8.Format = EVar71;
  FRHITextureDesc::FRHITextureDesc(&local_808,&local_9e8);
  local_7b8 = local_998;
  local_7b0 = (ERHIAccess)local_990;
  local_7ac = local_990._4_4_;
  local_7a8 = local_988;
  local_7a0.ComparisonIndex.Value = (undefined4)local_980;
  local_7a0.Number = local_980._4_4_;
  local_798 = local_978;
  if (local_9e8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_9e8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_808.Flags = ShaderResource;
  FLazyName::Resolve(&SystemTexturesName);
  local_7a0 = local_10f8;
  local_7ac = Initializer;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_b68,&local_808);
  local_b68.DebugName = local_7b8;
  local_b68.InitialState = local_7b0;
  local_b68.InitAction = local_7ac;
  local_b68.BulkData = local_7a8;
  local_b68.ClassName = local_7a0;
  local_b68.OwnerName = local_798;
  if (local_808.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_808.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            ((FRHICommandListBase *)param_1,(FRHITextureInitializer *)local_6f8,&local_b68);
  if ((local_6c8 == (code *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSubresourceCallback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                          ,0x56,
                          L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                         ), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_11f8 = 0;
  local_11f0 = 0;
  UE::Core::Private::Function::CheckCallable(local_6c8);
  pcVar4 = local_6c8;
  plVar39 = local_6b8;
  if (local_6a0 != (longlong *)0x0) {
    plVar39 = local_6a0;
  }
  uVar34 = (**(code **)(*plVar39 + 8))();
  puVar35 = (undefined8 *)(*pcVar4)(local_1008,uVar34,&local_11f8);
  fVar15 = __real_3f000000;
  fVar14 = __real_3f800000;
  local_1258 = (FRHITransitionInfo *)puVar35[2];
  puVar66 = (undefined2 *)*puVar35;
  local_12c0[2] = 0;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = __real_3df0000000000000;
  fVar90 = __real_3c000000;
  local_1248 = (longlong)local_1258;
  do {
    fVar144 = ((float)local_12c0[2] + fVar15) * ((float)local_12c0[2] + fVar15);
    fVar143 = fVar144 * __real_3a800000;
    fVar144 = fVar144 * fVar144 * __real_35800000;
    puVar50 = puVar66;
    puVar70 = puVar66;
    uVar59 = 0;
    do {
      fVar72 = 0.0;
      fVar138 = 0.0;
      fVar140 = 0.0;
      fVar89 = (float)(int)uVar59 + fVar15;
      fVar142 = fVar89 * fVar90;
      local_12a0 = SQRT(fVar14 - fVar89 * fVar89 * __real_38800000);
      uVar61 = 0;
      do {
        uVar41 = uVar61 >> 0x18 | (uVar61 & 0xff0000) >> 8 | (uVar61 & 0xff00) << 8;
        uVar41 = (uVar41 | uVar61 << 0x18) >> 4 & 0xf0f0f0f |
                 (uVar41 & 0xff0f0f0f | uVar61 << 0x18) << 4;
        uVar41 = uVar41 >> 2 & 0x33333333 | (uVar41 & 0xf3333333) << 2;
        fVar90 = (float)((double)(uVar41 >> 1 & 0x55555555 | (uVar41 & 0xd5555555) * 2) *
                        auVar109._0_8_);
        fVar89 = (fVar14 - fVar90) / ((fVar144 - fVar14) * fVar90 + fVar14);
        fVar141 = SQRT(fVar89);
        __libm_sse2_sincosf_();
        fVar90 = __real_3c000000;
        fVar128 = extraout_XMM0_Db * SQRT(fVar14 - fVar89) * local_12a0 + fVar142 * fVar141;
        fVar89 = fVar128;
        if (fVar128 <= 0.0) {
          fVar89 = fVar72;
        }
        fVar5 = fVar141;
        if (fVar141 <= 0.0) {
          fVar5 = fVar72;
        }
        fVar128 = (fVar128 + fVar128) * fVar141 - fVar142;
        if (fVar128 <= 0.0) {
          fVar128 = fVar72;
        }
        if (0.0 < fVar128) {
          fVar141 = fVar14 - fVar89;
          fVar89 = (fVar15 / ((fVar142 * (fVar14 - fVar143) + fVar143) * fVar128 +
                             (fVar128 * (fVar14 - fVar143) + fVar143) * fVar142)) * fVar128 *
                   ((fVar89 * __real_40800000) / fVar5);
          fVar141 = fVar141 * fVar141 * fVar141 * fVar141 * fVar141;
          fVar138 = fVar138 + (fVar14 - fVar141) * fVar89;
          fVar140 = fVar140 + fVar89 * fVar141;
        }
        auVar109._8_8_ = 0;
        auVar109._0_8_ = __real_3df0000000000000;
        uVar61 = uVar61 + 1;
      } while (uVar61 < 0x80);
      fVar138 = fVar138 * __real_3c000000;
      fVar140 = fVar140 * __real_3c000000;
      if (EVar71 == PF_G16R16) {
        if (fVar14 <= fVar138) {
          fVar138 = fVar14;
        }
        if (fVar14 <= fVar140) {
          fVar140 = fVar14;
        }
        if (fVar138 <= 0.0) {
          fVar138 = fVar72;
        }
        if (fVar140 <= 0.0) {
          fVar140 = fVar72;
        }
        fVar140 = fVar140 * __real_477fff00;
        *puVar70 = (short)(int)(fVar138 * __real_477fff00 + fVar15);
        puVar70[1] = (short)(int)(fVar140 + fVar15);
      }
      else {
        if ((EVar71 != PF_R8G8) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("Format == PF_R8G8",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
                                ,0x292,L""), bVar30)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar90 = __real_3c000000;
        if (fVar14 <= fVar138) {
          fVar138 = fVar14;
        }
        if (fVar14 <= fVar140) {
          fVar140 = fVar14;
        }
        if (fVar138 <= 0.0) {
          fVar138 = fVar72;
        }
        if (fVar140 <= 0.0) {
          fVar140 = fVar72;
        }
        fVar140 = fVar140 * __real_437f0000;
        *(char *)puVar50 = (char)(int)(fVar138 * __real_437f0000 + fVar15);
        *(char *)((longlong)puVar50 + 1) = (char)(int)(fVar140 + fVar15);
      }
      auVar109._8_8_ = 0;
      auVar109._0_8_ = __real_3df0000000000000;
      uVar59 = uVar59 + 1;
      puVar70 = puVar70 + 2;
      puVar50 = puVar50 + 1;
    } while ((int)uVar59 < 0x80);
    puVar66 = (undefined2 *)((longlong)puVar66 + (longlong)local_1258);
    local_12c0[2] = local_12c0[2] + 1;
  } while (local_12c0[2] < 0x20);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_6f8);
  TVar36 = CreateRenderTarget((FRHITexture *)(local_1130 + 8),(wchar_t *)local_1228);
  pTVar58 = &local_1270->PreintegratedGF;
  if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
    pIVar2 = pTVar58->Reference;
    pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_1130._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1130._8_8_ + 0x38))();
  }
  if (local_1228 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1228);
  }
  if ((local_698 != (FRHICommandListBase *)0x0) && (local_690 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_6f8);
  }
  if (local_6c8 != (code *)0x0) {
    plVar39 = local_6b8;
    if (local_6a0 != (longlong *)0x0) {
      plVar39 = local_6a0;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_6f8._0_8_ != 0) {
    plVar39 = (longlong *)(local_6f8 + 0x10);
    if ((longlong *)local_6f8._40_8_ != (longlong *)0x0) {
      plVar39 = (longlong *)local_6f8._40_8_;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if ((void *)local_b68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_b68._padding_);
  }
  pFVar33 = FRHITextureCreateDesc::Create3D(&local_1a8,L"PerlinNoise3D",0x10,0x10,0x10,PF_B8G8R8A8);
  pFVar33->_padding_ = 0x48;
  FLazyName::Resolve(&SystemTexturesName);
  pFVar33->ClassName = local_1120;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_be8,(FRHITextureDesc *)pFVar33);
  local_be8.DebugName = pFVar33->DebugName;
  local_be8.InitialState = pFVar33->InitialState;
  local_be8.InitAction = pFVar33->InitAction;
  local_be8.BulkData = pFVar33->BulkData;
  local_be8.ClassName = pFVar33->ClassName;
  local_be8.OwnerName = pFVar33->OwnerName;
  if ((void *)local_1a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (local_12a8,(FRHITextureInitializer *)local_548,&local_be8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_548);
  if ((local_4e8 != (FRHICommandListBase *)0x0) && (local_4e0 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_548);
  }
  if (local_518 != 0) {
    plVar39 = local_508;
    if (local_4f0 != (longlong *)0x0) {
      plVar39 = local_4f0;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_548._0_8_ != 0) {
    plVar39 = (longlong *)(local_548 + 0x10);
    if ((longlong *)local_548._40_8_ != (longlong *)0x0) {
      plVar39 = (longlong *)local_548._40_8_;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  local_12c8.Data = (FScriptContainerElement *)0x0;
  local_12c0[0] = 0;
  local_12c0[1] = 0;
  iVar48 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,0x1000,&local_12c8,local_12c0,local_12c0 + 1);
  memset(local_12c8.Data + (longlong)iVar48 * 4,0,0x4000);
  fVar15 = __real_41400000;
  uVar59 = 0x1234;
  local_12c0[2] = 0;
  do {
    lVar57 = 0xf;
    uVar61 = local_12c0[2];
    do {
      lVar51 = 0xf;
      uVar41 = uVar61;
      do {
        uVar54 = 0;
        if ((int)uVar41 < local_12c0[0]) {
          uVar54 = ~uVar41 >> 0x1f;
        }
        if ((uVar54 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar67 = local_1270;
        lVar43 = (longlong)(int)uVar41;
        uVar41 = uVar41 + 1;
        uVar59 = uVar59 * 0xbb38435 + 0x3619636b;
        *(uint *)(local_12c8.Data + lVar43 * 4) =
             gradtable[(longlong)(((float)(uVar59 >> 9 | 0x3f800000) - fVar14) * fVar15) &
                       0xffffffff];
        lVar51 = lVar51 + -1;
      } while (lVar51 != 0);
      uVar61 = uVar61 + 0x10;
      lVar57 = lVar57 + -1;
    } while (lVar57 != 0);
    local_12c0[2] = local_12c0[2] + 0x100;
  } while ((uint)local_12c0[2] < 0xf00);
  piVar65 = (int *)0x0;
  uVar59 = 0;
  piVar40 = piVar65;
  do {
    lVar57 = 0x10;
    do {
      uVar41 = (uint)piVar40;
      uVar61 = uVar59;
      if ((int)uVar41 < local_12c0[0]) {
        uVar61 = ~uVar41 >> 0x1f;
      }
      if (uVar61 == 0) {
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar54 = uVar41 + 0xf;
      uVar1 = *(undefined4 *)(local_12c8.Data + (longlong)(int)uVar41 * 4);
      uVar61 = uVar59;
      if ((int)uVar54 < local_12c0[0]) {
        uVar61 = ~uVar54 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar40 = (int *)(ulonglong)(uVar41 + 0x10);
      *(undefined4 *)(local_12c8.Data + (longlong)(int)uVar54 * 4) = uVar1;
      lVar57 = lVar57 + -1;
    } while (lVar57 != 0);
    piVar47 = piVar65;
  } while (uVar41 + 0x10 < 0x1000);
  do {
    iVar48 = (int)piVar47;
    lVar57 = 0x10;
    do {
      uVar41 = (uint)piVar47;
      uVar61 = uVar59;
      if ((int)uVar41 < local_12c0[0]) {
        uVar61 = ~uVar41 >> 0x1f;
      }
      if (uVar61 == 0) {
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar54 = uVar41 + 0xf0;
      uVar1 = *(undefined4 *)(local_12c8.Data + (longlong)(int)uVar41 * 4);
      uVar61 = uVar59;
      if ((int)uVar54 < local_12c0[0]) {
        uVar61 = ~uVar54 >> 0x1f;
      }
      if ((uVar61 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar47 = (int *)(ulonglong)(uVar41 + 1);
      *(undefined4 *)(local_12c8.Data + (longlong)(int)uVar54 * 4) = uVar1;
      lVar57 = lVar57 + -1;
    } while (lVar57 != 0);
    uVar61 = iVar48 + 0x100;
    piVar47 = (int *)(ulonglong)uVar61;
  } while (uVar61 < 0x1000);
  uVar61 = 0xf00;
  do {
    lVar57 = 0x10;
    do {
      uVar41 = uVar59;
      if ((int)(uVar61 - 0xf00) < local_12c0[0]) {
        uVar41 = ~(uVar61 - 0xf00) >> 0x1f;
      }
      if (uVar41 == 0) {
        bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar30) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar1 = *(undefined4 *)(local_12c8.Data + (longlong)(int)uVar61 * 4 + -0x3c00);
      EVar32 = Default;
      if ((int)uVar61 < local_12c0[0]) {
        EVar32 = ~uVar61 >> 0x1f;
      }
      if ((EVar32 == Default) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = local_12a8;
      lVar51 = (longlong)(int)uVar61;
      uVar61 = uVar61 + 1;
      *(undefined4 *)(local_12c8.Data + lVar51 * 4) = uVar1;
      iVar26 = __isa_available;
      auVar25 = ___xmm_81020409810204098102040981020409;
      uVar24 = _UNK_1510030f8;
      uVar23 = ___xmm_02040811020408110204081102040811;
      iVar22 = _UNK_1510030ec;
      iVar21 = _UNK_1510030e8;
      iVar20 = _UNK_1510030e4;
      iVar19 = ___xmm_0000007f0000007f0000007f0000007f;
      auVar18 = ___xmm_0000000f0000000e0000000d0000000c;
      auVar109 = ___xmm_0000000b0000000a0000000900000008;
      uVar17 = _UNK_150631f6c;
      uVar16 = _UNK_150631f68;
      uVar54 = _UNK_150631f64;
      uVar41 = ___xmm_000000ff000000ff000000ff000000ff;
      iVar53 = _UNK_150631dac;
      iVar52 = _UNK_150631da8;
      iVar56 = _UNK_150631da4;
      iVar48 = ___xmm_00000001000000010000000100000001;
      lVar57 = lVar57 + -1;
    } while (lVar57 != 0);
    piVar40 = piVar65;
    FVar62.Data = local_12c8.Data;
  } while (uVar61 < 0x1000);
  do {
    iVar55 = (int)piVar40;
    auVar139._4_4_ = iVar55;
    auVar139._0_4_ = iVar55;
    auVar139._8_4_ = iVar55;
    auVar139._12_4_ = iVar55;
    piVar40 = piVar65;
    do {
      iVar45 = (int)piVar40;
      auVar101._4_4_ = iVar45;
      auVar101._0_4_ = iVar45;
      auVar101._8_4_ = iVar45;
      auVar101._12_4_ = iVar45;
      piVar40 = piVar65;
      if (iVar26 < 2) {
        do {
          uVar59 = *(uint *)FVar62.Data;
          iVar60 = (int)piVar40;
          uVar104 = iVar60 + 1;
          piVar40 = (int *)(ulonglong)uVar104;
          uVar61 = uVar59 & 0xff;
          *(uint *)FVar62.Data =
               (((uVar61 / 0x7f + (uVar61 - uVar61 / 0x7f >> 1) >> 6) - 1) * iVar55 +
               ((uVar59 >> 8 & 0xff) / 0x7f - 1) * iVar45 + (uVar59 / 0x7f0000 - 1) * iVar60 + 0x7f)
               * 0x1000000 | uVar59;
          FVar62.Data = FVar62.Data + 4;
        } while (uVar104 < 0x10);
      }
      else {
        uVar59 = *(uint *)FVar62.Data;
        uVar61 = *(uint *)(FVar62.Data + 4);
        uVar104 = *(uint *)(FVar62.Data + 8);
        uVar116 = *(uint *)(FVar62.Data + 0xc);
        uVar108 = uVar59 >> 8 & uVar41;
        uVar115 = uVar61 >> 8 & uVar54;
        uVar117 = uVar104 >> 8 & uVar16;
        uVar118 = uVar116 >> 8 & uVar17;
        uVar91 = uVar59 >> 0x10;
        uVar102 = uVar61 >> 0x10;
        uVar105 = uVar104 >> 0x10;
        uVar106 = uVar116 >> 0x10;
        auVar120._12_4_ = uVar115;
        auVar120._8_4_ = uVar115;
        auVar120._4_4_ = uVar108;
        auVar120._0_4_ = uVar108;
        auVar75._4_4_ = uVar105;
        auVar75._0_4_ = uVar105;
        auVar75._8_4_ = uVar106;
        auVar75._12_4_ = uVar106;
        auVar130._12_4_ = uVar102;
        auVar130._8_4_ = uVar102;
        auVar130._4_4_ = uVar91;
        auVar130._0_4_ = uVar91;
        auVar75 = pmuldq(auVar75,auVar25);
        auVar131 = pmuldq(auVar130,auVar25);
        auVar121 = pmuldq(auVar120,auVar25);
        auVar94._4_4_ = uVar117;
        auVar94._0_4_ = uVar117;
        auVar94._8_4_ = uVar118;
        auVar94._12_4_ = uVar118;
        iVar129 = auVar131._4_4_ + uVar91;
        iVar135 = auVar131._12_4_ + uVar102;
        iVar136 = auVar75._4_4_ + uVar105;
        iVar137 = auVar75._12_4_ + uVar106;
        auVar75 = pmuldq(auVar94,auVar25);
        iVar119 = auVar121._4_4_ + uVar108;
        iVar125 = auVar121._12_4_ + uVar115;
        iVar126 = auVar75._4_4_ + uVar117;
        iVar127 = auVar75._12_4_ + uVar118;
        uVar91 = uVar41 & uVar59;
        uVar102 = uVar54 & uVar61;
        auVar92._4_4_ = uVar102;
        auVar92._0_4_ = uVar91;
        uVar105 = uVar16 & uVar104;
        uVar106 = uVar17 & uVar116;
        auVar121._4_4_ = uVar105;
        auVar121._0_4_ = uVar105;
        auVar121._8_4_ = uVar106;
        auVar121._12_4_ = uVar106;
        auVar92._8_4_ = uVar102;
        auVar92._12_4_ = uVar102;
        iVar60 = (int)((ulonglong)uVar105 * (ulonglong)uVar23 >> 0x20);
        iVar88 = (int)((auVar121._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        iVar103 = (int)((ulonglong)uVar91 * (ulonglong)uVar23 >> 0x20);
        iVar107 = (int)((auVar92._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        auVar131._0_4_ = ((iVar129 >> 6) - (iVar129 >> 0x1f)) - iVar48;
        auVar131._4_4_ = ((iVar135 >> 6) - (iVar135 >> 0x1f)) - iVar56;
        auVar131._8_4_ = ((iVar136 >> 6) - (iVar136 >> 0x1f)) - iVar52;
        auVar131._12_4_ = ((iVar137 >> 6) - (iVar137 >> 0x1f)) - iVar53;
        auVar75 = pmulld(auVar131,___xmm_00000003000000020000000100000000);
        auVar110._0_4_ = ((uVar91 - iVar103 >> 1) + iVar103 >> 6) - iVar48;
        auVar110._4_4_ = ((uVar102 - iVar107 >> 1) + iVar107 >> 6) - iVar56;
        auVar110._8_4_ = ((uVar105 - iVar60 >> 1) + iVar60 >> 6) - iVar52;
        auVar110._12_4_ = ((uVar106 - iVar88 >> 1) + iVar88 >> 6) - iVar53;
        auVar121 = pmulld(auVar110,auVar139);
        auVar93._0_4_ = ((iVar119 >> 6) - (iVar119 >> 0x1f)) - iVar48;
        auVar93._4_4_ = ((iVar125 >> 6) - (iVar125 >> 0x1f)) - iVar56;
        auVar93._8_4_ = ((iVar126 >> 6) - (iVar126 >> 0x1f)) - iVar52;
        auVar93._12_4_ = ((iVar127 >> 6) - (iVar127 >> 0x1f)) - iVar53;
        auVar94 = pmulld(auVar93,auVar101);
        *(uint *)FVar62.Data =
             (auVar121._0_4_ + auVar75._0_4_ + auVar94._0_4_ + iVar19) * 0x1000000 | uVar59;
        *(uint *)(FVar62.Data + 4) =
             (auVar121._4_4_ + auVar75._4_4_ + auVar94._4_4_ + iVar20) * 0x1000000 | uVar61;
        *(uint *)(FVar62.Data + 8) =
             (auVar121._8_4_ + auVar75._8_4_ + auVar94._8_4_ + iVar21) * 0x1000000 | uVar104;
        *(uint *)(FVar62.Data + 0xc) =
             (auVar121._12_4_ + auVar75._12_4_ + auVar94._12_4_ + iVar22) * 0x1000000 | uVar116;
        uVar59 = *(uint *)(FVar62.Data + 0x10);
        uVar61 = *(uint *)(FVar62.Data + 0x14);
        uVar104 = *(uint *)(FVar62.Data + 0x18);
        uVar116 = *(uint *)(FVar62.Data + 0x1c);
        uVar91 = uVar59 >> 0x10;
        uVar102 = uVar61 >> 0x10;
        uVar105 = uVar104 >> 0x10;
        uVar106 = uVar116 >> 0x10;
        uVar108 = uVar59 >> 8 & uVar41;
        uVar115 = uVar61 >> 8 & uVar54;
        uVar117 = uVar104 >> 8 & uVar16;
        uVar118 = uVar116 >> 8 & uVar17;
        auVar132._12_4_ = uVar102;
        auVar132._8_4_ = uVar102;
        auVar132._4_4_ = uVar91;
        auVar132._0_4_ = uVar91;
        auVar121 = pmuldq(auVar132,auVar25);
        auVar122._12_4_ = uVar115;
        auVar122._8_4_ = uVar115;
        auVar122._4_4_ = uVar108;
        auVar122._0_4_ = uVar108;
        auVar76._4_4_ = uVar105;
        auVar76._0_4_ = uVar105;
        auVar76._8_4_ = uVar106;
        auVar76._12_4_ = uVar106;
        auVar75 = pmuldq(auVar76,auVar25);
        auVar94 = pmuldq(auVar122,auVar25);
        auVar77._4_4_ = uVar117;
        auVar77._0_4_ = uVar117;
        auVar77._8_4_ = uVar118;
        auVar77._12_4_ = uVar118;
        iVar129 = auVar121._4_4_ + uVar91;
        iVar135 = auVar121._12_4_ + uVar102;
        iVar136 = auVar75._4_4_ + uVar105;
        iVar137 = auVar75._12_4_ + uVar106;
        auVar75 = pmuldq(auVar77,auVar25);
        iVar119 = auVar94._4_4_ + uVar108;
        iVar125 = auVar94._12_4_ + uVar115;
        iVar126 = auVar75._4_4_ + uVar117;
        iVar127 = auVar75._12_4_ + uVar118;
        uVar91 = uVar41 & uVar59;
        uVar102 = uVar54 & uVar61;
        auVar95._4_4_ = uVar102;
        auVar95._0_4_ = uVar91;
        uVar105 = uVar16 & uVar104;
        uVar106 = uVar17 & uVar116;
        auVar78._4_4_ = uVar105;
        auVar78._0_4_ = uVar105;
        auVar78._8_4_ = uVar106;
        auVar78._12_4_ = uVar106;
        auVar95._8_4_ = uVar102;
        auVar95._12_4_ = uVar102;
        iVar60 = (int)((ulonglong)uVar105 * (ulonglong)uVar23 >> 0x20);
        iVar88 = (int)((auVar78._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        iVar103 = (int)((ulonglong)uVar91 * (ulonglong)uVar23 >> 0x20);
        iVar107 = (int)((auVar95._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        auVar79._0_4_ = ((iVar129 >> 6) - (iVar129 >> 0x1f)) - iVar48;
        auVar79._4_4_ = ((iVar135 >> 6) - (iVar135 >> 0x1f)) - iVar56;
        auVar79._8_4_ = ((iVar136 >> 6) - (iVar136 >> 0x1f)) - iVar52;
        auVar79._12_4_ = ((iVar137 >> 6) - (iVar137 >> 0x1f)) - iVar53;
        auVar75 = pmulld(auVar79,___xmm_00000007000000060000000500000004);
        auVar111._0_4_ = ((uVar91 - iVar103 >> 1) + iVar103 >> 6) - iVar48;
        auVar111._4_4_ = ((uVar102 - iVar107 >> 1) + iVar107 >> 6) - iVar56;
        auVar111._8_4_ = ((uVar105 - iVar60 >> 1) + iVar60 >> 6) - iVar52;
        auVar111._12_4_ = ((uVar106 - iVar88 >> 1) + iVar88 >> 6) - iVar53;
        auVar121 = pmulld(auVar111,auVar139);
        auVar96._0_4_ = ((iVar119 >> 6) - (iVar119 >> 0x1f)) - iVar48;
        auVar96._4_4_ = ((iVar125 >> 6) - (iVar125 >> 0x1f)) - iVar56;
        auVar96._8_4_ = ((iVar126 >> 6) - (iVar126 >> 0x1f)) - iVar52;
        auVar96._12_4_ = ((iVar127 >> 6) - (iVar127 >> 0x1f)) - iVar53;
        auVar94 = pmulld(auVar96,auVar101);
        *(uint *)(FVar62.Data + 0x10) =
             (auVar121._0_4_ + auVar75._0_4_ + auVar94._0_4_ + iVar19) * 0x1000000 | uVar59;
        *(uint *)(FVar62.Data + 0x14) =
             (auVar121._4_4_ + auVar75._4_4_ + auVar94._4_4_ + iVar20) * 0x1000000 | uVar61;
        *(uint *)(FVar62.Data + 0x18) =
             (auVar121._8_4_ + auVar75._8_4_ + auVar94._8_4_ + iVar21) * 0x1000000 | uVar104;
        *(uint *)(FVar62.Data + 0x1c) =
             (auVar121._12_4_ + auVar75._12_4_ + auVar94._12_4_ + iVar22) * 0x1000000 | uVar116;
        uVar59 = *(uint *)(FVar62.Data + 0x20);
        uVar61 = *(uint *)(FVar62.Data + 0x24);
        uVar104 = *(uint *)(FVar62.Data + 0x28);
        uVar116 = *(uint *)(FVar62.Data + 0x2c);
        uVar91 = uVar59 >> 0x10;
        uVar102 = uVar61 >> 0x10;
        uVar105 = uVar104 >> 0x10;
        uVar106 = uVar116 >> 0x10;
        uVar108 = uVar59 >> 8 & uVar41;
        uVar115 = uVar61 >> 8 & uVar54;
        uVar117 = uVar104 >> 8 & uVar16;
        uVar118 = uVar116 >> 8 & uVar17;
        auVar133._12_4_ = uVar102;
        auVar133._8_4_ = uVar102;
        auVar133._4_4_ = uVar91;
        auVar133._0_4_ = uVar91;
        auVar121 = pmuldq(auVar133,auVar25);
        auVar123._12_4_ = uVar115;
        auVar123._8_4_ = uVar115;
        auVar123._4_4_ = uVar108;
        auVar123._0_4_ = uVar108;
        auVar80._4_4_ = uVar105;
        auVar80._0_4_ = uVar105;
        auVar80._8_4_ = uVar106;
        auVar80._12_4_ = uVar106;
        auVar75 = pmuldq(auVar80,auVar25);
        auVar94 = pmuldq(auVar123,auVar25);
        auVar81._4_4_ = uVar117;
        auVar81._0_4_ = uVar117;
        auVar81._8_4_ = uVar118;
        auVar81._12_4_ = uVar118;
        iVar129 = auVar121._4_4_ + uVar91;
        iVar135 = auVar121._12_4_ + uVar102;
        iVar136 = auVar75._4_4_ + uVar105;
        iVar137 = auVar75._12_4_ + uVar106;
        auVar75 = pmuldq(auVar81,auVar25);
        iVar119 = auVar94._4_4_ + uVar108;
        iVar125 = auVar94._12_4_ + uVar115;
        iVar126 = auVar75._4_4_ + uVar117;
        iVar127 = auVar75._12_4_ + uVar118;
        uVar91 = uVar41 & uVar59;
        uVar102 = uVar54 & uVar61;
        auVar97._4_4_ = uVar102;
        auVar97._0_4_ = uVar91;
        uVar105 = uVar16 & uVar104;
        uVar106 = uVar17 & uVar116;
        auVar97._8_4_ = uVar102;
        auVar97._12_4_ = uVar102;
        auVar82._4_4_ = uVar105;
        auVar82._0_4_ = uVar105;
        auVar82._8_4_ = uVar106;
        auVar82._12_4_ = uVar106;
        iVar60 = (int)((ulonglong)uVar105 * (ulonglong)uVar23 >> 0x20);
        iVar88 = (int)((auVar82._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        iVar103 = (int)((ulonglong)uVar91 * (ulonglong)uVar23 >> 0x20);
        iVar107 = (int)((auVar97._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        auVar83._0_4_ = ((iVar129 >> 6) - (iVar129 >> 0x1f)) - iVar48;
        auVar83._4_4_ = ((iVar135 >> 6) - (iVar135 >> 0x1f)) - iVar56;
        auVar83._8_4_ = ((iVar136 >> 6) - (iVar136 >> 0x1f)) - iVar52;
        auVar83._12_4_ = ((iVar137 >> 6) - (iVar137 >> 0x1f)) - iVar53;
        auVar112._0_4_ = ((uVar91 - iVar103 >> 1) + iVar103 >> 6) - iVar48;
        auVar112._4_4_ = ((uVar102 - iVar107 >> 1) + iVar107 >> 6) - iVar56;
        auVar112._8_4_ = ((uVar105 - iVar60 >> 1) + iVar60 >> 6) - iVar52;
        auVar112._12_4_ = ((uVar106 - iVar88 >> 1) + iVar88 >> 6) - iVar53;
        auVar121 = pmulld(auVar112,auVar139);
        auVar98._0_4_ = ((iVar119 >> 6) - (iVar119 >> 0x1f)) - iVar48;
        auVar98._4_4_ = ((iVar125 >> 6) - (iVar125 >> 0x1f)) - iVar56;
        auVar98._8_4_ = ((iVar126 >> 6) - (iVar126 >> 0x1f)) - iVar52;
        auVar98._12_4_ = ((iVar127 >> 6) - (iVar127 >> 0x1f)) - iVar53;
        auVar75 = pmulld(auVar83,auVar109);
        auVar94 = pmulld(auVar98,auVar101);
        *(uint *)(FVar62.Data + 0x20) =
             (auVar121._0_4_ + auVar75._0_4_ + auVar94._0_4_ + iVar19) * 0x1000000 | uVar59;
        *(uint *)(FVar62.Data + 0x24) =
             (auVar121._4_4_ + auVar75._4_4_ + auVar94._4_4_ + iVar20) * 0x1000000 | uVar61;
        *(uint *)(FVar62.Data + 0x28) =
             (auVar121._8_4_ + auVar75._8_4_ + auVar94._8_4_ + iVar21) * 0x1000000 | uVar104;
        *(uint *)(FVar62.Data + 0x2c) =
             (auVar121._12_4_ + auVar75._12_4_ + auVar94._12_4_ + iVar22) * 0x1000000 | uVar116;
        auVar75 = *(undefined1 (*) [16])(FVar62.Data + 0x30);
        uVar61 = auVar75._0_4_;
        uVar59 = uVar61 >> 0x10;
        uVar116 = auVar75._4_4_;
        uVar104 = uVar116 >> 0x10;
        uVar102 = auVar75._8_4_;
        uVar106 = auVar75._12_4_;
        uVar91 = uVar102 >> 0x10;
        uVar105 = uVar106 >> 0x10;
        uVar108 = uVar61 >> 8 & uVar41;
        uVar115 = uVar116 >> 8 & uVar54;
        uVar117 = uVar102 >> 8 & uVar16;
        uVar118 = uVar106 >> 8 & uVar17;
        auVar134._12_4_ = uVar104;
        auVar134._8_4_ = uVar104;
        auVar134._4_4_ = uVar59;
        auVar134._0_4_ = uVar59;
        auVar131 = pmuldq(auVar134,auVar25);
        auVar124._12_4_ = uVar115;
        auVar124._8_4_ = uVar115;
        auVar124._4_4_ = uVar108;
        auVar124._0_4_ = uVar108;
        auVar84._4_4_ = uVar91;
        auVar84._0_4_ = uVar91;
        auVar84._8_4_ = uVar105;
        auVar84._12_4_ = uVar105;
        auVar94 = pmuldq(auVar84,auVar25);
        auVar121 = pmuldq(auVar124,auVar25);
        auVar85._4_4_ = uVar117;
        auVar85._0_4_ = uVar117;
        auVar85._8_4_ = uVar118;
        auVar85._12_4_ = uVar118;
        iVar129 = auVar131._4_4_ + uVar59;
        iVar135 = auVar131._12_4_ + uVar104;
        iVar136 = auVar94._4_4_ + uVar91;
        iVar137 = auVar94._12_4_ + uVar105;
        auVar94 = pmuldq(auVar85,auVar25);
        iVar119 = auVar121._4_4_ + uVar108;
        iVar125 = auVar121._12_4_ + uVar115;
        iVar126 = auVar94._4_4_ + uVar117;
        iVar127 = auVar94._12_4_ + uVar118;
        uVar61 = uVar41 & uVar61;
        uVar116 = uVar54 & uVar116;
        auVar99._4_4_ = uVar116;
        auVar99._0_4_ = uVar61;
        uVar102 = uVar16 & uVar102;
        uVar106 = uVar17 & uVar106;
        auVar99._8_4_ = uVar116;
        auVar99._12_4_ = uVar116;
        auVar86._4_4_ = uVar102;
        auVar86._0_4_ = uVar102;
        auVar86._8_4_ = uVar106;
        auVar86._12_4_ = uVar106;
        iVar60 = (int)((ulonglong)uVar102 * (ulonglong)uVar23 >> 0x20);
        iVar88 = (int)((auVar86._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        iVar103 = (int)((ulonglong)uVar61 * (ulonglong)uVar23 >> 0x20);
        iVar107 = (int)((auVar99._8_8_ & 0xffffffff) * (ulonglong)uVar24 >> 0x20);
        auVar87._0_4_ = ((iVar129 >> 6) - (iVar129 >> 0x1f)) - iVar48;
        auVar87._4_4_ = ((iVar135 >> 6) - (iVar135 >> 0x1f)) - iVar56;
        auVar87._8_4_ = ((iVar136 >> 6) - (iVar136 >> 0x1f)) - iVar52;
        auVar87._12_4_ = ((iVar137 >> 6) - (iVar137 >> 0x1f)) - iVar53;
        auVar113._0_4_ = ((uVar61 - iVar103 >> 1) + iVar103 >> 6) - iVar48;
        auVar113._4_4_ = ((uVar116 - iVar107 >> 1) + iVar107 >> 6) - iVar56;
        auVar113._8_4_ = ((uVar102 - iVar60 >> 1) + iVar60 >> 6) - iVar52;
        auVar113._12_4_ = ((uVar106 - iVar88 >> 1) + iVar88 >> 6) - iVar53;
        auVar121 = pmulld(auVar113,auVar139);
        auVar100._0_4_ = ((iVar119 >> 6) - (iVar119 >> 0x1f)) - iVar48;
        auVar100._4_4_ = ((iVar125 >> 6) - (iVar125 >> 0x1f)) - iVar56;
        auVar100._8_4_ = ((iVar126 >> 6) - (iVar126 >> 0x1f)) - iVar52;
        auVar100._12_4_ = ((iVar127 >> 6) - (iVar127 >> 0x1f)) - iVar53;
        auVar94 = pmulld(auVar87,auVar18);
        auVar101 = pmulld(auVar100,auVar101);
        auVar114._0_4_ = (auVar121._0_4_ + auVar94._0_4_ + auVar101._0_4_ + iVar19) * 0x1000000;
        auVar114._4_4_ = (auVar121._4_4_ + auVar94._4_4_ + auVar101._4_4_ + iVar20) * 0x1000000;
        auVar114._8_4_ = (auVar121._8_4_ + auVar94._8_4_ + auVar101._8_4_ + iVar21) * 0x1000000;
        auVar114._12_4_ = (auVar121._12_4_ + auVar94._12_4_ + auVar101._12_4_ + iVar22) * 0x1000000;
        *(undefined1 (*) [16])(FVar62.Data + 0x30) = auVar114 | auVar75;
        FVar62.Data = FVar62.Data + 0x40;
      }
      piVar40 = (int *)(ulonglong)(iVar45 + 1U);
    } while (iVar45 + 1U < 0x10);
    piVar40 = (int *)(ulonglong)(iVar55 + 1U);
  } while (iVar55 + 1U < 0x10);
  local_1178.Width = 0x10;
  local_1178.Height = 0x10;
  local_1178.Depth = 0x10;
  local_1178.DestX = 0;
  local_1178.DestY = 0;
  local_1178.DestZ = 0;
  local_1178.SrcX = 0;
  local_1178.SrcY = 0;
  local_1178.SrcZ = 0;
  FRHICommandListBase::UpdateTexture3D
            (local_12a8,local_1278,0,&local_1178,0x40,0x400,(uchar *)local_12c8.Data);
  TVar36 = CreateRenderTarget((FRHITexture *)local_1118,(wchar_t *)local_1278);
  pTVar58 = &pFVar67->PerlinNoise3D;
  if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
    pIVar2 = pTVar58->Reference;
    pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_1118._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1118._0_8_ + 0x38))();
  }
  if (local_12c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12c8.Data);
  }
  if (local_1278 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1278);
  }
  piVar40 = piVar65;
  EVar10 = _UNK_1510030d8;
  lVar57 = ___xmm_0000000e000000010000000800000006;
  lVar51 = _UNK_1510030c8;
  lVar43 = ___xmm_0000000c0000000f000000040000000a;
  uVar34 = _UNK_1510030b8;
  lVar11 = ___xmm_0000000500000009000000020000000d;
  EVar12 = _UNK_1510030a8;
  lVar13 = ___xmm_00000003000000070000000b00000000;
  fVar14 = __real_42ff0000;
  fVar15 = __real_3ffd70a3;
  fVar90 = __real_3deb851e;
  fVar143 = __real_43000000;
  if ((void *)local_be8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_be8._padding_);
    EVar10 = _UNK_1510030d8;
    lVar57 = ___xmm_0000000e000000010000000800000006;
    lVar51 = _UNK_1510030c8;
    lVar43 = ___xmm_0000000c0000000f000000040000000a;
    uVar34 = _UNK_1510030b8;
    lVar11 = ___xmm_0000000500000009000000020000000d;
    EVar12 = _UNK_1510030a8;
    lVar13 = ___xmm_00000003000000070000000b00000000;
    fVar14 = __real_42ff0000;
    fVar15 = __real_3ffd70a3;
    fVar90 = __real_3deb851e;
    fVar143 = __real_43000000;
  }
  do {
    fVar144 = __real_3f628f5c;
    local_1078 = lVar13;
    EStack_1070 = EVar12;
    local_1068 = lVar43;
    uStack_1060 = lVar51;
    local_1058 = lVar57;
    EStack_1050 = EVar10;
    local_1048 = lVar11;
    uStack_1040 = uVar34;
    fVar138 = sinf((float)*(int *)((longlong)&local_1078 + (longlong)piVar40) * fVar15);
    fVar144 = fVar144 - fVar138 * fVar90;
    __libm_sse2_sincosf_();
    iVar48 = (int)(extraout_XMM0_Da * fVar144 * fVar14 + fVar143);
    if (iVar48 < 0) {
      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\UnrealMathUtility.h"
                          ,0x96f,L"");
      if (bVar30) {
code_r0x00014571595d:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if ((0xff < iVar48) &&
            (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret <= 255",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\UnrealMathUtility.h"
                                 ,0x970,L""), bVar30)) goto code_r0x00014571595d;
    iVar56 = (int)(extraout_XMM0_Db_00 * fVar144 * fVar14 + fVar143);
    if (iVar56 < 0) {
      bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\UnrealMathUtility.h"
                          ,0x96f,L"");
      if (bVar30) {
code_r0x0001457159c3:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if ((0xff < iVar56) &&
            (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret <= 255",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\UnrealMathUtility.h"
                                 ,0x970,L""), bVar30)) goto code_r0x0001457159c3;
    EVar64 = Texture2D;
    local_12b0 = (uint)CONCAT11((char)iVar56,(char)iVar48) << 8;
    *(int *)((longlong)&uStack_128 + (longlong)piVar40) = local_12b0;
    piVar40 = piVar40 + 1;
  } while ((longlong)piVar40 < 0x40);
  pFVar33 = FRHITextureCreateDesc::Create2D(&local_2a8,L"SSAORandomization",0x40,0x40,PF_R8G8);
  pFVar33->_padding_ = 8;
  FLazyName::Resolve(&SystemTexturesName);
  (pFVar33->ClassName).ComparisonIndex = (FNameEntryId)local_1118._8_4_;
  (pFVar33->ClassName).Number = local_1118._12_4_;
  pFVar33->InitAction = Initializer;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_c68,(FRHITextureDesc *)pFVar33);
  fVar14 = __real_3f800000;
  local_c68.DebugName = pFVar33->DebugName;
  local_c68.InitialState = pFVar33->InitialState;
  local_c68.InitAction = pFVar33->InitAction;
  local_c68.BulkData = pFVar33->BulkData;
  local_c68.ClassName = pFVar33->ClassName;
  local_c68.OwnerName = pFVar33->OwnerName;
  if ((void *)local_2a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_2a8._padding_);
  }
  FRHICommandListBase::CreateTextureInitializer
            (this_00,(FRHITextureInitializer *)local_668,&local_c68);
  if ((local_638 == (code *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSubresourceCallback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                          ,0x56,
                          L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                         ), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_11e8 = 0;
  local_11e0 = 0;
  UE::Core::Private::Function::CheckCallable(local_638);
  pcVar4 = local_638;
  plVar39 = local_628;
  if (local_610 != (longlong *)0x0) {
    plVar39 = local_610;
  }
  uVar34 = (**(code **)(*plVar39 + 8))();
  plVar39 = (longlong *)(*pcVar4)(local_1098,uVar34,&local_11e8);
  local_1248 = plVar39[2];
  puVar63 = (undefined1 *)(*plVar39 + 5);
  piVar40 = piVar65;
  do {
    iVar48 = ((uint)piVar40 & 3) * 4;
    puVar44 = puVar63;
    uVar59 = 2;
    do {
      uVar61 = (uVar59 - 2 & 3) + iVar48;
      puVar44[-5] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)uVar61 * 4 + 2);
      puVar44[-4] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)uVar61 * 4 + 1);
      uVar61 = uVar59 - 1 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[-3] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[-2] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[-1] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      *puVar44 = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 1 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[1] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[2] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 2 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[3] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[4] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 3 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[5] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[6] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 4 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[7] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[8] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 5 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[9] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[10] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 6 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0xb] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0xc] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 7 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0xd] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0xe] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 8 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0xf] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x10] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 9 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0x11] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x12] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 10 & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0x13] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x14] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 0xb & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0x15] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x16] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 0xc & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0x17] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x18] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      uVar61 = uVar59 + 0xd & 0x80000003;
      if ((int)uVar61 < 0) {
        uVar61 = (uVar61 - 1 | 0xfffffffc) + 1;
      }
      puVar44[0x19] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 2);
      puVar44[0x1a] = *(undefined1 *)((longlong)&uStack_128 + (ulonglong)(uVar61 + iVar48) * 4 + 1);
      puVar44 = puVar44 + 0x20;
      uVar61 = uVar59 + 0xe;
      uVar59 = uVar59 + 0x10;
    } while (uVar61 < 0x40);
    uVar59 = (uint)piVar40 + 1;
    piVar40 = (int *)(ulonglong)uVar59;
    puVar63 = puVar63 + local_1248;
  } while (uVar59 < 0x40);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_668);
  TVar36 = CreateRenderTarget((FRHITexture *)(local_1118 + 0x10),(wchar_t *)local_1220);
  pTVar58 = &pFVar67->SSAORandomization;
  if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
    pIVar2 = pTVar58->Reference;
    pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_1118._16_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1118._16_8_ + 0x38))();
  }
  if (local_1220 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1220);
  }
  if ((local_608 != (FRHICommandListBase *)0x0) && (local_600 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_668);
  }
  if (local_638 != (code *)0x0) {
    plVar39 = local_628;
    if (local_610 != (longlong *)0x0) {
      plVar39 = local_610;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_668._0_8_ != 0) {
    plVar39 = (longlong *)(local_668 + 0x10);
    if ((longlong *)local_668._40_8_ != (longlong *)0x0) {
      plVar39 = (longlong *)local_668._40_8_;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if ((void *)local_c68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c68._padding_);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
       ((IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0 &&
        (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L""), bVar30)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar39 = (longlong *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"r.Mobile.GTAOPreIntegratedTextureType",1);
    piVar40 = piVar65;
    if (plVar39 != (longlong *)0x0) {
      piVar40 = (int *)(**(code **)(*plVar39 + 0x68))(plVar39);
    }
    MobileGTAOPreIntegratedTextureTypeCVar = (TConsoleVariableData<int> *)piVar40;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar27 = MobileGTAOPreIntegratedTextureTypeCVar;
  if ((0 < (int)local_1284) ||
     (MobileGTAOPreIntegratedTextureTypeCVar == (TConsoleVariableData<int> *)0x0))
  goto LAB_14571653d;
  bVar30 = IsInParallelGameThread();
  if (bVar30) {
LAB_145715f8f:
    piVar40 = piVar65;
  }
  else {
    bVar30 = IsInGameThread();
    piVar40 = (int *)&DAT_00000004;
    if (bVar30) goto LAB_145715f8f;
  }
  pTVar28 = MobileGTAOPreIntegratedTextureTypeCVar;
  if (*(int *)((longlong)piVar40 + (longlong)pTVar27) < 1) goto LAB_14571653d;
  bVar30 = IsInParallelGameThread();
  if (bVar30) {
LAB_145715fbb:
    piVar40 = piVar65;
  }
  else {
    bVar30 = IsInGameThread();
    piVar40 = (int *)&DAT_00000004;
    if (bVar30) goto LAB_145715fbb;
  }
  iVar48 = *(int *)((longlong)piVar40 + (longlong)pTVar28);
  local_968.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_1218 = 0x10;
  uStack_1214 = 0x10;
  if (iVar48 == 2) {
    EVar64 = Texture3D;
  }
  local_968.ClearValue._0_8_ = 1;
  local_918 = L"GTAOPreIntegrated";
  local_968.Extent.field0_0x0 = (TIntPoint<int>_u_0)0x1000000010;
  local_968.Depth = 1;
  if (iVar48 == 2) {
    local_968.Depth = 0x10;
  }
  local_968.AliasableFormats.ArrayMax = 1;
  local_968.ClearValue.Value._4_8_ = 0;
  local_968.ClearValue.Value.Color[3] = 0.0;
  local_968.ExtData = 0;
  local_968.ArraySize = 1;
  local_968.NumMips = '\x01';
  local_968.NumSamples = '\x01';
  local_968.UAVFormat = PF_Unknown;
  local_968.FastVRAMPercentage = 0xff;
  local_968.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_968.AliasableFormats.ArrayNum = 0;
  local_910 = None;
  local_908 = (FResourceBulkDataInterface *)0x0;
  local_8f8.ComparisonIndex.Value = 0;
  local_8f8.Number = 0;
  local_968.Format = PF_R16F;
  local_968.Flags = ShaderResource;
  local_968.Dimension = EVar64;
  FLazyName::Resolve(&SystemTexturesName);
  local_900 = local_1100;
  local_90c = Initializer;
  if (iVar48 == 2) {
    local_90c = Default;
  }
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_a68,&local_968);
  local_a68.DebugName = local_918;
  local_a68.InitialState = local_910;
  local_a68.InitAction = local_90c;
  local_a68.BulkData = local_908;
  local_a68.ClassName = local_900;
  local_a68.OwnerName = local_8f8;
  if (local_968.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_968.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  FRHICommandListBase::CreateTextureInitializer
            (this_00,(FRHITextureInitializer *)local_5d8,&local_a68);
  local_1298.Data = (FScriptContainerElement *)0x0;
  local_1290[0] = 0;
  local_1290[1] = 0;
  iVar56 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,0x1000,&local_1298,local_1290,local_1290 + 1);
  memset(local_1298.Data + (longlong)iVar56 * 2,0,0x2000);
  FVar62.Data = local_1298.Data;
  if (iVar48 != 2) {
    if ((local_5a8 == (code *)0x0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("GetSubresourceCallback",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITextureInitializer.h"
                            ,0x56,
                            L"Attempting to call GetSubresourceCallback when it is null, make sure you set your InitAction to Initializer."
                           ), bVar30)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_11d8 = 0;
    local_11d0 = 0;
    UE::Core::Private::Function::CheckCallable(local_5a8);
    pcVar4 = local_5a8;
    plVar39 = local_598;
    if (local_580 != (longlong *)0x0) {
      plVar39 = local_580;
    }
    uVar34 = (**(code **)(*plVar39 + 8))();
    puVar35 = (undefined8 *)(*pcVar4)(local_1038,uVar34);
    FVar62.Data = (FScriptContainerElement *)*puVar35;
  }
  fVar15 = __real_bf800000;
  uVar59 = 0;
  do {
    uVar61 = 0;
    fVar90 = (((float)uVar59 * __real_3d800000 - __real_3ef00000) + (float)uVar59 * __real_3d800000)
             - __real_3ef00000;
    fVar143 = fVar90 * __real_c0000000;
    do {
      uVar41 = 0;
      fVar144 = (((float)uVar61 * __real_3d800000 - __real_3ef00000) +
                (float)uVar61 * __real_3d800000) - __real_3ef00000;
      do {
        fVar138 = __real_3fc90fdb;
        if (iVar48 == 2) {
          iVar56 = uVar59 * 0x10 + uVar61;
        }
        else {
          iVar56 = uVar61 * 0x10 + uVar59;
        }
        fVar89 = (float)uVar41 * __real_3d800000 - __real_3ef00000;
        fVar89 = fVar89 + fVar89;
        fVar140 = fVar15;
        if ((fVar15 <= fVar90) && (fVar140 = fVar90, fVar14 <= fVar90)) {
          fVar140 = fVar14;
        }
        fVar72 = acosf(fVar140);
        fVar72 = fVar72 - fVar138;
        fVar142 = cosf(fVar72);
        fVar140 = fVar15;
        if ((fVar15 <= fVar89) && (fVar140 = fVar89, fVar14 <= fVar89)) {
          fVar140 = fVar14;
        }
        fVar89 = acosf(fVar140);
        fVar140 = fVar15;
        if ((fVar15 <= fVar144) && (fVar140 = fVar144, fVar14 <= fVar144)) {
          fVar140 = fVar14;
        }
        fVar89 = (float)((uint)fVar89 ^ __xmm_80000000800000008000000080000000) - fVar72;
        if (fVar89 <= __real_bfc90fdb) {
          fVar89 = __real_bfc90fdb;
        }
        fVar89 = fVar89 + fVar72;
        fVar128 = acosf(fVar140);
        fVar140 = fVar128 - fVar72;
        if (fVar138 <= fVar128 - fVar72) {
          fVar140 = fVar138;
        }
        fVar140 = fVar140 + fVar72;
        dVar73 = cos((double)((fVar140 + fVar140) - fVar72));
        dVar74 = cos((double)((fVar89 + fVar89) - fVar72));
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(FVar62.Data + (ulonglong)(iVar56 * 0x10 + uVar41) * 2),
                   (float)((((double)(fVar140 * fVar143 + fVar142) - dVar73) +
                           ((double)(fVar89 * fVar143 + fVar142) - dVar74)) *
                          __real_3fd0000000000000));
        uVar41 = uVar41 + 1;
      } while (uVar41 < 0x10);
      uVar61 = uVar61 + 1;
    } while (uVar61 < 0x10);
    uVar59 = uVar59 + 1;
  } while (uVar59 < 0x10);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_5d8);
  pFVar67 = local_1270;
  this_00 = local_12a8;
  if (iVar48 == 2) {
    local_11c8.DestX = 0;
    local_11c8.DestY = 0;
    local_11c8.DestZ = 0;
    local_11c8.SrcX = 0;
    local_11c8.SrcY = 0;
    local_11c8.SrcZ = 0;
    local_11c8.Width = 0x10;
    local_11c8.Height = 0x10;
    local_11c8.Depth = 0x10;
    FRHICommandListBase::UpdateTexture3D
              (local_12a8,local_1268,0,&local_11c8,0x20,0x200,(uchar *)FVar62.Data);
  }
  TVar36 = CreateRenderTarget((FRHITexture *)local_1150,(wchar_t *)local_1268);
  pTVar58 = &pFVar67->GTAOPreIntegrated;
  if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
    pIVar2 = pTVar58->Reference;
    pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_1150._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1150._0_8_ + 0x38))();
  }
  if (local_1268 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1268);
  }
  if (local_1298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1298.Data);
  }
  if ((local_578 != (FRHICommandListBase *)0x0) && (local_570 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_5d8);
  }
  if (local_5a8 != (code *)0x0) {
    plVar39 = local_598;
    if (local_580 != (longlong *)0x0) {
      plVar39 = local_580;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_5d8._0_8_ != 0) {
    plVar39 = (longlong *)(local_5d8 + 0x10);
    if ((longlong *)local_5d8._40_8_ != (longlong *)0x0) {
      plVar39 = (longlong *)local_5d8._40_8_;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if ((void *)local_a68._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a68._padding_);
  }
LAB_14571653d:
  pFVar33 = FRHITextureCreateDesc::Create2DArray
                      (&local_228,L"ZeroUIntArrayAtomicCompatDummy",1,1,1,PF_R32_UINT);
  pFVar33->_padding_ = 8;
  FRHITextureDesc::FRHITextureDesc(&local_ce8,(FRHITextureDesc *)pFVar33);
  local_c98 = pFVar33->DebugName;
  local_c90 = pFVar33->InitialState;
  local_c8c = pFVar33->InitAction;
  local_c88 = pFVar33->BulkData;
  local_c80 = pFVar33->ClassName;
  local_c78 = pFVar33->OwnerName;
  if ((void *)local_228._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_228._padding_);
  }
  TVar29 = local_12ac;
  if (3 < (int)local_12ac) {
    local_ce8.Flags = local_ce8.Flags | AtomicCompatible;
  }
  local_10c0 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
  local_10b8 = local_1280;
  local_1280[0] = 0;
  local_8b6 = local_ce8.Dimension;
  local_8b5 = local_ce8.Format;
  local_8b4 = local_ce8.UAVFormat;
  local_8c4 = local_ce8.Extent.field0_0x0;
  local_8bc = local_ce8.Depth;
  local_8ba = local_ce8.ArraySize;
  local_8b8 = local_ce8.NumMips;
  local_8b7 = local_ce8.NumSamples;
  local_8e8._24_4_ = local_ce8.ClearValue.Value.Color[3];
  local_8c8 = local_ce8.ExtData;
  local_8b3 = local_ce8.FastVRAMPercentage;
  local_8cc = local_ce8.GPUMask.GPUMask;
  local_10b0 = 4;
  local_8a8 = (void *)0x0;
  local_8a0 = 0;
  local_89c = 1;
  local_8e8._8_8_ = local_ce8.ClearValue._0_8_;
  local_8e8._16_8_ = local_ce8.ClearValue.Value._4_8_;
  local_8e8._0_8_ = local_ce8.Flags;
  TArray<enum_EPixelFormat,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::operator=
            (local_8b0,&local_ce8.AliasableFormats);
  local_8e8._0_8_ = local_8e8._0_8_ | ShaderResource;
  local_898 = local_c98;
  local_890 = local_c90;
  local_88c = local_c8c;
  local_888 = local_c88;
  local_880 = local_c80;
  local_878 = local_c78;
  FLazyName::Resolve(&SystemTexturesName);
  local_880.ComparisonIndex.Value = local_1150._8_4_;
  local_880.Number = local_1150._12_4_;
  local_888 = &local_10c0;
  local_88c = BulkData;
  FRHICommandListBase::CreateTextureInitializer
            (this_00,(FRHITextureInitializer *)local_4b8,(FRHITextureCreateDesc *)local_8e8);
  FRHITextureInitializer::Finalize((FRHITextureInitializer *)local_4b8);
  if ((local_458 != (FRHICommandListBase *)0x0) && (local_450 != (FRHITexture *)0x0)) {
    FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)local_4b8);
  }
  if (local_488 != 0) {
    plVar39 = local_478;
    if (local_460 != (longlong *)0x0) {
      plVar39 = local_460;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_4b8._0_8_ != 0) {
    plVar39 = (longlong *)(local_4b8 + 0x10);
    if ((longlong *)local_4b8._40_8_ != (longlong *)0x0) {
      plVar39 = (longlong *)local_4b8._40_8_;
    }
    (**(code **)(*plVar39 + 0x10))();
  }
  if (local_8a8 != (void *)0x0) {
    FMemory::Free(local_8a8);
  }
  TVar36 = CreateRenderTarget((FRHITexture *)(local_1150 + 0x10),(wchar_t *)local_1210);
  pTVar58 = &pFVar67->ZeroUIntArrayAtomicCompatDummy;
  if ((IPooledRenderTarget *)pTVar58 != TVar36.Reference) {
    pIVar2 = pTVar58->Reference;
    pTVar58->Reference = (IPooledRenderTarget *)(TVar36.Reference)->_padding_;
    (TVar36.Reference)->_padding_ = 0;
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))();
    }
  }
  if ((longlong *)local_1150._16_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1150._16_8_ + 0x38))();
  }
  if (local_1210 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1210);
  }
  if (local_ce8.AliasableFormats.AllocatorInstance.SecondaryData !=
      (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_ce8.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  pFVar67->FeatureLevelInitializedTo = TVar29;
  return;
}

// InitializeTextures @ 145716fc0

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
FSystemTextures::InitializeTextures
          (FSystemTextures *this,FRHICommandListImmediate *param_1,Type param_2)

{
  FRHIGPUMask FVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId150,"FSystemTextures::InitializeTextures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SystemTextures.cpp"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
  }
  FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_1,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  if (this->FeatureLevelInitializedTo == Num) {
    InitializeCommonTextures(this,param_1);
  }
  else if ((int)param_2 <= (int)this->FeatureLevelInitializedTo) goto LAB_145717070;
  InitializeFeatureLevelDependentTextures(this,param_1,param_2);
LAB_145717070:
  if ((this->bEngineDependentTexturesInitialized == false) && (GEngine != (UEngine *)0x0)) {
    InitializeEngineDependentTextures(this,param_1);
  }
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

