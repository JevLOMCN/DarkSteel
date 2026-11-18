// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// StaticStruct @ 14ac8cfb0

UScriptStruct * __cdecl FUIParticleFloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleFloatCurve,(UObject *)pUVar1,
                         L"UIParticleFloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleFloatCurve.OuterSingleton;
}

// GetValue @ 14ac99040

float __thiscall
FUIParticleFloatCurve::GetValue
          (FUIParticleFloatCurve *this,float param_1,float param_2,float param_3)

{
  ECurveType EVar1;
  float fVar2;
  float local_res8 [8];
  float local_48 [16];
  
  EVar1 = this->CurveType;
  if (EVar1 != ParticleLifePercent) {
    if (EVar1 == ParticleLifeTime) {
      param_1 = param_2;
      if (this->Loop == false) goto LAB_14ac990b0;
      FRichCurve::GetTimeRange(&this->CurveData,local_48,local_res8);
    }
    else {
      if (EVar1 != EmitLifeTime) {
        return 0.0;
      }
      param_1 = param_3;
      if (this->Loop == false) goto LAB_14ac990b0;
      FRichCurve::GetTimeRange(&this->CurveData,local_48,local_res8);
      param_2 = param_3;
    }
    param_1 = 0.0;
    if (0.0 < local_res8[0]) {
      param_1 = FGenericPlatformMath::Fmod(param_2,local_res8[0]);
    }
  }
LAB_14ac990b0:
  fVar2 = FRichCurve::Eval(&this->CurveData,param_1,0.0);
  return fVar2;
}

