// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 4

// StaticStruct @ 14e2ea290

UScriptStruct * __cdecl FDatasmithCameraFilmbackSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate,
                         (UObject *)pUVar1,L"DatasmithCameraFilmbackSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithCameraFilmbackSettingsTemplate.OuterSingleton;
}

// Apply @ 14e2f7c10

void __thiscall
FDatasmithCameraFilmbackSettingsTemplate::Apply
          (FDatasmithCameraFilmbackSettingsTemplate *this,FCameraFilmbackSettings *param_1,
          FDatasmithCameraFilmbackSettingsTemplate *param_2)

{
  if ((((param_2 == (FDatasmithCameraFilmbackSettingsTemplate *)0x0) ||
       (param_2->SensorWidth == param_1->SensorWidth)) &&
      (param_1->SensorWidth = this->SensorWidth,
      param_2 == (FDatasmithCameraFilmbackSettingsTemplate *)0x0)) ||
     (param_2->SensorHeight == param_1->SensorHeight)) {
    param_1->SensorHeight = this->SensorHeight;
  }
  return;
}

// Equals @ 14e2f8ca0

bool __thiscall
FDatasmithCameraFilmbackSettingsTemplate::Equals
          (FDatasmithCameraFilmbackSettingsTemplate *this,
          FDatasmithCameraFilmbackSettingsTemplate *param_1)

{
  if (((float)((uint)(this->SensorWidth - param_1->SensorWidth) &
              __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
     ((float)((uint)(this->SensorHeight - param_1->SensorHeight) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    return true;
  }
  return false;
}

// Load @ 14e2fdc40

void __thiscall
FDatasmithCameraFilmbackSettingsTemplate::Load
          (FDatasmithCameraFilmbackSettingsTemplate *this,FCameraFilmbackSettings *param_1)

{
  this->SensorWidth = param_1->SensorWidth;
  this->SensorHeight = param_1->SensorHeight;
  return;
}

