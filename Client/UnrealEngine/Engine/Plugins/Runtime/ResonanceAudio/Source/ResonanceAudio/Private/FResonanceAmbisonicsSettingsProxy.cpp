// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 2

// Duplicate @ 14f047bf0

TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
__thiscall FResonanceAmbisonicsSettingsProxy::Duplicate(FResonanceAmbisonicsSettingsProxy *this)

{
  ISoundfieldEncodingSettingsProxy IVar1;
  ISoundfieldEncodingSettingsProxy *in_RDX;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName,false,None,Default,
             true);
  local_res10 = LLMTagDeclaration_Audio_SpatializationPlugins.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  IVar1 = (ISoundfieldEncodingSettingsProxy)::operator_new(0x10);
  if (IVar1 == (ISoundfieldEncodingSettingsProxy)0x0) {
    IVar1 = (ISoundfieldEncodingSettingsProxy)0x0;
  }
  else {
    *(undefined8 *)((longlong)IVar1 + 8) = 0;
    *(undefined ***)IVar1 = &___7FResonanceAmbisonicsSettingsProxy__6B_;
  }
  *(RenderingMode *)((longlong)IVar1 + 8) = this->RenderingMode;
  *in_RDX = IVar1;
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return (TUniquePtr<ISoundfieldEncodingSettingsProxy,TDefaultDelete<ISoundfieldEncodingSettingsProxy>_>
          )in_RDX;
}

// GetUniqueId @ 14f049320

uint __thiscall
FResonanceAmbisonicsSettingsProxy::GetUniqueId(FResonanceAmbisonicsSettingsProxy *this)

{
  return this->RenderingMode;
}

