// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df93e20

UScriptStruct * __cdecl FHairDecimationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairDecimationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairDecimationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairDecimationSettings,(UObject *)pUVar1,
                         L"HairDecimationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairDecimationSettings.OuterSingleton;
}

// FHairDecimationSettings @ 14dfac100

FHairDecimationSettings * __thiscall
FHairDecimationSettings::FHairDecimationSettings(FHairDecimationSettings *this)

{
  this->CurveDecimation = 1.0;
  this->VertexDecimation = 1.0;
  return this;
}

// operator== @ 14dfb1c50

bool __thiscall
FHairDecimationSettings::operator==(FHairDecimationSettings *this,FHairDecimationSettings *param_1)

{
  if ((param_1->CurveDecimation == this->CurveDecimation) &&
     (param_1->VertexDecimation == this->VertexDecimation)) {
    return true;
  }
  return false;
}

