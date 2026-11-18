// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// FAutomationScreenshotMetadata @ 148c3d150

FAutomationScreenshotMetadata * __thiscall
FAutomationScreenshotMetadata::FAutomationScreenshotMetadata
          (FAutomationScreenshotMetadata *this,FAutomationScreenshotMetadata *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  ::FString::FString(&this->ScreenShotName,&param_1->ScreenShotName);
  ::FString::FString(&this->VariantName,&param_1->VariantName);
  ::FString::FString(&this->Context,&param_1->Context);
  ::FString::FString(&this->TestName,&param_1->TestName);
  ::FString::FString(&this->Notes,&param_1->Notes);
  uVar1 = (param_1->Id).B;
  uVar2 = (param_1->Id).C;
  uVar3 = (param_1->Id).D;
  (this->Id).A = (param_1->Id).A;
  (this->Id).B = uVar1;
  (this->Id).C = uVar2;
  (this->Id).D = uVar3;
  ::FString::FString(&this->Commit,&param_1->Commit);
  this->Width = param_1->Width;
  this->Height = param_1->Height;
  ::FString::FString(&this->Rhi,&param_1->Rhi);
  ::FString::FString(&this->Platform,&param_1->Platform);
  ::FString::FString(&this->FeatureLevel,&param_1->FeatureLevel);
  this->bIsStereo = param_1->bIsStereo;
  this->bIsSubstrate = param_1->bIsSubstrate;
  ::FString::FString(&this->Vendor,&param_1->Vendor);
  ::FString::FString(&this->AdapterName,&param_1->AdapterName);
  ::FString::FString(&this->AdapterInternalDriverVersion,&param_1->AdapterInternalDriverVersion);
  ::FString::FString(&this->AdapterUserDriverVersion,&param_1->AdapterUserDriverVersion);
  ::FString::FString(&this->UniqueDeviceId,&param_1->UniqueDeviceId);
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

// Compare @ 148c41e20

int __thiscall
FAutomationScreenshotMetadata::Compare
          (FAutomationScreenshotMetadata *this,FAutomationScreenshotMetadata *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (((this->Width == param_1->Width) && (this->Height == param_1->Height)) &&
     (this->bIsStereo == param_1->bIsStereo)) {
    iVar2 = (this->Vendor).Data.ArrayNum;
    iVar4 = 0x44c;
    if (this->bIsSubstrate != param_1->bIsSubstrate) {
      iVar4 = 1000;
    }
    iVar1 = (param_1->Vendor).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->Vendor).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Vendor).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar2 + iVar1 == 1;
    }
    iVar2 = (param_1->FeatureLevel).Data.ArrayNum;
    iVar1 = (this->FeatureLevel).Data.ArrayNum;
    iVar3 = iVar4 + 100;
    if (!bVar5) {
      iVar3 = iVar4;
    }
    if (iVar1 == iVar2) {
      if (iVar1 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->FeatureLevel).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->FeatureLevel).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar1 + iVar2 == 1;
    }
    iVar2 = (param_1->UniqueDeviceId).Data.ArrayNum;
    iVar4 = (this->UniqueDeviceId).Data.ArrayNum;
    iVar1 = iVar3 + 100;
    if (!bVar5) {
      iVar1 = iVar3;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->UniqueDeviceId).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->UniqueDeviceId).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = (param_1->Rhi).Data.ArrayNum;
    iVar4 = (this->Rhi).Data.ArrayNum;
    iVar3 = iVar1 + 100;
    if (!bVar5) {
      iVar3 = iVar1;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->Rhi).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Rhi).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = (param_1->Platform).Data.ArrayNum;
    iVar4 = (this->Platform).Data.ArrayNum;
    iVar1 = iVar3 + 100;
    if (!bVar5) {
      iVar1 = iVar3;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->Platform).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Platform).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = (param_1->AdapterName).Data.ArrayNum;
    iVar4 = (this->AdapterName).Data.ArrayNum;
    iVar3 = iVar1 + 10;
    if (!bVar5) {
      iVar3 = iVar1;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->AdapterName).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->AdapterName).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = (param_1->AdapterInternalDriverVersion).Data.ArrayNum;
    iVar4 = (this->AdapterInternalDriverVersion).Data.ArrayNum;
    iVar1 = iVar3 + 10;
    if (!bVar5) {
      iVar1 = iVar3;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)
                           (this->AdapterInternalDriverVersion).Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (param_1->AdapterInternalDriverVersion).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = (param_1->AdapterUserDriverVersion).Data.ArrayNum;
    iVar4 = (this->AdapterUserDriverVersion).Data.ArrayNum;
    iVar3 = iVar1 + 10;
    if (!bVar5) {
      iVar3 = iVar1;
    }
    if (iVar4 == iVar2) {
      if (iVar4 < 2) {
        bVar5 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->AdapterUserDriverVersion).Data.AllocatorInstance.Data,
                           (wchar_t *)
                           (param_1->AdapterUserDriverVersion).Data.AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
      }
    }
    else {
      bVar5 = iVar4 + iVar2 == 1;
    }
    iVar2 = iVar3 + 10;
    if (!bVar5) {
      iVar2 = iVar3;
    }
    if (param_1->ResolutionQuality == this->ResolutionQuality) {
      iVar2 = iVar2 + 10;
    }
    iVar4 = iVar2 + 10;
    if (this->ViewDistanceQuality != param_1->ViewDistanceQuality) {
      iVar4 = iVar2;
    }
    iVar2 = iVar4 + 10;
    if (this->AntiAliasingQuality != param_1->AntiAliasingQuality) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2 + 10;
    if (this->ShadowQuality != param_1->ShadowQuality) {
      iVar4 = iVar2;
    }
    iVar2 = iVar4 + 10;
    if (this->GlobalIlluminationQuality != param_1->GlobalIlluminationQuality) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2 + 10;
    if (this->ReflectionQuality != param_1->ReflectionQuality) {
      iVar4 = iVar2;
    }
    iVar2 = iVar4 + 10;
    if (this->PostProcessQuality != param_1->PostProcessQuality) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2 + 10;
    if (this->TextureQuality != param_1->TextureQuality) {
      iVar4 = iVar2;
    }
    iVar2 = iVar4 + 10;
    if (this->EffectsQuality != param_1->EffectsQuality) {
      iVar2 = iVar4;
    }
    iVar4 = iVar2 + 10;
    if (this->FoliageQuality != param_1->FoliageQuality) {
      iVar4 = iVar2;
    }
    return iVar4;
  }
  return 0;
}

