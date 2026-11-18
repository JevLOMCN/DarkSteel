// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 8

// StaticClass @ 144645a70

UClass * __cdecl UClothingInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingInteractor",
               &Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton,
               StaticRegisterNativesUClothingInteractor,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingInteractor>,
               InternalVTableHelperCtorCaller<UClothingInteractor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton;
}

// UClothingInteractor @ 1446488e0

UClothingInteractor * __thiscall
UClothingInteractor::UClothingInteractor(UClothingInteractor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ClothingId = -1;
  this->_padding_ = (longlong)&___7UClothingInteractor__6B_;
  return this;
}

// UClothingInteractor @ 144648910

UClothingInteractor * __thiscall
UClothingInteractor::UClothingInteractor(UClothingInteractor *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ClothingId = -1;
  this->_padding_ = (longlong)&___7UClothingInteractor__6B_;
  return this;
}

// ~UClothingInteractor @ 144648da0

void __thiscall UClothingInteractor::~UClothingInteractor(UClothingInteractor *this)

{
  this->_padding_ = (longlong)&___7UClothingInteractor__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14464baf0

UClass * __cdecl UClothingInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingInteractor",
               &Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton,
               StaticRegisterNativesUClothingInteractor,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothingInteractor>,
               InternalVTableHelperCtorCaller<UClothingInteractor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingInteractor.InnerSingleton;
}

// StaticRegisterNativesUClothingInteractor @ 14464c7d0

void __cdecl UClothingInteractor::StaticRegisterNativesUClothingInteractor(void)

{
  return;
}

// Sync @ 14464c880

void __thiscall UClothingInteractor::Sync(UClothingInteractor *this,IClothingSimulation *param_1)

{
  return;
}

// Sync @ 14464c890

void __thiscall
UClothingInteractor::Sync(UClothingInteractor *this,IClothingSimulationInterface *param_1)

{
  IClothingSimulationInterface *pIVar1;
  
  if (param_1 != (IClothingSimulationInterface *)0x0) {
    pIVar1 = (IClothingSimulationInterface *)0x0;
    if (param_1->bIsLegacyInterface != false) {
      pIVar1 = param_1;
    }
    if (pIVar1 != (IClothingSimulationInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014464c8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2b0))(this,pIVar1);
      return;
    }
  }
  return;
}

