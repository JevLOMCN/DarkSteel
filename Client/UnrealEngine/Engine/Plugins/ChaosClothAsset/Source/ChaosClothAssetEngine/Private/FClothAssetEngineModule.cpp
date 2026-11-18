// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 3

// StartupModule @ 14dc29d90

void __thiscall
UE::Chaos::ClothAsset::FClothAssetEngineModule::StartupModule(FClothAssetEngineModule *this)

{
  TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
  *pTVar1;
  FClothComponentCacheAdapter *pFVar2;
  undefined8 *puVar3;
  IModularFeatures *pIVar4;
  FClothComponentCacheAdapter *pFVar5;
  FClothComponentCacheAdapter *pFVar6;
  undefined8 local_18 [2];
  
  pFVar2 = ::operator_new(0x18);
  pFVar6 = (FClothComponentCacheAdapter *)0x0;
  pFVar5 = pFVar6;
  if (pFVar2 != (FClothComponentCacheAdapter *)0x0) {
    *(undefined8 *)pFVar2 = 0;
    *(undefined8 *)&pFVar2->field_0x8 = 0;
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined ***)pFVar2 = &___7FClothComponentCacheAdapter_ClothAsset_Chaos_UE__6B_;
    *(undefined4 *)&pFVar2->field_0xc = 0x7f7fffff;
    *(undefined4 *)&pFVar2->field_0x10 = 0xff7fffff;
    pFVar5 = pFVar2;
  }
  pTVar1 = &this->ClothComponentCacheAdapter;
  if (pTVar1 == (TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
                 *)local_18) {
    if (pFVar5 == (FClothComponentCacheAdapter *)0x0) goto LAB_14dc29e0f;
    puVar3 = *(undefined8 **)pFVar5;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar2 == (FClothComponentCacheAdapter *)0x0) goto LAB_14dc29e0f;
    puVar3 = *(undefined8 **)pFVar2;
    pFVar5 = pFVar2;
  }
  (*(code *)*puVar3)(pFVar5,1);
LAB_14dc29e0f:
  ::Chaos::RegisterAdapter((FComponentCacheAdapter *)pTVar1->Ptr);
  pIVar4 = IModularFeatures::Get();
  pFVar5 = (FClothComponentCacheAdapter *)&this->_padding_;
  if (this == (FClothAssetEngineModule *)0x0) {
    pFVar5 = pFVar6;
  }
  if (pFVar5 != (FClothComponentCacheAdapter *)0x0) {
    pFVar6 = (FClothComponentCacheAdapter *)&pFVar5->field_0x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dc29e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar4 + 0x28))
            (pIVar4,IClothingSimulationFactoryClassProvider::FeatureName,pFVar6,
             *(code **)((longlong)*pIVar4 + 0x28));
  return;
}

// ShutdownModule @ 14dc29e60

void __thiscall
UE::Chaos::ClothAsset::FClothAssetEngineModule::ShutdownModule(FClothAssetEngineModule *this)

{
  IModularFeatures *pIVar1;
  TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
  *pTVar2;
  TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
  *pTVar3;
  
  pIVar1 = IModularFeatures::Get();
  pTVar3 = (TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
            *)0x0;
  pTVar2 = (TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
            *)&this->_padding_;
  if (this == (FClothAssetEngineModule *)0x0) {
    pTVar2 = pTVar3;
  }
  if (pTVar2 != (TUniquePtr<UE::Chaos::ClothAsset::FClothComponentCacheAdapter,TDefaultDelete<UE::Chaos::ClothAsset::FClothComponentCacheAdapter>_>
                 *)0x0) {
    pTVar3 = pTVar2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014dc29e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,IClothingSimulationFactoryClassProvider::FeatureName,pTVar3,
             *(code **)((longlong)*pIVar1 + 0x30));
  return;
}

// GetClothingSimulationFactoryClass @ 14dc29eb0

TSubclassOf<UClothingSimulationFactory> __thiscall
UE::Chaos::ClothAsset::FClothAssetEngineModule::GetClothingSimulationFactoryClass
          (FClothAssetEngineModule *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UChaosClothAssetSKMClothingSimulationFactory::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UClothingSimulationFactory>)in_RDX.field0_0x0;
}

