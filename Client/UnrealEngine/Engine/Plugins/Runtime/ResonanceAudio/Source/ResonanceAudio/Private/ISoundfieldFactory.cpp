// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 5

// ~ISoundfieldFactory @ 14f044c80

void __thiscall ISoundfieldFactory::~ISoundfieldFactory(ISoundfieldFactory *this)

{
  *this = (ISoundfieldFactory)&___7ISoundfieldFactory__6B_;
  return;
}

// GetCustomEncodingSettingsClass @ 14f0484c0

UClass * __thiscall ISoundfieldFactory::GetCustomEncodingSettingsClass(ISoundfieldFactory *this)

{
  return (UClass *)0x0;
}

// IsEndpointFormat @ 14f049af0

bool __thiscall ISoundfieldFactory::IsEndpointFormat(ISoundfieldFactory *this)

{
  return false;
}

// IsTranscodeRequiredBetweenSettings @ 14f049c60

bool __thiscall
ISoundfieldFactory::IsTranscodeRequiredBetweenSettings
          (ISoundfieldFactory *this,ISoundfieldEncodingSettingsProxy *param_1,
          ISoundfieldEncodingSettingsProxy *param_2)

{
  return true;
}

// ShouldEncodeAllStreamsIndependently @ 14f04cff0

bool __thiscall
ISoundfieldFactory::ShouldEncodeAllStreamsIndependently
          (ISoundfieldFactory *this,ISoundfieldEncodingSettingsProxy *param_1)

{
  return false;
}

