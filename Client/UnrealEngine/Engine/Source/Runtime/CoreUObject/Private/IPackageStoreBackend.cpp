// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~IPackageStoreBackend @ 141f23f10

void __thiscall IPackageStoreBackend::~IPackageStoreBackend(IPackageStoreBackend *this)

{
  *this = (IPackageStoreBackend)&___7IPackageStoreBackend__6B_;
  return;
}

// GetSoftReferences @ 141f36c90

TArrayView<unsigned_int_const_,int> * __thiscall
IPackageStoreBackend::GetSoftReferences
          (IPackageStoreBackend *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          FPackageId param_1,TArrayView<FPackageId_const_,int> *param_2)

{
  __return_storage_ptr__->DataPtr = (uint *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetSupportedLoaders @ 141f36de0

EPackageLoader __thiscall IPackageStoreBackend::GetSupportedLoaders(IPackageStoreBackend *this)

{
  return Zen;
}

