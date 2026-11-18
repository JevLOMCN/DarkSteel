// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1484a5330

UScriptStruct * __cdecl FFilmStockSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilmStockSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FFilmStockSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilmStockSettings,(UObject *)pUVar1,
                         L"FilmStockSettings");
  }
  return Z_Registration_Info_UScriptStruct_FFilmStockSettings.OuterSingleton;
}

// ExportToPostProcessSettings @ 1484d6390

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FFilmStockSettings::ExportToPostProcessSettings
          (FFilmStockSettings *this,FPostProcessSettings *param_1)

{
  undefined1 *puVar1;
  
  param_1->bOverride_FilmSlope = '\x01';
  param_1->bOverride_FilmShoulder = '\x01';
  param_1->bOverride_FilmToe = '\x01';
  param_1->bOverride_FilmBlackClip = '\x01';
  param_1->bOverride_FilmWhiteClip = '\x01';
  param_1->FilmSlope = this->Slope;
  param_1->FilmToe = this->Toe;
  param_1->FilmShoulder = this->Shoulder;
  param_1->FilmBlackClip = this->BlackClip;
  param_1->FilmWhiteClip = this->WhiteClip;
  return;
}

