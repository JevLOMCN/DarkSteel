// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticStruct @ 1473c7640

UScriptStruct * __cdecl FAlphaBlend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAlphaBlend.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAlphaBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlend,(UObject *)pUVar1,L"AlphaBlend");
  }
  return Z_Registration_Info_UScriptStruct_FAlphaBlend.OuterSingleton;
}

// FAlphaBlend @ 1473d4890

FAlphaBlend * __thiscall
FAlphaBlend::FAlphaBlend(FAlphaBlend *this,FAlphaBlend *param_1,float param_2)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr;
  (this->CustomCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->BlendTime = param_2;
  this->BeginValue = param_1->BeginValue;
  this->DesiredValue = param_1->DesiredValue;
  this->BlendOption = param_1->BlendOption;
  Reset(this);
  return this;
}

// FAlphaBlend @ 1473d4900

FAlphaBlend * __thiscall FAlphaBlend::FAlphaBlend(FAlphaBlend *this,FAlphaBlendArgs *param_1)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr;
  (this->CustomCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->BlendTime = param_1->BlendTime;
  this->BeginValue = 0.0;
  this->DesiredValue = 1.0;
  this->BlendOption = param_1->BlendOption;
  Reset(this);
  return this;
}

// FAlphaBlend @ 1473d4960

FAlphaBlend * __thiscall FAlphaBlend::FAlphaBlend(FAlphaBlend *this,float param_1)

{
  this->BlendTime = param_1;
  (this->CustomCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->BeginValue = 0.0;
  this->DesiredValue = 1.0;
  this->BlendOption = HermiteCubic;
  Reset(this);
  return this;
}

// AlphaToBlendOption @ 1473e1cb0

float __thiscall FAlphaBlend::AlphaToBlendOption(FAlphaBlend *this)

{
  float fVar1;
  
  fVar1 = AlphaToBlendOption(this->AlphaLerp,this->BlendOption,
                             (this->CustomCurve).field0_0x0.DebugPtr);
  return fVar1;
}

// AlphaToBlendOption @ 1473e1cd0

float __cdecl
FAlphaBlend::AlphaToBlendOption(float param_1,EAlphaBlendOption param_2,UCurveFloat *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res10 [4];
  float local_res20 [2];
  
  fVar1 = __real_3f000000;
  fVar2 = __real_3f800000;
  switch(param_2) {
  case Cubic:
    param_1 = param_1 * param_1 * __real_40400000 - (param_1 + param_1) * param_1 * param_1;
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case HermiteCubic:
    if (0.0 <= param_1) {
      if (param_1 < __real_3f800000) {
        param_1 = (__real_40400000 - (param_1 + param_1)) * param_1 * param_1;
        if (__real_3f800000 <= param_1) {
          param_1 = __real_3f800000;
        }
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
      }
      else {
        param_1 = __real_3f800000;
        if (__real_3f800000 <= 0.0) {
          param_1 = 0.0;
        }
      }
    }
    else {
      param_1 = 0.0;
      if (__real_3f800000 <= 0.0) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    break;
  case Sinusoidal:
    fVar2 = sinf(param_1 * __real_40490fdb - __real_3fc90fdb);
    param_1 = (fVar2 + __real_3f800000) * __real_3f000000;
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case QuadraticInOut:
    fVar2 = param_1 + param_1;
    if (param_1 < __real_3f000000) goto LAB_1473e1ea9;
    fVar2 = __real_3f800000 - (fVar2 - __real_3f800000);
LAB_1473e1da8:
    fVar2 = (__real_3f800000 - fVar2 * fVar2) + __real_3f800000;
    goto LAB_1473e1db7;
  case CubicInOut:
    fVar2 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar2 = __real_3f800000 - (fVar2 - __real_3f800000);
      fVar2 = (__real_3f800000 - fVar2 * fVar2 * fVar2) + __real_3f800000;
    }
    else {
      fVar2 = fVar2 * fVar2 * fVar2;
    }
    param_1 = fVar2 * __real_3f000000;
    if (__real_3f800000 <= fVar2 * __real_3f000000) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case QuarticInOut:
    fVar2 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar2 = __real_3f800000 - (fVar2 - __real_3f800000);
      fVar2 = fVar2 * fVar2;
      goto LAB_1473e1da8;
    }
    fVar2 = fVar2 * fVar2;
LAB_1473e1ea9:
    fVar2 = fVar2 * fVar2;
LAB_1473e1db7:
    param_1 = fVar2 * __real_3f000000;
    if (__real_3f800000 <= fVar2 * __real_3f000000) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case QuinticInOut:
    fVar2 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar2 = __real_3f800000 - (fVar2 - __real_3f800000);
      param_1 = ((__real_3f800000 - fVar2 * fVar2 * fVar2 * fVar2 * fVar2) + __real_3f800000) *
                __real_3f000000;
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = fVar2 * fVar2 * fVar2 * fVar2 * fVar2 * __real_3f000000;
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    break;
  case CircularIn:
    param_1 = __real_3f800000 - SQRT(__real_3f800000 - param_1 * param_1);
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case CircularOut:
    param_1 = SQRT(__real_3f800000 - (param_1 - __real_3f800000) * (param_1 - __real_3f800000));
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case CircularInOut:
    fVar2 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      param_1 = (SQRT(__real_3f800000 - (fVar2 - __real_40000000) * (fVar2 - __real_40000000)) +
                __real_3f800000) * __real_3f000000;
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = (__real_3f800000 - SQRT(__real_3f800000 - fVar2 * fVar2)) * __real_3f000000;
      if (__real_3f800000 <= param_1) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    break;
  case ExpIn:
    if (param_1 == 0.0) {
      param_1 = 0.0;
      if (__real_3f800000 <= 0.0) {
        param_1 = __real_3f800000;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = powf(__real_40000000,(param_1 - __real_3f800000) * __real_41200000);
      if (fVar2 <= param_1) {
        param_1 = fVar2;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    break;
  case ExpOut:
    if (param_1 == __real_3f800000) {
      param_1 = __real_3f800000;
      if (__real_3f800000 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      fVar1 = powf(__real_40000000,param_1 * __real_c1200000);
      param_1 = fVar2 - fVar1;
      if (fVar2 <= fVar2 - fVar1) {
        param_1 = fVar2;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    break;
  case ExpInOut:
    fVar3 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar4 = __real_3f800000;
      if (fVar3 - __real_3f800000 != __real_3f800000) {
        fVar3 = powf(__real_40000000,(fVar3 - __real_3f800000) * __real_c1200000);
        fVar4 = fVar2 - fVar3;
      }
      fVar4 = fVar4 + fVar2;
    }
    else if (fVar3 == 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = powf(__real_40000000,(fVar3 - __real_3f800000) * __real_41200000);
    }
    param_1 = fVar4 * fVar1;
    if (fVar2 <= fVar4 * fVar1) {
      param_1 = fVar2;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    break;
  case Custom:
    if (param_3 != (UCurveFloat *)0x0) {
      UCurveBase::GetTimeRange((UCurveBase *)param_3,local_res20,local_res10);
      fVar2 = UCurveFloat::GetFloatValue
                        (param_3,(local_res10[0] - local_res20[0]) * param_1 + local_res20[0]);
      if (__real_3f800000 <= fVar2) {
        fVar2 = __real_3f800000;
      }
      if (0.0 < fVar2) {
        return fVar2;
      }
      return 0.0;
    }
  default:
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  return param_1;
}

// IsComplete @ 147407760

bool __thiscall FAlphaBlend::IsComplete(FAlphaBlend *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this->bNeedsToResetCachedDesiredBlendedValue != false) {
    fVar1 = this->DesiredValue;
    fVar2 = this->BeginValue;
    fVar3 = AlphaToBlendOption(__real_3f800000,this->BlendOption,
                               (this->CustomCurve).field0_0x0.DebugPtr);
    this->bNeedsToResetCachedDesiredBlendedValue = false;
    this->CachedDesiredBlendedValue = fVar3 * (fVar1 - fVar2) + fVar2;
  }
  if (this->BlendedValue == this->CachedDesiredBlendedValue) {
    return true;
  }
  return false;
}

// Reset @ 14740f230

void __thiscall FAlphaBlend::Reset(FAlphaBlend *this)

{
  UCurveFloat *pUVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f800000;
  pUVar1 = (this->CustomCurve).field0_0x0.DebugPtr;
  fVar3 = 0.0;
  if (0.0 < this->BlendTime) {
    this->AlphaLerp = 0.0;
    fVar2 = AlphaToBlendOption(0.0,this->BlendOption,pUVar1);
    fVar3 = (float)((uint)(__real_3f800000 - this->AlphaLerp) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) * this->BlendTime;
  }
  else {
    this->AlphaLerp = 1.0;
    fVar2 = AlphaToBlendOption(fVar2,this->BlendOption,pUVar1);
  }
  this->AlphaBlend = fVar2;
  this->BlendedValue = (this->DesiredValue - this->BeginValue) * fVar2 + this->BeginValue;
  this->BlendTimeRemaining = fVar3;
  this->bNeedsToResetBlendTime = false;
  this->bNeedsToResetCachedDesiredBlendedValue = true;
  this->bNeedsToResetAlpha = false;
  return;
}

// ResetAlpha @ 14740f440

void __thiscall FAlphaBlend::ResetAlpha(FAlphaBlend *this)

{
  UCurveFloat *pUVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f800000;
  fVar3 = this->BeginValue;
  pUVar1 = (this->CustomCurve).field0_0x0.DebugPtr;
  if (fVar3 == this->DesiredValue) {
    this->AlphaLerp = 1.0;
  }
  else {
    fVar2 = (this->BlendedValue - fVar3) / (this->DesiredValue - fVar3);
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->AlphaLerp = fVar2;
  }
  fVar3 = AlphaToBlendOption(fVar2,this->BlendOption,pUVar1);
  this->AlphaBlend = fVar3;
  this->BlendedValue = (this->DesiredValue - this->BeginValue) * fVar3 + this->BeginValue;
  this->bNeedsToResetAlpha = false;
  return;
}

// ResetBlendTime @ 14740f4d0

void __thiscall FAlphaBlend::ResetBlendTime(FAlphaBlend *this)

{
  UCurveFloat *pUVar1;
  float fVar2;
  
  fVar2 = __real_3f800000;
  if (this->BlendTime <= 0.0) {
    pUVar1 = (this->CustomCurve).field0_0x0.DebugPtr;
    this->BlendTimeRemaining = 0.0;
    this->AlphaLerp = 1.0;
    fVar2 = AlphaToBlendOption(fVar2,this->BlendOption,pUVar1);
    this->AlphaBlend = fVar2;
    this->bNeedsToResetBlendTime = false;
    this->BlendedValue = (this->DesiredValue - this->BeginValue) * fVar2 + this->BeginValue;
    return;
  }
  fVar2 = __real_3f800000 - this->AlphaLerp;
  this->bNeedsToResetBlendTime = false;
  this->BlendTimeRemaining =
       (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) * this->BlendTime;
  return;
}

// SetAlpha @ 147418ff0

void __thiscall FAlphaBlend::SetAlpha(FAlphaBlend *this,float param_1)

{
  UCurveFloat *pUVar1;
  float fVar2;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  pUVar1 = (this->CustomCurve).field0_0x0.DebugPtr;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->AlphaLerp = param_1;
  fVar2 = AlphaToBlendOption(param_1,this->BlendOption,pUVar1);
  this->AlphaBlend = fVar2;
  this->BlendedValue = (this->DesiredValue - this->BeginValue) * fVar2 + this->BeginValue;
  return;
}

// SetBlendOption @ 1474190d0

void __thiscall FAlphaBlend::SetBlendOption(FAlphaBlend *this,EAlphaBlendOption param_1)

{
  this->BlendOption = param_1;
  this->bNeedsToResetCachedDesiredBlendedValue = true;
  return;
}

// SetBlendTime @ 1474190e0

void __thiscall FAlphaBlend::SetBlendTime(FAlphaBlend *this,float param_1)

{
  this->bNeedsToResetBlendTime = true;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->BlendTime = param_1;
  return;
}

// SetCustomCurve @ 1474192e0

void __thiscall FAlphaBlend::SetCustomCurve(FAlphaBlend *this,UCurveFloat *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->CustomCurve).field0_0x0.DebugPtr = param_1;
    this->bNeedsToResetCachedDesiredBlendedValue = true;
    return;
  }
  (this->CustomCurve).field0_0x0.DebugPtr = param_1;
  this->bNeedsToResetCachedDesiredBlendedValue = true;
  return;
}

// SetDesiredValue @ 147419330

void __thiscall FAlphaBlend::SetDesiredValue(FAlphaBlend *this,float param_1)

{
  this->BeginValue = this->BlendedValue;
  this->DesiredValue = param_1;
  this->bNeedsToResetAlpha = true;
  this->bNeedsToResetCachedDesiredBlendedValue = true;
  return;
}

// SetValueRange @ 147419950

void __thiscall FAlphaBlend::SetValueRange(FAlphaBlend *this,float param_1,float param_2)

{
  this->BeginValue = param_1;
  this->DesiredValue = param_2;
  this->bNeedsToResetAlpha = true;
  this->bNeedsToResetCachedDesiredBlendedValue = true;
  return;
}

// Update @ 14741aa70

float __thiscall FAlphaBlend::Update(FAlphaBlend *this,float param_1)

{
  float *pfVar1;
  EAlphaBlendOption *pEVar2;
  UCurveFloat *pUVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *local_res8;
  
  if ((param_1 < 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDeltaTime >= 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AlphaBlend.cpp"
                         ,0xac,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar8 = (float)(*pcVar4)();
    return fVar8;
  }
  fVar8 = __real_3f800000;
  pfVar6 = &this->BlendedValue;
  pfVar7 = &this->DesiredValue;
  pfVar1 = &this->BeginValue;
  pEVar2 = &this->BlendOption;
  if (this->bNeedsToResetAlpha != false) {
    fVar9 = *pfVar1;
    pUVar3 = (this->CustomCurve).field0_0x0.DebugPtr;
    if (fVar9 == *pfVar7) {
      this->AlphaLerp = 1.0;
      fVar9 = fVar8;
    }
    else {
      fVar9 = (*pfVar6 - fVar9) / (*pfVar7 - fVar9);
      if (__real_3f800000 <= fVar9) {
        fVar9 = __real_3f800000;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      this->AlphaLerp = fVar9;
    }
    fVar9 = AlphaToBlendOption(fVar9,*pEVar2,pUVar3);
    this->AlphaBlend = fVar9;
    *pfVar6 = (*pfVar7 - *pfVar1) * fVar9 + *pfVar1;
    this->bNeedsToResetAlpha = false;
  }
  if (this->bNeedsToResetBlendTime != false) {
    if (0.0 < this->BlendTime) {
      this->BlendTimeRemaining =
           (float)((uint)(fVar8 - this->AlphaLerp) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
           this->BlendTime;
    }
    else {
      pUVar3 = (this->CustomCurve).field0_0x0.DebugPtr;
      this->BlendTimeRemaining = 0.0;
      this->AlphaLerp = 1.0;
      fVar9 = AlphaToBlendOption(fVar8,*pEVar2,pUVar3);
      this->AlphaBlend = fVar9;
      *pfVar6 = (*pfVar7 - *pfVar1) * fVar9 + *pfVar1;
    }
    this->bNeedsToResetBlendTime = false;
  }
  local_res8 = &this->DesiredValue;
  pfVar6 = &this->BeginValue;
  if (this->bNeedsToResetCachedDesiredBlendedValue != false) {
    fVar9 = *pfVar7;
    fVar11 = *pfVar1;
    fVar10 = AlphaToBlendOption(fVar8,*pEVar2,(this->CustomCurve).field0_0x0.DebugPtr);
    this->bNeedsToResetCachedDesiredBlendedValue = false;
    this->CachedDesiredBlendedValue = fVar10 * (fVar9 - fVar11) + fVar11;
  }
  pfVar7 = &this->BlendedValue;
  if (*pfVar7 != this->CachedDesiredBlendedValue) {
    fVar9 = this->BlendTimeRemaining;
    pUVar3 = (this->CustomCurve).field0_0x0.DebugPtr;
    if (fVar9 <= param_1) {
      this->BlendTimeRemaining = 0.0;
      this->AlphaLerp = 1.0;
      fVar8 = AlphaToBlendOption(fVar8,this->BlendOption,pUVar3);
      this->AlphaBlend = fVar8;
      *pfVar7 = (*local_res8 - *pfVar6) * fVar8 + *pfVar6;
      return param_1 - fVar9;
    }
    fVar11 = ((fVar8 - this->AlphaLerp) / fVar9) * param_1 + this->AlphaLerp;
    this->BlendTimeRemaining = fVar9 - param_1;
    if (fVar8 <= fVar11) {
      fVar11 = fVar8;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    this->AlphaLerp = fVar11;
    fVar8 = AlphaToBlendOption(fVar11,this->BlendOption,pUVar3);
    this->AlphaBlend = fVar8;
    *pfVar7 = (*local_res8 - *pfVar6) * fVar8 + *pfVar6;
  }
  return 0.0;
}

// operator= @ 1474b5d60

FAlphaBlend * __thiscall FAlphaBlend::operator=(FAlphaBlend *this,FAlphaBlend *param_1)

{
  UCurveFloat *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CustomCurve).field0_0x0 = (param_1->CustomCurve).field0_0x0;
  this->BlendTime = param_1->BlendTime;
  this->AlphaLerp = param_1->AlphaLerp;
  this->AlphaBlend = param_1->AlphaBlend;
  this->BlendTimeRemaining = param_1->BlendTimeRemaining;
  this->BlendedValue = param_1->BlendedValue;
  this->BeginValue = param_1->BeginValue;
  this->DesiredValue = param_1->DesiredValue;
  this->BlendOption = param_1->BlendOption;
  this->bNeedsToResetAlpha = param_1->bNeedsToResetAlpha;
  this->bNeedsToResetBlendTime = param_1->bNeedsToResetBlendTime;
  this->bNeedsToResetCachedDesiredBlendedValue = param_1->bNeedsToResetCachedDesiredBlendedValue;
  this->CachedDesiredBlendedValue = param_1->CachedDesiredBlendedValue;
  return this;
}

