// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// From @ 1445cfa00

THash<96> * __cdecl UE::THash<96>::From(THash<96> *__return_storage_ptr__,FIoHash *param_1)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)param_1->Hash;
  *(undefined4 *)(__return_storage_ptr__->Hash + 8) = *(undefined4 *)(param_1->Hash + 8);
  return __return_storage_ptr__;
}

