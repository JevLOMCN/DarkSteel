// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 1

// operator-> @ 14dc36d10

FClothSimulationProxy * __thiscall
TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1>::operator->
          (TSharedPtr<UE::Chaos::ClothAsset::FClothSimulationProxy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FClothSimulationProxy *pFVar3;
  
  if (this->Object != (FClothSimulationProxy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FClothSimulationProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

