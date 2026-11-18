// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14df93de0

UScriptStruct * __cdecl FHairLODSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairLODSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairLODSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairLODSettings,(UObject *)pUVar1,
                         L"HairLODSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairLODSettings.OuterSingleton;
}

// operator== @ 14dfb2250

bool __thiscall FHairLODSettings::operator==(FHairLODSettings *this,FHairLODSettings *param_1)

{
  if ((((param_1->VertexDecimation == this->VertexDecimation) &&
       (param_1->AngularThreshold == this->AngularThreshold)) &&
      (param_1->CurveDecimation == this->CurveDecimation)) &&
     (((param_1->ThicknessScale == this->ThicknessScale && (this->bVisible == param_1->bVisible)) &&
      (param_1->ScreenSize == this->ScreenSize)))) {
    return true;
  }
  return false;
}

