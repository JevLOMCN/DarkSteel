// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAutomationScreenshotData @ 148805510

FAutomationScreenshotData * __thiscall
FAutomationScreenshotData::FAutomationScreenshotData(FAutomationScreenshotData *this)

{
  (this->ScreenShotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenShotName).Data.ArrayNum = 0;
  (this->ScreenShotName).Data.ArrayMax = 0;
  (this->VariantName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariantName).Data.ArrayNum = 0;
  (this->VariantName).Data.ArrayMax = 0;
  (this->Context).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Data.ArrayNum = 0;
  (this->Context).Data.ArrayMax = 0;
  (this->TestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestName).Data.ArrayNum = 0;
  (this->TestName).Data.ArrayMax = 0;
  (this->Notes).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Notes).Data.ArrayNum = 0;
  (this->Notes).Data.ArrayMax = 0;
  (this->Id).A = 0;
  (this->Id).B = 0;
  (this->Id).C = 0;
  (this->Id).D = 0;
  (this->Commit).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commit).Data.ArrayNum = 0;
  (this->Commit).Data.ArrayMax = 0;
  this->Width = 0;
  this->Height = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  (this->Rhi).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rhi).Data.ArrayNum = 0;
  (this->Rhi).Data.ArrayMax = 0;
  (this->FeatureLevel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeatureLevel).Data.ArrayNum = 0;
  (this->FeatureLevel).Data.ArrayMax = 0;
  this->bIsStereo = false;
  this->bIsSubstrate = false;
  (this->Vendor).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vendor).Data.ArrayNum = 0;
  (this->Vendor).Data.ArrayMax = 0;
  (this->AdapterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdapterName).Data.ArrayNum = 0;
  (this->AdapterName).Data.ArrayMax = 0;
  (this->AdapterInternalDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdapterInternalDriverVersion).Data.ArrayNum = 0;
  (this->AdapterInternalDriverVersion).Data.ArrayMax = 0;
  (this->AdapterUserDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdapterUserDriverVersion).Data.ArrayNum = 0;
  (this->AdapterUserDriverVersion).Data.ArrayMax = 0;
  (this->UniqueDeviceId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueDeviceId).Data.ArrayNum = 0;
  (this->UniqueDeviceId).Data.ArrayMax = 0;
  this->AntiAliasingQuality = 0;
  this->ShadowQuality = 0;
  this->GlobalIlluminationQuality = 0;
  this->ReflectionQuality = 0;
  this->PostProcessQuality = 0;
  this->TextureQuality = 0;
  this->EffectsQuality = 0;
  this->FoliageQuality = 0;
  this->ShadingQuality = 0;
  this->bHasComparisonRules = false;
  this->ToleranceRed = '\0';
  this->ToleranceGreen = '\0';
  this->ToleranceBlue = '\0';
  this->ToleranceAlpha = '\0';
  this->ToleranceMinBrightness = '\0';
  this->MaximumLocalError = 0.0;
  this->MaximumGlobalError = 0.0;
  this->bIgnoreAntiAliasing = false;
  this->bIgnoreColors = false;
  (this->ScreenshotPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotPath).Data.ArrayNum = 0;
  (this->ScreenshotPath).Data.ArrayMax = 0;
  this->ResolutionQuality = 1.0;
  this->ViewDistanceQuality = 0;
  this->ToleranceMaxBrightness = 0xff;
  return this;
}

// ~FAutomationScreenshotData @ 14880bd60

void __thiscall
FAutomationScreenshotData::~FAutomationScreenshotData(FAutomationScreenshotData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ScreenshotPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UniqueDeviceId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdapterUserDriverVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdapterInternalDriverVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdapterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vendor).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FeatureLevel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Rhi).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platform).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Commit).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Notes).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TestName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Context).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VariantName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScreenShotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14880db30

FAutomationScreenshotData * __thiscall
FAutomationScreenshotData::operator=
          (FAutomationScreenshotData *this,FAutomationScreenshotData *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FString *pFVar6;
  
  if (this != param_1) {
    pFVar2 = (this->ScreenShotName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ScreenShotName).Data.AllocatorInstance.Data =
         (param_1->ScreenShotName).Data.AllocatorInstance.Data;
    (param_1->ScreenShotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ScreenShotName).Data.ArrayNum = (param_1->ScreenShotName).Data.ArrayNum;
    (this->ScreenShotName).Data.ArrayMax = (param_1->ScreenShotName).Data.ArrayMax;
    (param_1->ScreenShotName).Data.ArrayNum = 0;
    (param_1->ScreenShotName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->VariantName;
  pFVar6 = &this->VariantName;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VariantName).Data.ArrayNum = (param_1->VariantName).Data.ArrayNum;
    (this->VariantName).Data.ArrayMax = (param_1->VariantName).Data.ArrayMax;
    (param_1->VariantName).Data.ArrayNum = 0;
    (param_1->VariantName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Context;
  pFVar6 = &this->Context;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Context).Data.ArrayNum = (param_1->Context).Data.ArrayNum;
    (this->Context).Data.ArrayMax = (param_1->Context).Data.ArrayMax;
    (param_1->Context).Data.ArrayNum = 0;
    (param_1->Context).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->TestName;
  pFVar6 = &this->TestName;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TestName).Data.ArrayNum = (param_1->TestName).Data.ArrayNum;
    (this->TestName).Data.ArrayMax = (param_1->TestName).Data.ArrayMax;
    (param_1->TestName).Data.ArrayNum = 0;
    (param_1->TestName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Notes;
  pFVar6 = &this->Notes;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Notes).Data.ArrayNum = (param_1->Notes).Data.ArrayNum;
    (this->Notes).Data.ArrayMax = (param_1->Notes).Data.ArrayMax;
    (param_1->Notes).Data.ArrayNum = 0;
    (param_1->Notes).Data.ArrayMax = 0;
  }
  uVar3 = (param_1->Id).B;
  uVar4 = (param_1->Id).C;
  uVar5 = (param_1->Id).D;
  pFVar1 = &param_1->Commit;
  pFVar6 = &this->Commit;
  (this->Id).A = (param_1->Id).A;
  (this->Id).B = uVar3;
  (this->Id).C = uVar4;
  (this->Id).D = uVar5;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Commit).Data.ArrayNum = (param_1->Commit).Data.ArrayNum;
    (this->Commit).Data.ArrayMax = (param_1->Commit).Data.ArrayMax;
    (param_1->Commit).Data.ArrayNum = 0;
    (param_1->Commit).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Platform;
  pFVar6 = &this->Platform;
  this->Width = param_1->Width;
  this->Height = param_1->Height;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Platform).Data.ArrayNum = (param_1->Platform).Data.ArrayNum;
    (this->Platform).Data.ArrayMax = (param_1->Platform).Data.ArrayMax;
    (param_1->Platform).Data.ArrayNum = 0;
    (param_1->Platform).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Rhi;
  pFVar6 = &this->Rhi;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Rhi).Data.ArrayNum = (param_1->Rhi).Data.ArrayNum;
    (this->Rhi).Data.ArrayMax = (param_1->Rhi).Data.ArrayMax;
    (param_1->Rhi).Data.ArrayNum = 0;
    (param_1->Rhi).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->FeatureLevel;
  pFVar6 = &this->FeatureLevel;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FeatureLevel).Data.ArrayNum = (param_1->FeatureLevel).Data.ArrayNum;
    (this->FeatureLevel).Data.ArrayMax = (param_1->FeatureLevel).Data.ArrayMax;
    (param_1->FeatureLevel).Data.ArrayNum = 0;
    (param_1->FeatureLevel).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->Vendor;
  this->bIsStereo = param_1->bIsStereo;
  pFVar6 = &this->Vendor;
  this->bIsSubstrate = param_1->bIsSubstrate;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Vendor).Data.ArrayNum = (param_1->Vendor).Data.ArrayNum;
    (this->Vendor).Data.ArrayMax = (param_1->Vendor).Data.ArrayMax;
    (param_1->Vendor).Data.ArrayNum = 0;
    (param_1->Vendor).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AdapterName;
  pFVar6 = &this->AdapterName;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AdapterName).Data.ArrayNum = (param_1->AdapterName).Data.ArrayNum;
    (this->AdapterName).Data.ArrayMax = (param_1->AdapterName).Data.ArrayMax;
    (param_1->AdapterName).Data.ArrayNum = 0;
    (param_1->AdapterName).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AdapterInternalDriverVersion;
  pFVar6 = &this->AdapterInternalDriverVersion;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AdapterInternalDriverVersion).Data.ArrayNum =
         (param_1->AdapterInternalDriverVersion).Data.ArrayNum;
    (this->AdapterInternalDriverVersion).Data.ArrayMax =
         (param_1->AdapterInternalDriverVersion).Data.ArrayMax;
    (param_1->AdapterInternalDriverVersion).Data.ArrayNum = 0;
    (param_1->AdapterInternalDriverVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->AdapterUserDriverVersion;
  pFVar6 = &this->AdapterUserDriverVersion;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AdapterUserDriverVersion).Data.ArrayNum =
         (param_1->AdapterUserDriverVersion).Data.ArrayNum;
    (this->AdapterUserDriverVersion).Data.ArrayMax =
         (param_1->AdapterUserDriverVersion).Data.ArrayMax;
    (param_1->AdapterUserDriverVersion).Data.ArrayNum = 0;
    (param_1->AdapterUserDriverVersion).Data.ArrayMax = 0;
  }
  pFVar1 = &param_1->UniqueDeviceId;
  pFVar6 = &this->UniqueDeviceId;
  if (pFVar6 != pFVar1) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->UniqueDeviceId).Data.ArrayNum = (param_1->UniqueDeviceId).Data.ArrayNum;
    (this->UniqueDeviceId).Data.ArrayMax = (param_1->UniqueDeviceId).Data.ArrayMax;
    (param_1->UniqueDeviceId).Data.ArrayNum = 0;
    (param_1->UniqueDeviceId).Data.ArrayMax = 0;
  }
  pFVar1 = &this->ScreenshotPath;
  this->ResolutionQuality = param_1->ResolutionQuality;
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
  this->bHasComparisonRules = param_1->bHasComparisonRules;
  this->ToleranceRed = param_1->ToleranceRed;
  this->ToleranceGreen = param_1->ToleranceGreen;
  this->ToleranceBlue = param_1->ToleranceBlue;
  this->ToleranceAlpha = param_1->ToleranceAlpha;
  this->ToleranceMinBrightness = param_1->ToleranceMinBrightness;
  this->ToleranceMaxBrightness = param_1->ToleranceMaxBrightness;
  this->MaximumLocalError = param_1->MaximumLocalError;
  this->MaximumGlobalError = param_1->MaximumGlobalError;
  this->bIgnoreAntiAliasing = param_1->bIgnoreAntiAliasing;
  pFVar6 = &param_1->ScreenshotPath;
  this->bIgnoreColors = param_1->bIgnoreColors;
  if (pFVar1 != pFVar6) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ScreenshotPath).Data.ArrayNum = (param_1->ScreenshotPath).Data.ArrayNum;
    (this->ScreenshotPath).Data.ArrayMax = (param_1->ScreenshotPath).Data.ArrayMax;
    (param_1->ScreenshotPath).Data.ArrayNum = 0;
    (param_1->ScreenshotPath).Data.ArrayMax = 0;
  }
  return this;
}

