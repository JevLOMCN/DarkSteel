// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147510190

UScriptStruct * __cdecl FInputScaleBiasClamp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClamp,(UObject *)pUVar1,
                         L"InputScaleBiasClamp");
  }
  return Z_Registration_Info_UScriptStruct_FInputScaleBiasClamp.OuterSingleton;
}

// ApplyTo @ 147544450

float __thiscall
FInputScaleBiasClamp::ApplyTo(FInputScaleBiasClamp *this,float param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (this->bMapRange != false) {
    fVar3 = (this->InRange).Max;
    fVar2 = (this->OutRange).Min;
    fVar4 = fVar3 - (this->InRange).Min;
    if (__real_322bcc77 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar4 = (param_1 - (this->InRange).Min) / fVar4;
    }
    else {
      fVar4 = __real_3f800000;
      if (param_1 < fVar3) {
        fVar4 = 0.0;
      }
    }
    param_1 = ((this->OutRange).Max - fVar2) * fVar4 + fVar2;
  }
  fVar3 = param_1 * this->Scale + this->Bias;
  if (this->bClampResult != false) {
    fVar2 = this->ClampMax;
    if (fVar3 <= this->ClampMax) {
      fVar2 = fVar3;
    }
    fVar3 = fVar2;
    if (fVar2 <= this->ClampMin) {
      fVar3 = this->ClampMin;
    }
  }
  if (this->bInterpResult != false) {
    if (this->bInitialized != false) {
      fVar2 = this->InterpolatedResult;
      lVar1 = 0x28;
      if (fVar2 <= fVar3) {
        lVar1 = 0x24;
      }
      if ((0.0 < *(float *)(&this->bMapRange + lVar1)) &&
         (fVar4 = fVar3 - fVar2, __real_322bcc77 <= fVar4 * fVar4)) {
        fVar3 = *(float *)(&this->bMapRange + lVar1) * param_2;
        if (__real_3f800000 <= fVar3) {
          fVar3 = __real_3f800000;
        }
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        fVar3 = fVar3 * fVar4 + fVar2;
      }
    }
    this->InterpolatedResult = fVar3;
  }
  this->bInitialized = true;
  return fVar3;
}

