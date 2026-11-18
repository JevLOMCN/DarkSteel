// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 4

// DestroyObject @ 14dc44980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FChaosClothSimulationModel,1>::DestroyObject
          (TIntrusiveReferenceController<FChaosClothSimulationModel,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FChaosClothSimulationLodModel,int>
            (*(FChaosClothSimulationLodModel **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14dc449d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *this)

{
  UE::Chaos::ClothAsset::FClothSimulationProxy::~FClothSimulationProxy
            ((FClothSimulationProxy *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dc449e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Chaos::ClothAsset::FCollectionClothConstFacade,1> *this
          )

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14dc449f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::Softs::FCollectionPropertyMutableFacade,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::Softs::FCollectionPropertyMutableFacade,1> *this)

{
  Chaos::Softs::FCollectionPropertyConstFacade::~FCollectionPropertyConstFacade
            ((FCollectionPropertyConstFacade *)&this->ObjectStorage);
  return;
}

