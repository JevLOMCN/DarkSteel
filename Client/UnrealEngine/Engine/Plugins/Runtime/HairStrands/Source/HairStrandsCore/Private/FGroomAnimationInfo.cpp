// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14dfe43c0

UScriptStruct * __cdecl FGroomAnimationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomAnimationInfo,(UObject *)pUVar1,
                         L"GroomAnimationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGroomAnimationInfo.OuterSingleton;
}

// FGroomAnimationInfo @ 14dfed540

FGroomAnimationInfo * __thiscall FGroomAnimationInfo::FGroomAnimationInfo(FGroomAnimationInfo *this)

{
  this->StartTime = 3.4028235e+38;
  this->NumFrames = 0;
  this->SecondsPerFrame = 0.0;
  this->Duration = 0.0;
  this->Attributes = None;
  this->EndTime = 1.1754944e-38;
  this->StartFrame = 0x7fffffff;
  this->EndFrame = -0x80000000;
  return this;
}

// IsValid @ 14e020de0

bool __thiscall FGroomAnimationInfo::IsValid(FGroomAnimationInfo *this)

{
  if ((((1 < this->NumFrames) && (0.0 < this->SecondsPerFrame)) &&
      (this->StartFrame < this->EndFrame)) && (this->Attributes != None)) {
    return true;
  }
  return false;
}

