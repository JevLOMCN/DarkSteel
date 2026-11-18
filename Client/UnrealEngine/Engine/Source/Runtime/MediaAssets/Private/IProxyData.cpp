// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 2

// ~IProxyData @ 146c1e750

void __thiscall Audio::IProxyData::~IProxyData(IProxyData *this)

{
  return;
}

// Clone @ 146c21950

TUniquePtr<Audio::IProxyData,TDefaultDelete<Audio::IProxyData>_> __thiscall
Audio::IProxyData::Clone(IProxyData *this)

{
  IProxyData *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Audio::IProxyData,TDefaultDelete<Audio::IProxyData>_>)in_RDX;
}

