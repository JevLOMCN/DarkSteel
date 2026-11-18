// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1475102e0

UScriptStruct * __cdecl FInputClampState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputClampState.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputClampState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputClampState,(UObject *)pUVar1,
                         L"InputClampState");
  }
  return Z_Registration_Info_UScriptStruct_FInputClampState.OuterSingleton;
}

// ApplyTo @ 147544380

float __thiscall
FInputClampState::ApplyTo
          (FInputClampState *this,FInputClampConstants *param_1,float param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_1->bClampResult != false) {
    fVar2 = param_1->ClampMax;
    if (param_2 <= param_1->ClampMax) {
      fVar2 = param_2;
    }
    param_2 = fVar2;
    if (fVar2 <= param_1->ClampMin) {
      param_2 = param_1->ClampMin;
    }
  }
  if (param_1->bInterpResult != false) {
    if (this->bInitialized != false) {
      fVar2 = this->InterpolatedResult;
      lVar1 = 0x10;
      if (fVar2 <= param_2) {
        lVar1 = 0xc;
      }
      if ((0.0 < *(float *)(&param_1->bClampResult + lVar1)) &&
         (fVar3 = param_2 - fVar2, __real_322bcc77 <= fVar3 * fVar3)) {
        fVar4 = *(float *)(&param_1->bClampResult + lVar1) * param_3;
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        param_2 = fVar4 * fVar3 + fVar2;
      }
    }
    this->InterpolatedResult = param_2;
  }
  this->bInitialized = true;
  return param_2;
}

