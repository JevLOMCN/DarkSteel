// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 3

// GetPriority @ 14e7ef550

int __thiscall
FAutomationUtilsGameplayViewExtension::GetPriority(FAutomationUtilsGameplayViewExtension *this)

{
  return -0x80000000;
}

// IsActiveThisFrame_Internal @ 14e7ef960

bool __thiscall
FAutomationUtilsGameplayViewExtension::IsActiveThisFrame_Internal
          (FAutomationUtilsGameplayViewExtension *this,FSceneViewExtensionContext *param_1)

{
  return true;
}

// SetupViewFamily @ 14e7efda0

void __thiscall
FAutomationUtilsGameplayViewExtension::SetupViewFamily
          (FAutomationUtilsGameplayViewExtension *this,FSceneViewFamily *param_1)

{
  undefined1 *puVar1;
  FEngineShowFlags *pFVar2;
  
  (param_1->EngineShowFlags).LightShafts = 0;
  (param_1->EngineShowFlags).StereoRendering = 0;
  (param_1->EngineShowFlags).HMDDistortion = 0;
  (param_1->EngineShowFlags).HighResScreenshotMask = 0;
  (param_1->EngineShowFlags).PostProcessMaterial = 0;
  (param_1->EngineShowFlags).VirtualShadowMapPersistentData = 0;
  (param_1->EngineShowFlags).ShaderPrint = 0;
  (param_1->EngineShowFlags).ColorGrading = 0;
  (param_1->EngineShowFlags).MegaLights = 0;
  (param_1->EngineShowFlags).ScreenPercentage = 0;
  (param_1->EngineShowFlags).SeparateTranslucency = 0;
  (param_1->EngineShowFlags).MotionBlur = 0;
  (param_1->EngineShowFlags).DepthOfField = 0;
  (param_1->EngineShowFlags).ScreenSpaceAO = 0;
  (param_1->EngineShowFlags).VolumetricFog = 0;
  (param_1->EngineShowFlags).LumenGlobalIllumination = 0;
  (param_1->EngineShowFlags).DistanceFieldAO = 0;
  (param_1->EngineShowFlags).ScreenSpaceReflections = 0;
  (param_1->EngineShowFlags).IndirectLightingCache = 0;
  (param_1->EngineShowFlags).VolumetricLightmap = 0;
  (param_1->EngineShowFlags).ContactShadows = 0;
  (param_1->EngineShowFlags).LumenReflections = 0;
  pFVar2->Bloom = 0;
  pFVar2->OnScreenDebug = 0;
  pFVar2->CameraImperfections = 0;
  pFVar2->AmbientOcclusion = 0;
  pFVar2->Grain = 0;
  pFVar2->Vignette = 0;
  pFVar2->LensFlares = 0;
  pFVar2->EyeAdaptation = 0;
  pFVar2->TemporalAA = 0;
  pFVar2->AntiAliasing = 0;
  (param_1->Time).RealTimeSeconds = 0.0;
  (param_1->Time).WorldTimeSeconds = 0.0;
  (param_1->Time).DeltaRealTimeSeconds = 0.0;
  (param_1->Time).DeltaWorldTimeSeconds = 0.0;
  return;
}

