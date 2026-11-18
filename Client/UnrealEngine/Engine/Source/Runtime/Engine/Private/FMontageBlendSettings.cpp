// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147490220

UScriptStruct * __cdecl FMontageBlendSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMontageBlendSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FMontageBlendSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMontageBlendSettings,(UObject *)pUVar1,
                         L"MontageBlendSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMontageBlendSettings.OuterSingleton;
}

// FMontageBlendSettings @ 1474b31f0

FMontageBlendSettings * __thiscall
FMontageBlendSettings::FMontageBlendSettings(FMontageBlendSettings *this,FAlphaBlendArgs *param_1)

{
  UCurveFloat *pUVar1;
  
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr;
  (this->Blend).CustomCurve.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Blend).BlendTime = param_1->BlendTime;
  (this->Blend).BlendOption = param_1->BlendOption;
  this->BlendMode = Standard;
  return this;
}

// FMontageBlendSettings @ 1474b3250

FMontageBlendSettings * __thiscall
FMontageBlendSettings::FMontageBlendSettings(FMontageBlendSettings *this,float param_1)

{
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&this->Blend,param_1);
  this->BlendMode = Standard;
  return this;
}

// FMontageBlendSettings @ 1474b3280

FMontageBlendSettings * __thiscall
FMontageBlendSettings::FMontageBlendSettings(FMontageBlendSettings *this)

{
  (this->BlendProfile).field0_0x0.DebugPtr = (UBlendProfile *)0x0;
  FAlphaBlendArgs::FAlphaBlendArgs(&this->Blend);
  this->BlendMode = Standard;
  return this;
}

