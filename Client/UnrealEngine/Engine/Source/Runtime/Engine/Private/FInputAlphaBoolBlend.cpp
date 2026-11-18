// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1475104c0

UScriptStruct * __cdecl FInputAlphaBoolBlend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputAlphaBoolBlend,(UObject *)pUVar1,
                         L"InputAlphaBoolBlend");
  }
  return Z_Registration_Info_UScriptStruct_FInputAlphaBoolBlend.OuterSingleton;
}

// ApplyTo @ 147544280

float __thiscall
FInputAlphaBoolBlend::ApplyTo(FInputAlphaBoolBlend *this,bool param_1,float param_2)

{
  UCurveFloat *pUVar1;
  UCurveFloat *pUVar2;
  FInputAlphaBoolBlend *pFVar3;
  bool bVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  if (!param_1) {
    fVar5 = 0.0;
  }
  if (this->bInitialized == false) {
    pUVar1 = (this->CustomCurve).field0_0x0.DebugPtr;
    pUVar2 = (this->AlphaBlend).CustomCurve.field0_0x0.DebugPtr;
    if (pUVar1 == (UCurveFloat *)0x0) {
      bVar4 = pUVar2 == (UCurveFloat *)0x0;
    }
    else {
      bVar4 = pUVar1 == pUVar2;
    }
    if (!bVar4) {
      FAlphaBlend::SetCustomCurve(&this->AlphaBlend,pUVar1);
    }
    if (this->BlendOption != (this->AlphaBlend).BlendOption) {
      FAlphaBlend::SetBlendOption(&this->AlphaBlend,this->BlendOption);
    }
    FAlphaBlend::SetDesiredValue(&this->AlphaBlend,fVar5);
    FAlphaBlend::SetBlendTime(&this->AlphaBlend,0.0);
    FAlphaBlend::Reset(&this->AlphaBlend);
    this->bInitialized = true;
  }
  else if (fVar5 != (this->AlphaBlend).DesiredValue) {
    FAlphaBlend::SetDesiredValue(&this->AlphaBlend,fVar5);
    pFVar3 = this;
    if (!param_1) {
      pFVar3 = (FInputAlphaBoolBlend *)&this->BlendOutTime;
    }
    FAlphaBlend::SetBlendTime(&this->AlphaBlend,pFVar3->BlendInTime);
  }
  FAlphaBlend::Update(&this->AlphaBlend,param_2);
  return (this->AlphaBlend).BlendedValue;
}

