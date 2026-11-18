// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 13

// StaticClass @ 148c358d0

UClass * __cdecl UClothingSimulationFactoryNv::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationFactoryNv",
               &Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton,
               StaticRegisterNativesUClothingSimulationFactoryNv,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationFactoryNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactoryNv>,local_res8,
               UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton;
}

// UClothingSimulationFactoryNv @ 148c36950

UClothingSimulationFactoryNv * __thiscall
UClothingSimulationFactoryNv::UClothingSimulationFactoryNv
          (UClothingSimulationFactoryNv *this,FVTableHelper *param_1)

{
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,param_1)
  ;
  *(undefined ***)this = &___7UClothingSimulationFactoryNv__6B_;
  return this;
}

// UClothingSimulationFactoryNv @ 148c36980

UClothingSimulationFactoryNv * __thiscall
UClothingSimulationFactoryNv::UClothingSimulationFactoryNv
          (UClothingSimulationFactoryNv *this,FObjectInitializer *param_1)

{
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,param_1)
  ;
  *(undefined ***)this = &___7UClothingSimulationFactoryNv__6B_;
  return this;
}

// ~UClothingSimulationFactoryNv @ 148c36aa0

void __thiscall
UClothingSimulationFactoryNv::~UClothingSimulationFactoryNv(UClothingSimulationFactoryNv *this)

{
  *(undefined ***)this = &___7UClothingSimulationFactoryNv__6B_;
  UClothingSimulationFactory::~UClothingSimulationFactory((UClothingSimulationFactory *)this);
  return;
}

// CreateInteractor @ 148c36d10

UClothingSimulationInteractor * __thiscall
UClothingSimulationFactoryNv::CreateInteractor(UClothingSimulationFactoryNv *this)

{
  return (UClothingSimulationInteractor *)0x0;
}

// CreateSimulation @ 148c36d20

IClothingSimulationInterface * __thiscall
UClothingSimulationFactoryNv::CreateSimulation(UClothingSimulationFactoryNv *this)

{
  return (IClothingSimulationInterface *)0x0;
}

// DestroySimulation @ 148c36d30

void __thiscall
UClothingSimulationFactoryNv::DestroySimulation
          (UClothingSimulationFactoryNv *this,IClothingSimulationInterface *param_1)

{
  return;
}

// GetClothConfigClasses @ 148c36db0

TArrayView<TSubclassOf<UClothConfigBase>_const_,int> * __thiscall
UClothingSimulationFactoryNv::GetClothConfigClasses
          (UClothingSimulationFactoryNv *this,
          TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TSubclassOf<UClothConfigBase> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148c36f80

UClass * __cdecl UClothingSimulationFactoryNv::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothingSimulationFactoryNv",
               &Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton,
               StaticRegisterNativesUClothingSimulationFactoryNv,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationFactoryNv>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactoryNv>,local_res8,
               UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactoryNv.InnerSingleton;
}

// GetWeightMapTargetEnum @ 148c37150

UEnum * __thiscall
UClothingSimulationFactoryNv::GetWeightMapTargetEnum(UClothingSimulationFactoryNv *this)

{
  return (UEnum *)0x0;
}

// StaticRegisterNativesUClothingSimulationFactoryNv @ 148c377d0

void __cdecl UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv(void)

{
  return;
}

// SupportsAsset @ 148c37820

bool __thiscall
UClothingSimulationFactoryNv::SupportsAsset
          (UClothingSimulationFactoryNv *this,UClothingAssetBase *param_1)

{
  return false;
}

// SupportsRuntimeInteraction @ 148c37830

bool __thiscall
UClothingSimulationFactoryNv::SupportsRuntimeInteraction(UClothingSimulationFactoryNv *this)

{
  return false;
}

