// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DecompressBlock @ 1414903d0

bool __thiscall
UE::CompressedBuffer::Private::FOodleDecoder::DecompressBlock
          (FOodleDecoder *this,TMemoryView<void> *param_1,TMemoryView<void_const_> *param_2)

{
  bool bVar1;
  
  bVar1 = FOodleDataCompression::Decompress(param_1->Data,param_1->Size,param_2->Data,param_2->Size)
  ;
  return bVar1;
}

