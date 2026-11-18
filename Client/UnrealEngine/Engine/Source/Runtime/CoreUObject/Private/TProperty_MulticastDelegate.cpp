// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetCPPType @ 142179fc0

FString * __thiscall
TProperty_MulticastDelegate<FSparseDelegate>::GetCPPType
          (TProperty_MulticastDelegate<FSparseDelegate> *this,FString *__return_storage_ptr__,
          FString *param_1,uint param_2)

{
  FMulticastDelegateProperty::GetCPPType
            ((FMulticastDelegateProperty *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetCPPType @ 142179fe0

FString * __thiscall
TProperty_MulticastDelegate<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>_>::GetCPPType
          (TProperty_MulticastDelegate<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>_> *this,
          FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FMulticastDelegateProperty::GetCPPType
            ((FMulticastDelegateProperty *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

