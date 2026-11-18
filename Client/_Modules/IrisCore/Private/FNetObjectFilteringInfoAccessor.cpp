// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// GetNetObjectFilteringInfos @ 14423cef0

TArrayView<FNetObjectFilteringInfo,int> * __thiscall
UE::Net::Private::FNetObjectFilteringInfoAccessor::GetNetObjectFilteringInfos
          (FNetObjectFilteringInfoAccessor *this,
          TArrayView<FNetObjectFilteringInfo,int> *__return_storage_ptr__,
          UReplicationSystem *param_1)

{
  FReplicationSystemInternal *pFVar1;
  
  if (param_1 != (UReplicationSystem *)0x0) {
    pFVar1 = UReplicationSystem::GetReplicationSystemInternal(param_1);
    FReplicationFiltering::GetNetObjectFilteringInfos(&pFVar1->Filtering,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr = (FNetObjectFilteringInfo *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

