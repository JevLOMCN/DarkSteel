// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// GetBufferTypeString @ 145ca8d70

wchar_t * __cdecl FRHIViewDesc::GetBufferTypeString(EBufferType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Unknown) {
    return L"Unknown";
  }
  if (param_1 == Typed) {
    return L"Typed";
  }
  if (param_1 == Structured) {
    return L"Structured";
  }
  if (param_1 != AccelerationStructure) {
    if (param_1 == Raw) {
      return L"Raw";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x9d,L"Missing FRHIViewDesc::EBufferType %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"AccelerationStructure";
}

// GetTextureDimensionString @ 145caceb0

/* WARNING: Enum "EDimension": Some values do not have unique names */

wchar_t * __cdecl FRHIViewDesc::GetTextureDimensionString(EDimension param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Texture2D) {
    return L"Texture2D";
  }
  if (param_1 == Texture2DArray) {
    return L"Texture2DArray";
  }
  if (param_1 == NumBits) {
    return L"TextureCube";
  }
  if (param_1 != TextureCubeArray) {
    if (param_1 == Texture3D) {
      return L"Texture3D";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0xab,L"Missing FRHIViewDesc::EDimension %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"";
  }
  return L"TextureCubeArray";
}

