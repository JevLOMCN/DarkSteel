// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 2

// DestroyObject @ 14db55330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothCollection,1>::
DestroyObject(TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothCollection,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14db55340

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Chaos::ClothAsset::FConstClothCollection,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Chaos::ClothAsset::FConstClothCollection,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

