// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// operator= @ 147c329c0

FQualityLevels * __thiscall
Scalability::FQualityLevels::operator=(FQualityLevels *this,FQualityLevels *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->CPUBenchmarkSteps;
  this->ResolutionQuality = param_1->ResolutionQuality;
  pTVar2 = &this->CPUBenchmarkSteps;
  this->ViewDistanceQuality = param_1->ViewDistanceQuality;
  this->AntiAliasingQuality = param_1->AntiAliasingQuality;
  this->ShadowQuality = param_1->ShadowQuality;
  this->GlobalIlluminationQuality = param_1->GlobalIlluminationQuality;
  this->ReflectionQuality = param_1->ReflectionQuality;
  this->PostProcessQuality = param_1->PostProcessQuality;
  this->TextureQuality = param_1->TextureQuality;
  this->EffectsQuality = param_1->EffectsQuality;
  this->FoliageQuality = param_1->FoliageQuality;
  this->ShadingQuality = param_1->ShadingQuality;
  this->LandscapeQuality = param_1->LandscapeQuality;
  this->CPUBenchmarkResults = param_1->CPUBenchmarkResults;
  this->GPUBenchmarkResults = param_1->GPUBenchmarkResults;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CPUBenchmarkSteps).ArrayNum = (param_1->CPUBenchmarkSteps).ArrayNum;
    (this->CPUBenchmarkSteps).ArrayMax = (param_1->CPUBenchmarkSteps).ArrayMax;
    (param_1->CPUBenchmarkSteps).ArrayNum = 0;
    (param_1->CPUBenchmarkSteps).ArrayMax = 0;
  }
  pTVar1 = &param_1->GPUBenchmarkSteps;
  pTVar2 = &this->GPUBenchmarkSteps;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->GPUBenchmarkSteps).ArrayNum = (param_1->GPUBenchmarkSteps).ArrayNum;
    (this->GPUBenchmarkSteps).ArrayMax = (param_1->GPUBenchmarkSteps).ArrayMax;
    (param_1->GPUBenchmarkSteps).ArrayNum = 0;
    (param_1->GPUBenchmarkSteps).ArrayMax = 0;
  }
  return this;
}

// FQualityLevels @ 1484bb9a0

FQualityLevels * __thiscall
Scalability::FQualityLevels::FQualityLevels(FQualityLevels *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  this->CPUBenchmarkResults = -1.0;
  this->GPUBenchmarkResults = -1.0;
  (this->CPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUBenchmarkSteps).ArrayNum = 0;
  (this->CPUBenchmarkSteps).ArrayMax = 0;
  (this->GPUBenchmarkSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GPUBenchmarkSteps).ArrayNum = 0;
  (this->GPUBenchmarkSteps).ArrayMax = 0;
  if (param_1) {
    fVar4 = GetRenderScaleLevelFromQualityLevel(1,ERelativeToMax);
    this->ResolutionQuality = fVar4;
    iVar1 = (**(code **)(*(longlong *)CVarViewDistanceQuality_NumLevels._padding_ + 200))();
    iVar3 = 0;
    if (0 < iVar1 + -2) {
      iVar3 = iVar1 + -2;
    }
    this->ViewDistanceQuality = iVar3;
    iVar1 = (**(code **)(*(longlong *)CVarAntiAliasingQuality_NumLevels._padding_ + 200))();
    iVar3 = 0;
    if (0 < iVar1 + -2) {
      iVar3 = iVar1 + -2;
    }
    this->AntiAliasingQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarShadowQuality_NumLevels._padding_ + 200))();
    iVar1 = 0;
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->ShadowQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarGlobalIlluminationQuality_NumLevels._padding_ + 200))();
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->GlobalIlluminationQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarReflectionQuality_NumLevels._padding_ + 200))();
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->ReflectionQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarPostProcessQuality_NumLevels._padding_ + 200))();
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->PostProcessQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarTextureQuality_NumLevels._padding_ + 200))();
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->TextureQuality = iVar3;
    iVar3 = (**(code **)(*(longlong *)CVarEffectsQuality_NumLevels._padding_ + 200))();
    if (0 < iVar3 + -2) {
      iVar1 = iVar3 + -2;
    }
    this->EffectsQuality = iVar1;
    iVar2 = (**(code **)(*(longlong *)CVarFoliageQuality_NumLevels._padding_ + 200))();
    iVar1 = 0;
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->FoliageQuality = iVar3;
    iVar2 = (**(code **)(*(longlong *)CVarShadingQuality_NumLevels._padding_ + 200))();
    iVar3 = iVar1;
    if (0 < iVar2 + -2) {
      iVar3 = iVar2 + -2;
    }
    this->ShadingQuality = iVar3;
    iVar3 = (**(code **)(*(longlong *)CVarLandscapeQuality_NumLevels._padding_ + 200))();
    this->ResolutionQuality = 0.0;
    if (0 < iVar3 + -2) {
      iVar1 = iVar3 + -2;
    }
    this->LandscapeQuality = iVar1;
  }
  return this;
}

// GetMinQualityLevel @ 1484d92b0

int __thiscall Scalability::FQualityLevels::GetMinQualityLevel(FQualityLevels *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->AntiAliasingQuality;
  if (this->ViewDistanceQuality < this->AntiAliasingQuality) {
    iVar1 = this->ViewDistanceQuality;
  }
  iVar2 = this->ShadowQuality;
  if (iVar1 < this->ShadowQuality) {
    iVar2 = iVar1;
  }
  iVar1 = this->GlobalIlluminationQuality;
  if (iVar2 < this->GlobalIlluminationQuality) {
    iVar1 = iVar2;
  }
  iVar2 = this->ReflectionQuality;
  if (iVar1 < this->ReflectionQuality) {
    iVar2 = iVar1;
  }
  iVar1 = this->PostProcessQuality;
  if (iVar2 < this->PostProcessQuality) {
    iVar1 = iVar2;
  }
  iVar2 = this->TextureQuality;
  if (iVar1 < this->TextureQuality) {
    iVar2 = iVar1;
  }
  iVar1 = this->EffectsQuality;
  if (iVar2 < this->EffectsQuality) {
    iVar1 = iVar2;
  }
  iVar2 = this->FoliageQuality;
  if (iVar1 < this->FoliageQuality) {
    iVar2 = iVar1;
  }
  iVar1 = this->ShadingQuality;
  if (iVar2 < this->ShadingQuality) {
    iVar1 = iVar2;
  }
  iVar2 = this->LandscapeQuality;
  if (iVar1 < this->LandscapeQuality) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// GetSingleQualityLevel @ 1484db510

int __thiscall Scalability::FQualityLevels::GetSingleQualityLevel(FQualityLevels *this)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = this->ViewDistanceQuality;
  if ((((((iVar2 == this->AntiAliasingQuality) && (iVar2 == this->ShadowQuality)) &&
        (iVar2 == this->GlobalIlluminationQuality)) &&
       ((iVar2 == this->ReflectionQuality && (iVar2 == this->PostProcessQuality)))) &&
      ((iVar2 == this->TextureQuality &&
       ((iVar2 == this->EffectsQuality && (iVar2 == this->FoliageQuality)))))) &&
     ((iVar2 == this->ShadingQuality &&
      (fVar1 = this->ResolutionQuality, fVar3 = GetRenderScaleLevelFromQualityLevel(iVar2,EAbsolute)
      , fVar3 == fVar1)))) {
    return iVar2;
  }
  return -1;
}

// SetAntiAliasingQuality @ 1484fb5e0

void __thiscall
Scalability::FQualityLevels::SetAntiAliasingQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarAntiAliasingQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->AntiAliasingQuality = iVar2;
  return;
}

// SetBenchmarkFallback @ 1484fb630

void __thiscall Scalability::FQualityLevels::SetBenchmarkFallback(FQualityLevels *this)

{
  this->ResolutionQuality = 100.0;
  return;
}

// SetDefaults @ 1484fb790

void __thiscall Scalability::FQualityLevels::SetDefaults(FQualityLevels *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = GetRenderScaleLevelFromQualityLevel(1,ERelativeToMax);
  this->ResolutionQuality = fVar3;
  iVar1 = (**(code **)(*(longlong *)CVarViewDistanceQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->ViewDistanceQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarAntiAliasingQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->AntiAliasingQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarShadowQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->ShadowQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarGlobalIlluminationQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->GlobalIlluminationQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarReflectionQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->ReflectionQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarPostProcessQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->PostProcessQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarTextureQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->TextureQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarEffectsQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->EffectsQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarFoliageQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->FoliageQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarShadingQuality_NumLevels._padding_ + 200))();
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->ShadingQuality = iVar2;
  iVar1 = (**(code **)(*(longlong *)CVarLandscapeQuality_NumLevels._padding_ + 200))();
  this->ResolutionQuality = 0.0;
  iVar2 = 0;
  if (0 < iVar1 + -2) {
    iVar2 = iVar1 + -2;
  }
  this->LandscapeQuality = iVar2;
  return;
}

// SetEffectsQuality @ 1484fb900

void __thiscall Scalability::FQualityLevels::SetEffectsQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarEffectsQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->EffectsQuality = iVar2;
  return;
}

// SetFoliageQuality @ 1484fba20

void __thiscall Scalability::FQualityLevels::SetFoliageQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarFoliageQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->FoliageQuality = iVar2;
  return;
}

// SetFromSingleQualityLevel @ 1484fba70

void __thiscall
Scalability::FQualityLevels::SetFromSingleQualityLevel(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = GetRenderScaleLevelFromQualityLevel(param_1,EAbsolute);
  this->ResolutionQuality = fVar3;
  iVar1 = (**(code **)(*(longlong *)CVarViewDistanceQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->ViewDistanceQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarAntiAliasingQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->AntiAliasingQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarShadowQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->ShadowQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarGlobalIlluminationQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->GlobalIlluminationQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarReflectionQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->ReflectionQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarPostProcessQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->PostProcessQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarTextureQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->TextureQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarEffectsQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->EffectsQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarFoliageQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->FoliageQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarShadingQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->ShadingQuality = iVar1;
  iVar1 = (**(code **)(*(longlong *)CVarLandscapeQuality_NumLevels._padding_ + 200))();
  iVar2 = iVar1 + -1;
  if (param_1 < iVar1 + -1) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->LandscapeQuality = iVar1;
  return;
}

// SetFromSingleQualityLevelRelativeToMax @ 1484fbc30

void __thiscall
Scalability::FQualityLevels::SetFromSingleQualityLevelRelativeToMax
          (FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = GetRenderScaleLevelFromQualityLevel(param_1,ERelativeToMax);
  this->ResolutionQuality = fVar5;
  iVar1 = param_1 + 1;
  iVar2 = (**(code **)(*(longlong *)CVarViewDistanceQuality_NumLevels._padding_ + 200))();
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->ViewDistanceQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarAntiAliasingQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->AntiAliasingQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarShadowQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->ShadowQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarGlobalIlluminationQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->GlobalIlluminationQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarReflectionQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->ReflectionQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarPostProcessQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->PostProcessQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarTextureQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->TextureQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarEffectsQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->EffectsQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarFoliageQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->FoliageQuality = iVar3;
  iVar2 = (**(code **)(*(longlong *)CVarShadingQuality_NumLevels._padding_ + 200))();
  iVar3 = iVar4;
  if (0 < iVar2 - iVar1) {
    iVar3 = iVar2 - iVar1;
  }
  this->ShadingQuality = iVar3;
  iVar3 = (**(code **)(*(longlong *)CVarLandscapeQuality_NumLevels._padding_ + 200))();
  if (0 < iVar3 - iVar1) {
    iVar4 = iVar3 - iVar1;
  }
  this->LandscapeQuality = iVar4;
  return;
}

// SetGlobalIlluminationQuality @ 1484fbdb0

void __thiscall
Scalability::FQualityLevels::SetGlobalIlluminationQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarGlobalIlluminationQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->GlobalIlluminationQuality = iVar2;
  return;
}

// SetLandscapeQuality @ 1484fbf50

void __thiscall Scalability::FQualityLevels::SetLandscapeQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarLandscapeQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->LandscapeQuality = iVar2;
  return;
}

// SetPostProcessQuality @ 1484fc200

void __thiscall Scalability::FQualityLevels::SetPostProcessQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarPostProcessQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->PostProcessQuality = iVar2;
  return;
}

// SetReflectionQuality @ 1484fcc00

void __thiscall Scalability::FQualityLevels::SetReflectionQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarReflectionQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->ReflectionQuality = iVar2;
  return;
}

// SetShadingQuality @ 1484fcc50

void __thiscall Scalability::FQualityLevels::SetShadingQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarShadingQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->ShadingQuality = iVar2;
  return;
}

// SetShadowQuality @ 1484fcca0

void __thiscall Scalability::FQualityLevels::SetShadowQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarShadowQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->ShadowQuality = iVar2;
  return;
}

// SetTextureQuality @ 1484fccf0

void __thiscall Scalability::FQualityLevels::SetTextureQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarTextureQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->TextureQuality = iVar2;
  return;
}

// SetViewDistanceQuality @ 1484fcd40

void __thiscall
Scalability::FQualityLevels::SetViewDistanceQuality(FQualityLevels *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(longlong *)CVarViewDistanceQuality_NumLevels._padding_ + 200))();
  iVar1 = iVar2 + -1;
  if (param_1 < iVar2 + -1) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  this->ViewDistanceQuality = iVar2;
  return;
}

