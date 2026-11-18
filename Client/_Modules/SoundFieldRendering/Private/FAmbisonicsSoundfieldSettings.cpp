// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFieldRendering
// Functions: 2

// Duplicate @ 1464c9610

TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
__thiscall FAmbisonicsSoundfieldSettings::Duplicate(FAmbisonicsSoundfieldSettings *this)

{
  ISoundfieldEncodingSettingsProxy IVar1;
  ISoundfieldEncodingSettingsProxy *in_RDX;
  
  IVar1 = (ISoundfieldEncodingSettingsProxy)::operator_new(0x10);
  if (IVar1 == (ISoundfieldEncodingSettingsProxy)0x0) {
    IVar1 = (ISoundfieldEncodingSettingsProxy)0x0;
  }
  else {
    *(undefined8 *)((longlong)IVar1 + 8) = 0;
    *(undefined ***)IVar1 = &___7FAmbisonicsSoundfieldSettings__6B_;
  }
  *(int *)((longlong)IVar1 + 8) = this->Order;
  *in_RDX = IVar1;
  return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
          )in_RDX;
}

// GetUniqueId @ 1464cab90

uint __thiscall FAmbisonicsSoundfieldSettings::GetUniqueId(FAmbisonicsSoundfieldSettings *this)

{
  return this->Order;
}

