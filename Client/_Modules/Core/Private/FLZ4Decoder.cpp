// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DecompressBlock @ 141490370

bool __thiscall
UE::CompressedBuffer::Private::FLZ4Decoder::DecompressBlock
          (FLZ4Decoder *this,TMemoryView<void> *param_1,TMemoryView<void_const_> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (param_2->Size < 0x80000000) {
    uVar1 = param_1->Size;
    iVar2 = 0x7e000000;
    if (uVar1 < 0x7e000000) {
      iVar2 = (int)uVar1;
    }
    iVar2 = LZ4_decompress_safe(param_2->Data,param_1->Data,(int)param_2->Size,iVar2);
    return (longlong)iVar2 == uVar1;
  }
  return false;
}

