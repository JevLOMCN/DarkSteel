// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 1

// FAutomationScreenshotMetadata @ 148bfe250

FAutomationScreenshotMetadata * __thiscall
FAutomationScreenshotMetadata::FAutomationScreenshotMetadata
          (FAutomationScreenshotMetadata *this,FAutomationScreenshotData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
  (this->Rhi).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rhi).Data.ArrayNum = 0;
  (this->Rhi).Data.ArrayMax = 0;
  (this->Platform).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Platform).Data.ArrayNum = 0;
  (this->Platform).Data.ArrayMax = 0;
  (this->FeatureLevel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeatureLevel).Data.ArrayNum = 0;
  (this->FeatureLevel).Data.ArrayMax = 0;
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
  ::FString::operator=(&this->ScreenShotName,&param_1->ScreenShotName);
  ::FString::operator=(&this->VariantName,&param_1->VariantName);
  ::FString::operator=(&this->Context,&param_1->Context);
  ::FString::operator=(&this->TestName,&param_1->TestName);
  ::FString::operator=(&this->Notes,&param_1->Notes);
  uVar1 = (param_1->Id).B;
  uVar2 = (param_1->Id).C;
  uVar3 = (param_1->Id).D;
  (this->Id).A = (param_1->Id).A;
  (this->Id).B = uVar1;
  (this->Id).C = uVar2;
  (this->Id).D = uVar3;
  ::FString::operator=(&this->Commit,&param_1->Commit);
  this->Width = param_1->Width;
  this->Height = param_1->Height;
  ::FString::operator=(&this->Rhi,&param_1->Rhi);
  ::FString::operator=(&this->Platform,&param_1->Platform);
  ::FString::operator=(&this->FeatureLevel,&param_1->FeatureLevel);
  this->bIsStereo = param_1->bIsStereo;
  this->bIsSubstrate = param_1->bIsSubstrate;
  ::FString::operator=(&this->Vendor,&param_1->Vendor);
  ::FString::operator=(&this->AdapterName,&param_1->AdapterName);
  ::FString::operator=(&this->AdapterInternalDriverVersion,&param_1->AdapterInternalDriverVersion);
  ::FString::operator=(&this->AdapterUserDriverVersion,&param_1->AdapterUserDriverVersion);
  ::FString::operator=(&this->UniqueDeviceId,&param_1->UniqueDeviceId);
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
  this->bIgnoreColors = param_1->bIgnoreColors;
  return this;
}

