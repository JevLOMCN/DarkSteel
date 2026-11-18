// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148876b80

UScriptStruct * __cdecl FTextureSourceColorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceColorSettings,(UObject *)pUVar1,
                         L"TextureSourceColorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FTextureSourceColorSettings.OuterSingleton;
}

// FTextureSourceColorSettings @ 14887d4c0

FTextureSourceColorSettings * __thiscall
FTextureSourceColorSettings::FTextureSourceColorSettings(FTextureSourceColorSettings *this)

{
  TVector2<double> TVar1;
  
  this->EncodingOverride = TSE_None;
  this->ColorSpace = TCS_None;
  (this->RedChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->GreenChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->BlueChromaticityCoordinate).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ChromaticAdaptationMethod = TCAM_Bradford;
  (this->WhiteChromaticityCoordinate).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

