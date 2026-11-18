// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147515fa0

UScriptStruct * __cdecl FInterpolationParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterpolationParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInterpolationParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterpolationParameter,(UObject *)pUVar1,
                         L"InterpolationParameter");
  }
  return Z_Registration_Info_UScriptStruct_FInterpolationParameter.OuterSingleton;
}

// FInterpolationParameter @ 147531390

FInterpolationParameter * __thiscall
FInterpolationParameter::FInterpolationParameter(FInterpolationParameter *this)

{
  this->DampingRatio = 1.0;
  this->MaxSpeed = 0.0;
  this->InterpolationTime = 0.0;
  (this->InterpolationType).Value = '\x05';
  return this;
}

