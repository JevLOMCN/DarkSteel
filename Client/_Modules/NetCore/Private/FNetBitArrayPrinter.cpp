// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 2

// PrintSetSummary<UE::Net::FNetBitArray> @ 1441cde80

FString * __cdecl
UE::Net::FNetBitArrayPrinter::PrintSetSummary<UE::Net::FNetBitArray>
          (FString *__return_storage_ptr__,FNetBitArray *param_1)

{
  FNetBitArrayHelper::CountSetBits
            ((uint *)(param_1->Storage).AllocatorInstance.Data,param_1->BitCount,0,0xffffffff);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u bits set");
  return __return_storage_ptr__;
}

// PrintSetSummary<UE::Net::FNetBitArrayView> @ 1441cded0

FString * __cdecl
UE::Net::FNetBitArrayPrinter::PrintSetSummary<UE::Net::FNetBitArrayView>
          (FString *__return_storage_ptr__,FNetBitArrayView *param_1)

{
  FNetBitArrayHelper::CountSetBits(param_1->Storage,param_1->BitCount,0,0xffffffff);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u bits set");
  return __return_storage_ptr__;
}

