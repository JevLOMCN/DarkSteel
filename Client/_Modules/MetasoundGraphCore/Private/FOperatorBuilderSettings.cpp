// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// GetDefaultDebugSettings @ 14ad55280

FOperatorBuilderSettings * __cdecl
Metasound::FOperatorBuilderSettings::GetDefaultDebugSettings(void)

{
  return &DebugSettings;
}

// GetDefaultDevelopementSettings @ 14ad55290

FOperatorBuilderSettings * __cdecl
Metasound::FOperatorBuilderSettings::GetDefaultDevelopementSettings(void)

{
  return &DevSettings;
}

// GetDefaultSettings @ 14ad55a00

FOperatorBuilderSettings * __cdecl Metasound::FOperatorBuilderSettings::GetDefaultSettings(void)

{
  return &DevSettings;
}

// GetDefaultShippingSettings @ 14ad55a10

FOperatorBuilderSettings * __cdecl
Metasound::FOperatorBuilderSettings::GetDefaultShippingSettings(void)

{
  return &ShippingSettings;
}

// GetDefaultTestSettings @ 14ad55a20

FOperatorBuilderSettings * __cdecl Metasound::FOperatorBuilderSettings::GetDefaultTestSettings(void)

{
  return &TestSettings;
}

