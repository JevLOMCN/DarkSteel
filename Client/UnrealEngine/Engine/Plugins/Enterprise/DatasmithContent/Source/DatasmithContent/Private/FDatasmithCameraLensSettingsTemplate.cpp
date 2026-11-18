// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 4

// StaticStruct @ 14e2ea2d0

UScriptStruct * __cdecl FDatasmithCameraLensSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLensSettingsTemplate,
                         (UObject *)pUVar1,L"DatasmithCameraLensSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithCameraLensSettingsTemplate.OuterSingleton;
}

// Apply @ 14e2f7c80

void __thiscall
FDatasmithCameraLensSettingsTemplate::Apply
          (FDatasmithCameraLensSettingsTemplate *this,FCameraLensSettings *param_1,
          FDatasmithCameraLensSettingsTemplate *param_2)

{
  if ((param_2 == (FDatasmithCameraLensSettingsTemplate *)0x0) ||
     (param_2->MaxFStop == param_1->MaxFStop)) {
    param_1->MaxFStop = this->MaxFStop;
  }
  return;
}

// Equals @ 14e2f8d10

bool __thiscall
FDatasmithCameraLensSettingsTemplate::Equals
          (FDatasmithCameraLensSettingsTemplate *this,FDatasmithCameraLensSettingsTemplate *param_1)

{
  return (float)((uint)(this->MaxFStop - param_1->MaxFStop) & __xmm_7fffffff7fffffff7fffffff7fffffff
                ) <= __real_322bcc77;
}

// Load @ 14e2fdc80

void __thiscall
FDatasmithCameraLensSettingsTemplate::Load
          (FDatasmithCameraLensSettingsTemplate *this,FCameraLensSettings *param_1)

{
  this->MaxFStop = param_1->MaxFStop;
  return;
}

