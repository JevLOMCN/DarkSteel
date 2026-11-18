// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 7

// StaticClass @ 14dc27d80

UClass * __cdecl UChaosClothAssetSKMClothingInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetSKMClothingInteractor,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton;
}

// UChaosClothAssetSKMClothingInteractor @ 14dc353b0

UChaosClothAssetSKMClothingInteractor * __thiscall
UChaosClothAssetSKMClothingInteractor::UChaosClothAssetSKMClothingInteractor
          (UChaosClothAssetSKMClothingInteractor *this,FVTableHelper *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingInteractor__6B_;
  (this->ClothingAsset).field0_0x0.DebugPtr = (UChaosClothAssetSKMClothingAsset *)0x0;
  return this;
}

// UChaosClothAssetSKMClothingInteractor @ 14dc353e0

UChaosClothAssetSKMClothingInteractor * __thiscall
UChaosClothAssetSKMClothingInteractor::UChaosClothAssetSKMClothingInteractor
          (UChaosClothAssetSKMClothingInteractor *this,FObjectInitializer *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingInteractor__6B_;
  (this->ClothingAsset).field0_0x0.DebugPtr = (UChaosClothAssetSKMClothingAsset *)0x0;
  return this;
}

// ~UChaosClothAssetSKMClothingInteractor @ 14dc36570

void __thiscall
UChaosClothAssetSKMClothingInteractor::~UChaosClothAssetSKMClothingInteractor
          (UChaosClothAssetSKMClothingInteractor *this)

{
  this->_padding_ = (longlong)&___7UChaosClothAssetSKMClothingInteractor__6B_;
  UClothingInteractor::~UClothingInteractor((UClothingInteractor *)this);
  return;
}

// GetPrivateStaticClass @ 14dc4e410

UClass * __cdecl UChaosClothAssetSKMClothingInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingInteractor",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothAssetSKMClothingInteractor,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingInteractor.InnerSingleton;
}

// Initialize @ 14dc523a0

void __thiscall
UChaosClothAssetSKMClothingInteractor::Initialize
          (UChaosClothAssetSKMClothingInteractor *this,UChaosClothAssetSKMClothingAsset *param_1,
          int param_2)

{
  *(int *)&this->_padding_ = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UChaosClothAssetSKMClothingAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ClothingAsset).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->ClothingAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUChaosClothAssetSKMClothingInteractor @ 14dc5a810

void __cdecl
UChaosClothAssetSKMClothingInteractor::StaticRegisterNativesUChaosClothAssetSKMClothingInteractor
          (void)

{
  return;
}

