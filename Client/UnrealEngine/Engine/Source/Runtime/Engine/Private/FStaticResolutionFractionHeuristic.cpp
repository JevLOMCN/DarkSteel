// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FStaticResolutionFractionHeuristic @ 147e54d40

FStaticResolutionFractionHeuristic * __thiscall
FStaticResolutionFractionHeuristic::FStaticResolutionFractionHeuristic
          (FStaticResolutionFractionHeuristic *this,FEngineShowFlags *param_1)

{
  (this->Settings).GlobalResolutionFraction = 1.0;
  (this->Settings).MinRenderingResolution = 0.0;
  (this->Settings).Mode = Manual;
  (this->Settings).MaxRenderingResolution = 0.0;
  this->TotalDisplayedPixelCount = 0;
  (this->Settings).AutoPixelCountMultiplier = 1.0;
  (this->Settings).bAllowDisplayBasedScreenPercentageMode = true;
  this->SecondaryViewFraction = 1.0;
  this->DPIScale = 1.0;
  if ((param_1->StereoRendering == 0) && (param_1->VREditing == 0)) {
    (this->Settings).bAllowDisplayBasedScreenPercentageMode = true;
    return this;
  }
  (this->Settings).bAllowDisplayBasedScreenPercentageMode = false;
  return this;
}

// PullViewFamilyRenderingSettings @ 147e76670

void __thiscall
FStaticResolutionFractionHeuristic::PullViewFamilyRenderingSettings
          (FStaticResolutionFractionHeuristic *this,FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((param_1->Views).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily.Views.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x153,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->SecondaryViewFraction = param_1->SecondaryViewFraction;
  this->TotalDisplayedPixelCount = 0;
  pFVar6 = (param_1->Views).AllocatorInstance.Data;
  iVar2 = (param_1->Views).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Views).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    this->TotalDisplayedPixelCount =
         this->TotalDisplayedPixelCount +
         (*(int *)(lVar3 + 0x123c) - *(int *)(lVar3 + 0x1234)) *
         (*(int *)(lVar3 + 0x1238) - *(int *)(lVar3 + 0x1230));
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// ResolveResolutionFraction @ 147e7c320

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FStaticResolutionFractionHeuristic::ResolveResolutionFraction
          (FStaticResolutionFractionHeuristic *this)

{
  EScreenPercentageMode EVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar10 = __real_3fe38e39;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_3f800000;
  iVar5 = 1;
  if (1 < this->TotalDisplayedPixelCount) {
    iVar5 = this->TotalDisplayedPixelCount;
  }
  fVar14 = (float)iVar5 * this->SecondaryViewFraction * this->SecondaryViewFraction;
  if ((this->Settings).bAllowDisplayBasedScreenPercentageMode != false) {
    EVar1 = (this->Settings).Mode;
    if (EVar1 == BasedOnDisplayResolution) {
      if (!bInitPixelCount) {
        bVar4 = FConfigCacheIni::GetFloat
                          (GConfig,L"Rendering.AutoScreenPercentage",L"MinDisplayResolution",
                           &AutoMinDisplayResolution,&GEngineIni);
        if (((((!bVar4) ||
              (bVar4 = FConfigCacheIni::GetFloat
                                 (GConfig,L"Rendering.AutoScreenPercentage",L"MidDisplayResolution",
                                  &AutoMidDisplayResolution,&GEngineIni), !bVar4)) ||
             (bVar4 = FConfigCacheIni::GetFloat
                                (GConfig,L"Rendering.AutoScreenPercentage",L"MaxDisplayResolution",
                                 &AutoMaxDisplayResolution,&GEngineIni), !bVar4)) ||
            ((bVar4 = FConfigCacheIni::GetFloat
                                (GConfig,L"Rendering.AutoScreenPercentage",L"MinRenderingResolution"
                                 ,&AutoMinRenderingResolution,&GEngineIni), !bVar4 ||
             (bVar4 = FConfigCacheIni::GetFloat
                                (GConfig,L"Rendering.AutoScreenPercentage",L"MidRenderingResolution"
                                 ,&AutoMidRenderingResolution,&GEngineIni), !bVar4)))) ||
           (bVar4 = FConfigCacheIni::GetFloat
                              (GConfig,L"Rendering.AutoScreenPercentage",L"MaxRenderingResolution",
                               &AutoMaxRenderingResolution,&GEngineIni), !bVar4)) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogEngine);
        }
        bInitPixelCount = true;
      }
      fVar11 = (float)((uint)AutoMinDisplayResolution & uVar3) * AutoMinDisplayResolution * fVar10;
      if (fVar11 <= fVar14) {
        fVar7 = (float)((uint)AutoMaxDisplayResolution & uVar3) * AutoMaxDisplayResolution * fVar10;
        if (fVar14 <= fVar7) {
          fVar12 = (float)((uint)AutoMidDisplayResolution & uVar3) * AutoMidDisplayResolution *
                   fVar10;
          fVar8 = (float)((uint)AutoMidRenderingResolution & uVar3) * AutoMidRenderingResolution *
                  fVar10;
          fVar9 = fVar8;
          fVar13 = (float)((uint)AutoMinRenderingResolution & uVar3) * AutoMinRenderingResolution *
                   fVar10;
          if (fVar12 < fVar14) {
            fVar9 = (float)((uint)AutoMaxRenderingResolution & uVar3) * AutoMaxRenderingResolution *
                    fVar10;
            fVar11 = fVar12;
            fVar12 = fVar7;
            fVar13 = fVar8;
          }
          fVar11 = (fVar14 - fVar11) / (fVar12 - fVar11);
          if (fVar6 <= fVar11) {
            fVar11 = fVar6;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          fVar11 = fVar11 * (fVar9 - fVar13) + fVar13;
        }
        else {
          fVar11 = ((float)((uint)AutoMaxRenderingResolution & uVar3) * AutoMaxRenderingResolution *
                    fVar10 * fVar14) / fVar7;
        }
      }
      else {
        fVar11 = ((float)((uint)AutoMinRenderingResolution & uVar3) * AutoMinRenderingResolution *
                  fVar10 * fVar14) / fVar11;
      }
      fVar11 = SQRT((fVar11 * (this->Settings).AutoPixelCountMultiplier) / fVar14);
      goto LAB_147e7c649;
    }
    if (EVar1 == BasedOnDPIScale) {
      fVar11 = __real_3f800000 / this->DPIScale;
      goto LAB_147e7c649;
    }
    if ((EVar1 != Manual) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5564050718022696537>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                           ,0x1a7,"EffectiveScreenPercentageMode == EScreenPercentageMode::Manual"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar11 = (this->Settings).GlobalResolutionFraction;
LAB_147e7c649:
  fVar9 = (float)((uint)(this->Settings).MaxRenderingResolution & uVar3) *
          (this->Settings).MaxRenderingResolution * fVar10;
  fVar7 = fVar11;
  if ((0.0 < fVar9) && (fVar7 = SQRT(fVar9 / fVar14), fVar11 <= fVar7)) {
    fVar7 = fVar11;
  }
  fVar10 = (float)((uint)(this->Settings).MinRenderingResolution & uVar3) *
           (this->Settings).MinRenderingResolution * fVar10;
  if (fVar10 <= 0.0) {
    return fVar7;
  }
  fVar10 = SQRT(fVar10 / fVar14);
  if (fVar6 <= fVar10) {
    fVar10 = fVar6;
  }
  if (fVar10 <= fVar7) {
    fVar10 = fVar7;
  }
  return fVar10;
}

