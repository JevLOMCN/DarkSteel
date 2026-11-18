// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 2

// operator() @ 14a661930

void __thiscall
FDNAReader<dna::BinaryStreamReader>::FWrappedReaderDeleter::operator()
          (FWrappedReaderDeleter *this,BinaryStreamReader *param_1)

{
  if (param_1 != (BinaryStreamReader *)0x0) {
    dna::BinaryStreamReader::destroy(param_1);
    return;
  }
  return;
}

// operator() @ 14a661950

void __thiscall
FDNAReader<RigLogicDNAReader>::FWrappedReaderDeleter::operator()
          (FWrappedReaderDeleter *this,RigLogicDNAReader *param_1)

{
  return;
}

