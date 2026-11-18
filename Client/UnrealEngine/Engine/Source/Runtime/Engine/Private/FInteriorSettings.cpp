// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1476765a0

UScriptStruct * __cdecl FInteriorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInteriorSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FInteriorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInteriorSettings,(UObject *)pUVar1,
                         L"InteriorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FInteriorSettings.OuterSingleton;
}

// FInteriorSettings @ 147687a00

FInteriorSettings * __thiscall FInteriorSettings::FInteriorSettings(FInteriorSettings *this)

{
  this->bIsWorldSettings = false;
  this->ExteriorVolume = 1.0;
  this->ExteriorTime = 0.5;
  this->ExteriorLPF = 20000.0;
  this->ExteriorLPFTime = 0.5;
  this->InteriorVolume = 1.0;
  this->InteriorTime = 0.5;
  this->InteriorLPF = 20000.0;
  this->InteriorLPFTime = 0.5;
  return this;
}

// operator== @ 14768b180

bool __thiscall FInteriorSettings::operator==(FInteriorSettings *this,FInteriorSettings *param_1)

{
  if ((((((param_1->bIsWorldSettings == this->bIsWorldSettings) &&
         (this->ExteriorVolume == param_1->ExteriorVolume)) &&
        (this->ExteriorTime == param_1->ExteriorTime)) &&
       ((this->ExteriorLPF == param_1->ExteriorLPF &&
        (this->ExteriorLPFTime == param_1->ExteriorLPFTime)))) &&
      ((this->InteriorVolume == param_1->InteriorVolume &&
       ((this->InteriorTime == param_1->InteriorTime && (this->InteriorLPF == param_1->InteriorLPF))
       )))) && (this->InteriorLPFTime == param_1->InteriorLPFTime)) {
    return true;
  }
  return false;
}

// operator!= @ 14768b1f0

bool __thiscall FInteriorSettings::operator!=(FInteriorSettings *this,FInteriorSettings *param_1)

{
  if ((((((param_1->bIsWorldSettings == this->bIsWorldSettings) &&
         (this->ExteriorVolume == param_1->ExteriorVolume)) &&
        (this->ExteriorTime == param_1->ExteriorTime)) &&
       ((this->ExteriorLPF == param_1->ExteriorLPF &&
        (this->ExteriorLPFTime == param_1->ExteriorLPFTime)))) &&
      ((this->InteriorVolume == param_1->InteriorVolume &&
       ((this->InteriorTime == param_1->InteriorTime && (this->InteriorLPF == param_1->InteriorLPF))
       )))) && (this->InteriorLPFTime == param_1->InteriorLPFTime)) {
    return false;
  }
  return true;
}

