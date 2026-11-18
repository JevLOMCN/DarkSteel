// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XInputDevice
// Functions: 1

// GetInputDeviceConnectionState @ 14f12d0e0

EInputDeviceConnectionState __cdecl
UE::XInputInterface::Private::GetInputDeviceConnectionState(bool param_1,bool param_2)

{
  EInputDeviceConnectionState EVar1;
  
  if (!param_1) {
    EVar1 = Unknown;
    if (param_2) {
      EVar1 = Connected;
    }
    return EVar1;
  }
  return !param_2 + Unknown;
}

