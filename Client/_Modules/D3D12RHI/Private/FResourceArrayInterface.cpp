// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetTypeLayout @ 145a1bb50

FTypeLayoutDesc * __thiscall FResourceArrayInterface::GetTypeLayout(FResourceArrayInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FTypeLayoutDesc *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\MemoryImage.cpp"
                     ,0x123,L"Access to Abstract/Invalid type layout desc");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTypeLayoutDesc *)(*pcVar1)();
    return pFVar3;
  }
  return &InvalidTypeDesc;
}

