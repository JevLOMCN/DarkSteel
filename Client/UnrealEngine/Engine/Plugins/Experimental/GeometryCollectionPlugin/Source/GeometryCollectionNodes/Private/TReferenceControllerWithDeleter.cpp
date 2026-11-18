// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// DestroyObject @ 14e945990

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<double>,SharedPointerInternals::DefaultDeleter<TManagedArray<double>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TManagedArray<double>,SharedPointerInternals::DefaultDeleter<TManagedArray<double>_>,1>
                *this)

{
  TManagedArray<double> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TManagedArray<double> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e9459a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 0x48))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14e9459b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
                0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e9459c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 0x48))(pTVar1,1);
    return;
  }
  return;
}

