// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 1

// ToString @ 1441ecb10

FString * __thiscall
UE::Net::FNetBitArrayView::ToString(FNetBitArrayView *this,FString *__return_storage_ptr__)

{
  FNetBitArrayHelper::CountSetBits(this->Storage,this->BitCount,0,0xffffffff);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u bits set");
  return __return_storage_ptr__;
}

