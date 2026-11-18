// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// CorrectNewResolutionFraction @ 145d1ade0

float __thiscall
DynamicRenderScaling::FHeuristicSettings::CorrectNewResolutionFraction
          (FHeuristicSettings *this,float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 < param_2) {
    param_2 = (param_2 - param_1) * this->IncreaseAmortizationFactor + param_1;
  }
  fVar1 = this->MinResolutionFraction;
  fVar2 = this->MaxResolutionFraction * param_3;
  fVar3 = param_3 * fVar1;
  if (this->FractionQuantization < 1) {
    if (param_2 <= fVar2) {
      fVar2 = param_2;
    }
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    return fVar2;
  }
  fVar2 = (param_2 - fVar3) / (fVar2 - fVar3);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return (fVar2 * (this->MaxResolutionFraction - fVar1) + fVar1) * param_3;
}

// DoesResolutionChangeEnough @ 145d1cf20

bool __thiscall
DynamicRenderScaling::FHeuristicSettings::DoesResolutionChangeEnough
          (FHeuristicSettings *this,float param_1,float param_2,bool param_3)

{
  float fVar1;
  
  fVar1 = this->ChangeThreshold;
  if ((fVar1 != 0.0) &&
     ((!param_3 ||
      (((param_2 <= (fVar1 + __real_3f800000) * param_1 &&
        ((__real_3f800000 - fVar1) * param_1 <= param_2)) &&
       ((param_2 == param_1 ||
        ((param_2 != this->MinResolutionFraction && (param_2 != this->MaxResolutionFraction)))))))))
     ) {
    return false;
  }
  return true;
}

// EstimateCostScale @ 145d21090

float __thiscall
DynamicRenderScaling::FHeuristicSettings::EstimateCostScale(FHeuristicSettings *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->Model != Linear) {
    if (this->Model == Quadratic) {
      return param_1 * param_1;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicRenderScaling.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return param_1;
}

// EstimateResolutionFactor @ 145d21100

float __thiscall
DynamicRenderScaling::FHeuristicSettings::EstimateResolutionFactor
          (FHeuristicSettings *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  if (this->Model == Linear) {
    return param_1 / param_2;
  }
  if (this->Model == Quadratic) {
    return SQRT(param_1 / param_2);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicRenderScaling.cpp"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return fVar3;
}

// EstimateTimeFactor @ 145d21180

float __thiscall
DynamicRenderScaling::FHeuristicSettings::EstimateTimeFactor
          (FHeuristicSettings *this,float param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = param_2 / param_1;
  if (this->Model != Linear) {
    if (this->Model != Quadratic) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Unimplemented function called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicRenderScaling.cpp"
                         ,0x75,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
      return __real_3f800000;
    }
    fVar3 = fVar3 * fVar3;
  }
  return fVar3;
}

// GetTargetedMs @ 145d406c0

float __thiscall
DynamicRenderScaling::FHeuristicSettings::GetTargetedMs(FHeuristicSettings *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->BudgetMs <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnabled()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DynamicRenderScaling.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (__real_3f800000 - this->TargetedHeadRoom) * param_1;
}

// IsEnabled @ 145d448e0

bool __thiscall DynamicRenderScaling::FHeuristicSettings::IsEnabled(FHeuristicSettings *this)

{
  return 0.0 < this->BudgetMs;
}

