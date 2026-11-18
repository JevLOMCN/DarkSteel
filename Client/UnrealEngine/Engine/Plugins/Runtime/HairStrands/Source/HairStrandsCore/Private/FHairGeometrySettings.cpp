// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95520

UScriptStruct * __cdecl FHairGeometrySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairGeometrySettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairGeometrySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairGeometrySettings,(UObject *)pUVar1,
                         L"HairGeometrySettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairGeometrySettings.OuterSingleton;
}

// FHairGeometrySettings @ 14dfac180

FHairGeometrySettings * __thiscall
FHairGeometrySettings::FHairGeometrySettings(FHairGeometrySettings *this)

{
  this->HairWidth_Override = false;
  this->HairWidth = 0.01;
  this->HairRootScale = 1.0;
  this->HairTipScale = 1.0;
  return this;
}

// operator== @ 14dfb1cd0

bool __thiscall
FHairGeometrySettings::operator==(FHairGeometrySettings *this,FHairGeometrySettings *param_1)

{
  if (((param_1->HairWidth == this->HairWidth) && (param_1->HairRootScale == this->HairRootScale))
     && (param_1->HairTipScale == this->HairTipScale)) {
    return true;
  }
  return false;
}

