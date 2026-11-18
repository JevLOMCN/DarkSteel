// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 4

// StaticStruct @ 14e2ea310

UScriptStruct * __cdecl FDatasmithCameraFocusSettingsTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraFocusSettingsTemplate,
                         (UObject *)pUVar1,L"DatasmithCameraFocusSettingsTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithCameraFocusSettingsTemplate.OuterSingleton;
}

// Apply @ 14e2f7c50

void __thiscall
FDatasmithCameraFocusSettingsTemplate::Apply
          (FDatasmithCameraFocusSettingsTemplate *this,FCameraFocusSettings *param_1,
          FDatasmithCameraFocusSettingsTemplate *param_2)

{
  if ((((param_2 == (FDatasmithCameraFocusSettingsTemplate *)0x0) ||
       (param_1->FocusMethod == param_2->FocusMethod)) &&
      (param_1->FocusMethod = this->FocusMethod,
      param_2 == (FDatasmithCameraFocusSettingsTemplate *)0x0)) ||
     (param_2->ManualFocusDistance == param_1->ManualFocusDistance)) {
    param_1->ManualFocusDistance = this->ManualFocusDistance;
  }
  return;
}

// Equals @ 14e2f8ce0

bool __thiscall
FDatasmithCameraFocusSettingsTemplate::Equals
          (FDatasmithCameraFocusSettingsTemplate *this,
          FDatasmithCameraFocusSettingsTemplate *param_1)

{
  if ((this->FocusMethod == param_1->FocusMethod) &&
     ((float)((uint)(this->ManualFocusDistance - param_1->ManualFocusDistance) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    return true;
  }
  return false;
}

// Load @ 14e2fdc60

void __thiscall
FDatasmithCameraFocusSettingsTemplate::Load
          (FDatasmithCameraFocusSettingsTemplate *this,FCameraFocusSettings *param_1)

{
  this->FocusMethod = param_1->FocusMethod;
  this->ManualFocusDistance = param_1->ManualFocusDistance;
  return;
}

