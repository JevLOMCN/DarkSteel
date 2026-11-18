// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 13

// StaticClass @ 14dc291d0

UClass * __cdecl UChaosClothAssetSKMClothingSimulationFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingSimulationFactory",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.
                InnerSingleton,StaticRegisterNativesUChaosClothAssetSKMClothingSimulationFactory,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingSimulationFactory>,
               local_res8,UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.InnerSingleton;
}

// UChaosClothAssetSKMClothingSimulationFactory @ 14dc35410

UChaosClothAssetSKMClothingSimulationFactory * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::UChaosClothAssetSKMClothingSimulationFactory
          (UChaosClothAssetSKMClothingSimulationFactory *this,FVTableHelper *param_1)

{
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,param_1)
  ;
  *(undefined ***)this = &___7UChaosClothAssetSKMClothingSimulationFactory__6B_;
  return this;
}

// UChaosClothAssetSKMClothingSimulationFactory @ 14dc35440

UChaosClothAssetSKMClothingSimulationFactory * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::UChaosClothAssetSKMClothingSimulationFactory
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,pFVar1);
  *(undefined ***)this = &___7UChaosClothAssetSKMClothingSimulationFactory__6B_;
  return this;
}

// ~UChaosClothAssetSKMClothingSimulationFactory @ 14dc36590

void __thiscall
UChaosClothAssetSKMClothingSimulationFactory::~UChaosClothAssetSKMClothingSimulationFactory
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  *(undefined ***)this = &___7UChaosClothAssetSKMClothingSimulationFactory__6B_;
  UClothingSimulationFactory::~UClothingSimulationFactory((UClothingSimulationFactory *)this);
  return;
}

// CreateInteractor @ 14dc44580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClothingSimulationInteractor * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::CreateInteractor
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UClothingSimulationInteractor *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UChaosClothAssetSKMClothingSimulationInteractor::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UClothingSimulationInteractor *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// CreateSimulation @ 14dc44620

IClothingSimulationInterface * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::CreateSimulation
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  IClothingSimulationInterface *this_00;
  
  this_00 = ::operator_new(0x90);
  if (this_00 != (IClothingSimulationInterface *)0x0) {
    IClothingSimulationInterface::IClothingSimulationInterface(this_00);
    *(undefined2 *)&this_00[2]._padding_ = 0;
    this_00[1]._padding_ = (longlong)&___7IClothComponentAdapter_ClothAsset_Chaos_UE__6B_;
    *(undefined ***)&this_00[1].bIsLegacyInterface = &___7FGCObject__6B_;
    FGCObject::RegisterGCObject((FGCObject *)&this_00[1].bIsLegacyInterface);
    this_00->_padding_ =
         (longlong)
         &UE::Chaos::ClothAsset::FSKMClothingSimulation::
          _vftable__for__IClothingSimulationInterface__;
    this_00[1]._padding_ =
         (longlong)
         &UE::Chaos::ClothAsset::FSKMClothingSimulation::
          _vftable__for__UE__Chaos__ClothAsset__IClothComponentAdapter__;
    *(undefined ***)&this_00[1].bIsLegacyInterface =
         &UE::Chaos::ClothAsset::FSKMClothingSimulation::_vftable__for__FGCObject__;
    this_00[3]._padding_ = 0;
    *(undefined8 *)&this_00[3].bIsLegacyInterface = 0;
    this_00[4]._padding_ = 0;
    *(undefined8 *)&this_00[4].bIsLegacyInterface = 0;
    this_00[5]._padding_ = 0;
    *(undefined8 *)&this_00[6].bIsLegacyInterface = 0;
    *(undefined8 *)&this_00[2].bIsLegacyInterface = 0;
    *(undefined4 *)&this_00[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[7]._padding_ + 4) = 0x80;
    this_00[7].bIsLegacyInterface = false;
    this_00[8]._padding_ = 0;
    *(undefined8 *)&this_00[8].bIsLegacyInterface = 0;
    return this_00;
  }
  return (IClothingSimulationInterface *)0x0;
}

// DestroySimulation @ 14dc44a00

void __thiscall
UChaosClothAssetSKMClothingSimulationFactory::DestroySimulation
          (UChaosClothAssetSKMClothingSimulationFactory *this,IClothingSimulationInterface *param_1)

{
  if (param_1 != (IClothingSimulationInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc44a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// GetClothConfigClasses @ 14dc4aa90

TArrayView<TSubclassOf<UClothConfigBase>_const_,int> * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::GetClothConfigClasses
          (UChaosClothAssetSKMClothingSimulationFactory *this,
          TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TSubclassOf<UClothConfigBase> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dc4e4d0

UClass * __cdecl UChaosClothAssetSKMClothingSimulationFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosClothAssetEngine",L"ChaosClothAssetSKMClothingSimulationFactory",
               &Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.
                InnerSingleton,StaticRegisterNativesUChaosClothAssetSKMClothingSimulationFactory,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosClothAssetSKMClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UChaosClothAssetSKMClothingSimulationFactory>,
               local_res8,UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothAssetSKMClothingSimulationFactory.InnerSingleton;
}

// GetWeightMapTargetEnum @ 14dc50db0

UEnum * __thiscall
UChaosClothAssetSKMClothingSimulationFactory::GetWeightMapTargetEnum
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  return (UEnum *)0x0;
}

// StaticRegisterNativesUChaosClothAssetSKMClothingSimulationFactory @ 14dc5a820

void __cdecl
UChaosClothAssetSKMClothingSimulationFactory::
StaticRegisterNativesUChaosClothAssetSKMClothingSimulationFactory(void)

{
  return;
}

// SupportsAsset @ 14dc5a890

bool __thiscall
UChaosClothAssetSKMClothingSimulationFactory::SupportsAsset
          (UChaosClothAssetSKMClothingSimulationFactory *this,UClothingAssetBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClothingAssetBase *)0x0) {
    pUVar2 = UChaosClothAssetSKMClothingAsset::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14dc5a8c3;
  }
  param_1 = (UClothingAssetBase *)0x0;
LAB_14dc5a8c3:
  return param_1 != (UClothingAssetBase *)0x0;
}

// SupportsRuntimeInteraction @ 14dc5a8e0

bool __thiscall
UChaosClothAssetSKMClothingSimulationFactory::SupportsRuntimeInteraction
          (UChaosClothAssetSKMClothingSimulationFactory *this)

{
  return true;
}

