// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 3

// StaticStruct @ 148c705a0

UScriptStruct * __cdecl FAutomationScreenshotOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotOptions,(UObject *)pUVar1,
                         L"AutomationScreenshotOptions");
  }
  return Z_Registration_Info_UScriptStruct_FAutomationScreenshotOptions.OuterSingleton;
}

// FAutomationScreenshotOptions @ 148c7edc0

FAutomationScreenshotOptions * __thiscall
FAutomationScreenshotOptions::FAutomationScreenshotOptions
          (FAutomationScreenshotOptions *this,FAutomationScreenshotOptions *param_1)

{
  UAutomationViewSettings *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  
  dVar2 = (param_1->Resolution).field0_0x0._s_0.Y;
  (this->Resolution).field0_0x0._s_0.X = (param_1->Resolution).field0_0x0._s_0.X;
  (this->Resolution).field0_0x0._s_0.Y = dVar2;
  this->Delay = param_1->Delay;
  this->FrameDelay = param_1->FrameDelay;
  this->bOverride_OverrideTimeTo = param_1->bOverride_OverrideTimeTo;
  this->OverrideTimeTo = param_1->OverrideTimeTo;
  this->bDisableNoisyRenderingFeatures = param_1->bDisableNoisyRenderingFeatures;
  this->bDisableTonemapping = param_1->bDisableTonemapping;
  pUVar1 = (param_1->ViewSettings).field0_0x0.DebugPtr;
  (this->ViewSettings).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UAutomationViewSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->VisualizeBuffer = param_1->VisualizeBuffer;
  this->Tolerance = param_1->Tolerance;
  uVar3 = (param_1->ToleranceAmount).Green;
  uVar4 = (param_1->ToleranceAmount).Blue;
  uVar5 = (param_1->ToleranceAmount).Alpha;
  (this->ToleranceAmount).Red = (param_1->ToleranceAmount).Red;
  (this->ToleranceAmount).Green = uVar3;
  (this->ToleranceAmount).Blue = uVar4;
  (this->ToleranceAmount).Alpha = uVar5;
  uVar3 = (param_1->ToleranceAmount).MaxBrightness;
  (this->ToleranceAmount).MinBrightness = (param_1->ToleranceAmount).MinBrightness;
  (this->ToleranceAmount).MaxBrightness = uVar3;
  this->MaximumLocalError = param_1->MaximumLocalError;
  this->MaximumGlobalError = param_1->MaximumGlobalError;
  this->bIgnoreAntiAliasing = param_1->bIgnoreAntiAliasing;
  this->bIgnoreColors = param_1->bIgnoreColors;
  this->bAllowEmulatingSplitscreen = param_1->bAllowEmulatingSplitscreen;
  return this;
}

// operator= @ 148c81490

FAutomationScreenshotOptions * __thiscall
FAutomationScreenshotOptions::operator=
          (FAutomationScreenshotOptions *this,FAutomationScreenshotOptions *param_1)

{
  UAutomationViewSettings *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  
  dVar2 = (param_1->Resolution).field0_0x0._s_0.Y;
  (this->Resolution).field0_0x0._s_0.X = (param_1->Resolution).field0_0x0._s_0.X;
  (this->Resolution).field0_0x0._s_0.Y = dVar2;
  this->Delay = param_1->Delay;
  this->FrameDelay = param_1->FrameDelay;
  this->bOverride_OverrideTimeTo = param_1->bOverride_OverrideTimeTo;
  this->OverrideTimeTo = param_1->OverrideTimeTo;
  this->bDisableNoisyRenderingFeatures = param_1->bDisableNoisyRenderingFeatures;
  this->bDisableTonemapping = param_1->bDisableTonemapping;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ViewSettings).field0_0x0.DebugPtr, pUVar1 != (UAutomationViewSettings *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ViewSettings).field0_0x0 = (param_1->ViewSettings).field0_0x0;
  this->VisualizeBuffer = param_1->VisualizeBuffer;
  this->Tolerance = param_1->Tolerance;
  uVar3 = (param_1->ToleranceAmount).Green;
  uVar4 = (param_1->ToleranceAmount).Blue;
  uVar5 = (param_1->ToleranceAmount).Alpha;
  (this->ToleranceAmount).Red = (param_1->ToleranceAmount).Red;
  (this->ToleranceAmount).Green = uVar3;
  (this->ToleranceAmount).Blue = uVar4;
  (this->ToleranceAmount).Alpha = uVar5;
  uVar3 = (param_1->ToleranceAmount).MaxBrightness;
  (this->ToleranceAmount).MinBrightness = (param_1->ToleranceAmount).MinBrightness;
  (this->ToleranceAmount).MaxBrightness = uVar3;
  this->MaximumLocalError = param_1->MaximumLocalError;
  this->MaximumGlobalError = param_1->MaximumGlobalError;
  this->bIgnoreAntiAliasing = param_1->bIgnoreAntiAliasing;
  this->bIgnoreColors = param_1->bIgnoreColors;
  this->bAllowEmulatingSplitscreen = param_1->bAllowEmulatingSplitscreen;
  return this;
}

