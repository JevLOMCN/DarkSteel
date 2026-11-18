// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148676bd0

UScriptStruct * __cdecl FSoundModulationDefaultRoutingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings,
                         (UObject *)pUVar1,L"SoundModulationDefaultRoutingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundModulationDefaultRoutingSettings.OuterSingleton;
}

// FSoundModulationDefaultRoutingSettings @ 148695690

FSoundModulationDefaultRoutingSettings * __thiscall
FSoundModulationDefaultRoutingSettings::FSoundModulationDefaultRoutingSettings
          (FSoundModulationDefaultRoutingSettings *this)

{
  FSoundModulationDefaultSettings::FSoundModulationDefaultSettings
            ((FSoundModulationDefaultSettings *)this);
  this->VolumeRouting = Inherit;
  this->PitchRouting = Inherit;
  this->HighpassRouting = Inherit;
  this->LowpassRouting = Inherit;
  return this;
}

// GetRoutingForDestination @ 1486c6fa0

EModulationRouting __thiscall
FSoundModulationDefaultRoutingSettings::GetRoutingForDestination
          (FSoundModulationDefaultRoutingSettings *this,EModulationDestination param_1)

{
  if (param_1 == Volume) {
    return this->VolumeRouting;
  }
  if (param_1 == Pitch) {
    return this->PitchRouting;
  }
  if (param_1 == Lowpass) {
    return this->LowpassRouting;
  }
  if (param_1 != Highpass) {
    return Disable;
  }
  return this->HighpassRouting;
}

