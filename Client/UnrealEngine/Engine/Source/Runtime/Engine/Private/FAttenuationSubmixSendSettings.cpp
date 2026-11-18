// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148679b40

UScriptStruct * __cdecl FAttenuationSubmixSendSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings,(UObject *)pUVar1,
                         L"AttenuationSubmixSendSettings");
  }
  return Z_Registration_Info_UScriptStruct_FAttenuationSubmixSendSettings.OuterSingleton;
}

// FAttenuationSubmixSendSettings @ 148691530

FAttenuationSubmixSendSettings * __thiscall
FAttenuationSubmixSendSettings::FAttenuationSubmixSendSettings(FAttenuationSubmixSendSettings *this)

{
  *(undefined1 *)this = 2;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0x10 = 0x3f800000;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x1c = 0x3f800000;
  *(undefined4 *)&this->field_0x20 = 0x42c80000;
  *(undefined4 *)&this->field_0x24 = 0x447a0000;
  this->field_0x14 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this->field_0x28);
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x1c = 0x3f800000;
  *(undefined4 *)&this->field_0x20 = 0x43c80000;
  *(undefined4 *)&this->field_0x24 = 0x45bb8000;
  *(undefined4 *)&this->field_0x10 = 0x3e4ccccd;
  *(undefined1 *)this = 0;
  return this;
}

