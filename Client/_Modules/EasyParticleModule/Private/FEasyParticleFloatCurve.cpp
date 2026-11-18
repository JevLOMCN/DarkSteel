// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// StaticStruct @ 14acb13a0

UScriptStruct * __cdecl FEasyParticleFloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEasyParticleFloatCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FEasyParticleFloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEasyParticleFloatCurve,(UObject *)pUVar1,
                         L"EasyParticleFloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FEasyParticleFloatCurve.OuterSingleton;
}

// GetValue @ 14acc40f0

float __thiscall
FEasyParticleFloatCurve::GetValue(FEasyParticleFloatCurve *this,FUIParticleFactorParam *param_1)

{
  float fVar1;
  
  fVar1 = GetValue(this,param_1->LifetimePercent,param_1->Lifetime,param_1->RootEmitterLifetime);
  return fVar1;
}

// GetValue @ 14acc4110

float __thiscall
FEasyParticleFloatCurve::GetValue
          (FEasyParticleFloatCurve *this,float param_1,float param_2,float param_3)

{
  EUIParticleCurveType EVar1;
  float fVar2;
  float local_res8 [8];
  float local_48 [16];
  
  EVar1 = this->CurveType;
  if (EVar1 != LifetimePercent) {
    if (EVar1 == Lifetime) {
      param_1 = param_2;
      if (this->Loop == false) goto LAB_14acc4180;
      FRichCurve::GetTimeRange(&this->CurveData,local_48,local_res8);
    }
    else {
      if (EVar1 != EmitterLifetime) {
        return 0.0;
      }
      param_1 = param_3;
      if (this->Loop == false) goto LAB_14acc4180;
      FRichCurve::GetTimeRange(&this->CurveData,local_48,local_res8);
      param_2 = param_3;
    }
    param_1 = 0.0;
    if (0.0 < local_res8[0]) {
      param_1 = FGenericPlatformMath::Fmod(param_2,local_res8[0]);
    }
  }
LAB_14acc4180:
  fVar2 = FRichCurve::Eval(&this->CurveData,param_1,0.0);
  return fVar2;
}

// Reset @ 14acc8100

void __thiscall FEasyParticleFloatCurve::Reset(FEasyParticleFloatCurve *this)

{
  this->CurveType = EmitterLifetime;
  this->Loop = false;
  FRichCurve::Reset(&this->CurveData);
  *(undefined4 *)&(this->CurveData)._padding_ = 0;
  return;
}

