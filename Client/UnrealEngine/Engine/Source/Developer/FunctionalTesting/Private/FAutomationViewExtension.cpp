// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 3

// GetPriority @ 148c91070

int __thiscall FAutomationViewExtension::GetPriority(FAutomationViewExtension *this)

{
  return -0x80000000;
}

// SetupView @ 148c9cac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAutomationViewExtension::SetupView
          (FAutomationViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  return;
}

// SetupViewFamily @ 148c9cad0

void __thiscall
FAutomationViewExtension::SetupViewFamily(FAutomationViewExtension *this,FSceneViewFamily *param_1)

{
  FEngineShowFlags *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  double dVar4;
  uint uVar5;
  UAutomationViewSettings *pUVar6;
  
  pUVar6 = (this->Options).ViewSettings.field0_0x0.DebugPtr;
  if (pUVar6 != (UAutomationViewSettings *)0x0) {
    (param_1->EngineShowFlags).AntiAliasing = -(uint)(pUVar6->AntiAliasing != false) >> 4;
    (param_1->EngineShowFlags).MotionBlur = -(uint)(pUVar6->MotionBlur != false) >> 9;
    (param_1->EngineShowFlags).TemporalAA = -(uint)(pUVar6->TemporalAA != false) >> 5;
    (param_1->EngineShowFlags).ScreenSpaceReflections =
         -(uint)(pUVar6->ScreenSpaceReflections != false) >> 2;
    (param_1->EngineShowFlags).ScreenSpaceAO = -(uint)(pUVar6->ScreenSpaceAO != false) >> 7;
    (param_1->EngineShowFlags).DistanceFieldAO = -(uint)(pUVar6->DistanceFieldAO != false) >> 8;
    (param_1->EngineShowFlags).ContactShadows = -(uint)(pUVar6->ContactShadows != false) >> 4;
    (param_1->EngineShowFlags).EyeAdaptation = -(uint)(pUVar6->EyeAdaptation != false) >> 7;
    (param_1->EngineShowFlags).Bloom = -(uint)(pUVar6->Bloom != false) >> 1;
  }
  if ((this->Options).bOverride_OverrideTimeTo != false) {
    dVar4 = (this->Options).OverrideTimeTo;
    (param_1->Time).RealTimeSeconds = dVar4;
    (param_1->Time).WorldTimeSeconds = dVar4;
    (param_1->Time).DeltaRealTimeSeconds = 0.0;
    (param_1->Time).DeltaWorldTimeSeconds = 0.0;
  }
  return;
}

