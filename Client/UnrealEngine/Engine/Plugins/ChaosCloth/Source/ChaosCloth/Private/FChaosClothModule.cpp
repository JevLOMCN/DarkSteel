// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// StartupModule @ 14db782e0

void __thiscall FChaosClothModule::StartupModule(FChaosClothModule *this)

{
  TUniquePtr<Chaos::FSkeletalMeshCacheAdapter,TDefaultDelete<Chaos::FSkeletalMeshCacheAdapter>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  IModularFeatures *pIVar4;
  FSkeletalMeshCacheAdapter *pFVar5;
  TUniquePtr<Chaos::FSkeletalMeshCacheAdapter,TDefaultDelete<Chaos::FSkeletalMeshCacheAdapter>_>
  TVar6;
  FSkeletalMeshCacheAdapter *pFVar7;
  undefined8 local_18 [2];
  
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothModule.cpp"
                         ,0x12,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar4 = IModularFeatures::Get();
  pTVar1 = &this->SkeletalMeshAdapter;
  pFVar7 = (FSkeletalMeshCacheAdapter *)0x0;
  pFVar5 = (FSkeletalMeshCacheAdapter *)pTVar1;
  if (this == (FChaosClothModule *)0x0) {
    pFVar5 = pFVar7;
  }
  (**(code **)((longlong)*pIVar4 + 0x28))
            (pIVar4,IClothingSimulationFactoryClassProvider::FeatureName,pFVar5);
  pFVar5 = ::operator_new(0x18);
  if (pFVar5 != (FSkeletalMeshCacheAdapter *)0x0) {
    *(FSkeletalMeshCacheAdapter **)pFVar5 = (FSkeletalMeshCacheAdapter *)0x0;
    *(undefined8 *)&pFVar5->field_0x8 = 0;
    *(undefined8 *)&pFVar5->field_0x10 = 0;
    *(undefined ***)pFVar5 = &___7FSkeletalMeshCacheAdapter_Chaos__6B_;
    *(undefined4 *)&pFVar5->field_0xc = 0x7f7fffff;
    *(undefined4 *)&pFVar5->field_0x10 = 0xff7fffff;
    pFVar7 = pFVar5;
  }
  if (pTVar1 == (TUniquePtr<Chaos::FSkeletalMeshCacheAdapter,TDefaultDelete<Chaos::FSkeletalMeshCacheAdapter>_>
                 *)local_18) {
    if (pFVar7 == (FSkeletalMeshCacheAdapter *)0x0) goto LAB_14db783b2;
                    /* WARNING: Load size is inaccurate */
    TVar6.Ptr = *pFVar7;
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (pFVar5 == (FSkeletalMeshCacheAdapter *)0x0) goto LAB_14db783b2;
                    /* WARNING: Load size is inaccurate */
    TVar6.Ptr = *pFVar5;
    pFVar7 = pFVar5;
  }
  (**(code **)TVar6.Ptr)(pFVar7,1);
LAB_14db783b2:
  Chaos::RegisterAdapter((FComponentCacheAdapter *)pTVar1->Ptr);
  return;
}

// ShutdownModule @ 14db783d0

void __thiscall FChaosClothModule::ShutdownModule(FChaosClothModule *this)

{
  FSkeletalMeshCacheAdapter *pFVar1;
  IModularFeatures *pIVar2;
  TUniquePtr<Chaos::FSkeletalMeshCacheAdapter,TDefaultDelete<Chaos::FSkeletalMeshCacheAdapter>_>
  *pTVar3;
  
  pIVar2 = IModularFeatures::Get();
  pTVar3 = &this->SkeletalMeshAdapter;
  if (this == (FChaosClothModule *)0x0) {
    pTVar3 = (TUniquePtr<Chaos::FSkeletalMeshCacheAdapter,TDefaultDelete<Chaos::FSkeletalMeshCacheAdapter>_>
              *)0x0;
  }
  (**(code **)((longlong)*pIVar2 + 0x30))
            (pIVar2,IClothingSimulationFactoryClassProvider::FeatureName,pTVar3);
  Chaos::UnregisterAdapter((FComponentCacheAdapter *)(this->SkeletalMeshAdapter).Ptr);
  pFVar1 = (this->SkeletalMeshAdapter).Ptr;
  (this->SkeletalMeshAdapter).Ptr = (FSkeletalMeshCacheAdapter *)0x0;
  if (pFVar1 != (FSkeletalMeshCacheAdapter *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  return;
}

// GetClothingSimulationFactoryClass @ 14db78440

TSubclassOf<UClothingSimulationFactory> __thiscall
FChaosClothModule::GetClothingSimulationFactoryClass(FChaosClothModule *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UChaosClothingSimulationFactory::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UClothingSimulationFactory>)in_RDX.field0_0x0;
}

