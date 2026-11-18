// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FExistingPackageReference @ 14212b690

FExistingPackageReference * __thiscall
PackageReloadInternal::FExistingPackageReference::FExistingPackageReference
          (FExistingPackageReference *this,UPackage *param_1)

{
  UPackage *local_res8;
  
  this->RawRef = param_1;
  (this->StrongRef).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UPackage *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPackage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  (this->WeakRef).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPackage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakRef).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

