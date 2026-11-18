// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// StaticStruct @ 14aca66c0

UScriptStruct * __cdecl FUIParticleFactorParam::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleFactorParam.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleFactorParam.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleFactorParam,(UObject *)pUVar1,
                         L"UIParticleFactorParam");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleFactorParam.OuterSingleton;
}

// FUIParticleFactorParam @ 14acb5b90

FUIParticleFactorParam * __thiscall
FUIParticleFactorParam::FUIParticleFactorParam
          (FUIParticleFactorParam *this,FUIParticleRandomFactor *param_1,
          FUIParticleRandomFactor *param_2,FUIParticleRandomFactor *param_3,
          FUIParticleRandomFactor *param_4,UEasyParticleState *param_5)

{
  float fVar1;
  
  this->Factor = param_1->factor;
  this->Factor2 = param_2->factor;
  this->Factor3 = param_2->factor;
  this->Factor4 = param_2->factor;
  this->Lifetime = 0.0;
  this->LifetimePercent = 0.0;
  this->RootEmitterLifetime = 0.0;
  if (param_5 != (UEasyParticleState *)0x0) {
    this->Lifetime = (param_5->CurrentState).Lifetime;
    fVar1 = (param_5->InitialState).Lifetime;
    if (fVar1 != 0.0) {
      this->LifetimePercent = (param_5->CurrentState).Lifetime / fVar1;
    }
    this->RootEmitterLifetime = (param_5->CurrentState).RootEmitterLifetime;
  }
  return this;
}

// FUIParticleFactorParam @ 14acb5c00

FUIParticleFactorParam * __thiscall
FUIParticleFactorParam::FUIParticleFactorParam
          (FUIParticleFactorParam *this,FUIParticleRandomFactor *param_1,UEasyParticleState *param_2
          )

{
  float fVar1;
  
  this->Factor = param_1->factor;
  this->Lifetime = 0.0;
  this->LifetimePercent = 0.0;
  this->RootEmitterLifetime = 0.0;
  if (param_2 != (UEasyParticleState *)0x0) {
    this->Lifetime = (param_2->CurrentState).Lifetime;
    fVar1 = (param_2->InitialState).Lifetime;
    if (fVar1 != 0.0) {
      this->LifetimePercent = (param_2->CurrentState).Lifetime / fVar1;
    }
    this->RootEmitterLifetime = (param_2->CurrentState).RootEmitterLifetime;
  }
  return this;
}

// FUIParticleFactorParam @ 14acb5c50

FUIParticleFactorParam * __thiscall
FUIParticleFactorParam::FUIParticleFactorParam(FUIParticleFactorParam *this)

{
  this->Factor = 0.0;
  this->Factor2 = 0.0;
  this->Factor3 = 0.0;
  this->Factor4 = 0.0;
  this->Lifetime = 0.0;
  this->LifetimePercent = 0.0;
  this->RootEmitterLifetime = 0.0;
  return this;
}

