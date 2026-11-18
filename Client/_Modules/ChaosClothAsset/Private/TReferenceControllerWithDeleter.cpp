// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 2

// DestroyObject @ 14db55350

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<FSoftObjectPath>,SharedPointerInternals::DefaultDeleter<TManagedArray<FSoftObjectPath>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TManagedArray<FSoftObjectPath>,SharedPointerInternals::DefaultDeleter<TManagedArray<FSoftObjectPath>_>,1>
                *this)

{
  TManagedArray<FSoftObjectPath> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TManagedArray<FSoftObjectPath> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014db55361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 0x48))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14db55370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>,1>
                *this)

{
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
                    /* WARNING: Could not recover jumptable at 0x00014db55381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 0x48))(pTVar1,1);
    return;
  }
  return;
}

