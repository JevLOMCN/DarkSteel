// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147510440

UScriptStruct * __cdecl FInputScaleBiasClampState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClampState,(UObject *)pUVar1,
                         L"InputScaleBiasClampState");
  }
  return Z_Registration_Info_UScriptStruct_FInputScaleBiasClampState.OuterSingleton;
}

// ApplyTo @ 147544560

float __thiscall
FInputScaleBiasClampState::ApplyTo
          (FInputScaleBiasClampState *this,FInputScaleBiasClampConstants *param_1,float param_2,
          float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1->bMapRange != false) {
    fVar4 = (param_1->InRange).Max;
    fVar2 = (param_1->OutRange).Min;
    fVar3 = fVar4 - (param_1->InRange).Min;
    if (__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar3 = (param_2 - (param_1->InRange).Min) / fVar3;
    }
    else {
      fVar3 = __real_3f800000;
      if (param_2 < fVar4) {
        fVar3 = 0.0;
      }
    }
    param_2 = ((param_1->OutRange).Max - fVar2) * fVar3 + fVar2;
  }
  fVar4 = param_2 * param_1->Scale + param_1->Bias;
  if (param_1->bClampResult != false) {
    fVar2 = param_1->ClampMax;
    if (fVar4 <= param_1->ClampMax) {
      fVar2 = fVar4;
    }
    fVar4 = fVar2;
    if (fVar2 <= param_1->ClampMin) {
      fVar4 = param_1->ClampMin;
    }
  }
  if (param_1->bInterpResult != false) {
    if (this->bInitialized != false) {
      fVar2 = this->InterpolatedResult;
      lVar1 = 0x28;
      if (fVar2 <= fVar4) {
        lVar1 = 0x24;
      }
      if ((0.0 < *(float *)(&param_1->bMapRange + lVar1)) &&
         (fVar3 = fVar4 - fVar2, __real_322bcc77 <= fVar3 * fVar3)) {
        fVar4 = *(float *)(&param_1->bMapRange + lVar1) * param_3;
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar4 = fVar4 * fVar3 + fVar2;
      }
    }
    this->InterpolatedResult = fVar4;
  }
  this->bInitialized = true;
  return fVar4;
}

// ApplyTo @ 147544670

float __thiscall
FInputScaleBiasClampState::ApplyTo
          (FInputScaleBiasClampState *this,FInputScaleBiasClampConstants *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1->bMapRange != false) {
    fVar4 = (param_1->InRange).Max;
    fVar2 = (param_1->InRange).Min;
    fVar1 = (param_1->OutRange).Min;
    fVar3 = fVar4 - fVar2;
    if (__real_322bcc77 < (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar2 = (param_2 - fVar2) / fVar3;
    }
    else {
      fVar2 = __real_3f800000;
      if (param_2 < fVar4) {
        fVar2 = 0.0;
      }
    }
    param_2 = ((param_1->OutRange).Max - fVar1) * fVar2 + fVar1;
  }
  fVar4 = param_2 * param_1->Scale + param_1->Bias;
  if (param_1->bClampResult == false) {
    return fVar4;
  }
  fVar2 = param_1->ClampMax;
  if (fVar4 <= param_1->ClampMax) {
    fVar2 = fVar4;
  }
  if (fVar2 <= param_1->ClampMin) {
    fVar2 = param_1->ClampMin;
  }
  return fVar2;
}

