// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Get @ 14175b3e0

IIoChunkBlockDecoder * __cdecl FIoChunkBlockDecoder::Get(void)

{
  code *pcVar1;
  bool bVar2;
  IIoChunkBlockDecoder *pIVar3;
  
  if ((Instance == (IIoChunkBlockDecoder *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                         ,0x1e1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IIoChunkBlockDecoder *)(*pcVar1)();
    return pIVar3;
  }
  return Instance;
}

// Release @ 1417762e0

void __cdecl FIoChunkBlockDecoder::Release(void)

{
  Instance = (IIoChunkBlockDecoder *)0x0;
  return;
}

// Set @ 14177d040

void __cdecl FIoChunkBlockDecoder::Set(IIoChunkBlockDecoder *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (Instance != (IIoChunkBlockDecoder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoChunkEncoding.cpp"
                       ,0x1db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Instance = param_1;
  return;
}

