// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d647a90

UScriptStruct * __cdecl FCameraParameterNormalization::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraParameterNormalization,(UObject *)pUVar1,
                         L"CameraParameterNormalization");
  }
  return Z_Registration_Info_UScriptStruct_FCameraParameterNormalization.OuterSingleton;
}

// NormalizeValue @ 14d663610

double __thiscall
FCameraParameterNormalization::NormalizeValue(FCameraParameterNormalization *this,double param_1)

{
  if (this->bNormalize != false) {
    param_1 = FGenericPlatformMath::Fmod(param_1,this->MaxValue);
    if (param_1 < 0.0) {
      param_1 = param_1 + this->MaxValue;
    }
  }
  return param_1;
}

