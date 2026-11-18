// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FSerializedNameHeader @ 141a71c20

FSerializedNameHeader * __thiscall
FSerializedNameHeader::FSerializedNameHeader(FSerializedNameHeader *this,uint param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FSerializedNameHeader *pFVar3;
  
  if (0x3ff < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Len < NAME_SIZE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\UObject\\UnrealNames.cpp"
                       ,0x1285,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSerializedNameHeader *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->Data[1] = (uchar)param_1;
  this->Data[0] = (byte)(param_1 >> 8) | param_2 << 7;
  return this;
}

