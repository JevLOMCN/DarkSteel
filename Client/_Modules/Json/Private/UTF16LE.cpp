// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// Take<rapidjson::MemoryStream> @ 141db4f30

wchar_t __cdecl rapidjson::UTF16LE<wchar_t>::Take<rapidjson::MemoryStream>(MemoryStream *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)param_1->src_;
  if (pbVar3 == (byte *)param_1->end_) {
    return L'\0';
  }
  bVar1 = *pbVar3;
  pbVar4 = pbVar3 + 1;
  param_1->src_ = (char *)pbVar4;
  if (pbVar4 == (byte *)param_1->end_) {
    return (ushort)bVar1;
  }
  bVar2 = *pbVar4;
  param_1->src_ = (char *)(pbVar3 + 2);
  return CONCAT11(bVar2,bVar1);
}

