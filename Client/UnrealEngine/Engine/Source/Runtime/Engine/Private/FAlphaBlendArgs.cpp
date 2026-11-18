// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1473c7570

UScriptStruct * __cdecl FAlphaBlendArgs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAlphaBlendArgs,(UObject *)pUVar1,
                         L"AlphaBlendArgs");
  }
  return Z_Registration_Info_UScriptStruct_FAlphaBlendArgs.OuterSingleton;
}

// FAlphaBlendArgs @ 1473d49a0

FAlphaBlendArgs * __thiscall
FAlphaBlendArgs::FAlphaBlendArgs(FAlphaBlendArgs *this,FAlphaBlend *param_1)

{
  UCurveFloat *pUVar1;
  
  pUVar1 = (param_1->CustomCurve).field0_0x0.DebugPtr;
  (this->CustomCurve).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->BlendTime = param_1->BlendTime;
  this->BlendOption = param_1->BlendOption;
  return this;
}

// FAlphaBlendArgs @ 1473d49f0

FAlphaBlendArgs * __thiscall FAlphaBlendArgs::FAlphaBlendArgs(FAlphaBlendArgs *this,float param_1)

{
  this->BlendTime = param_1;
  (this->CustomCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->BlendOption = HermiteCubic;
  return this;
}

// FAlphaBlendArgs @ 1473d4a10

FAlphaBlendArgs * __thiscall FAlphaBlendArgs::FAlphaBlendArgs(FAlphaBlendArgs *this)

{
  (this->CustomCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->BlendTime = 0.2;
  this->BlendOption = HermiteCubic;
  return this;
}

