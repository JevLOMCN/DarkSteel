// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca40250

UClass * __cdecl ULatticeStateStorage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LatticeStateStorage",
               &Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton,
               StaticRegisterNativesULatticeStateStorage,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeStateStorage>,
               InternalVTableHelperCtorCaller<ULatticeStateStorage>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton;
}

// ULatticeStateStorage @ 14ca67c00

ULatticeStateStorage * __thiscall
ULatticeStateStorage::ULatticeStateStorage(ULatticeStateStorage *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULatticeStateStorage__6B_;
  return this;
}

// ULatticeStateStorage @ 14ca67c30

ULatticeStateStorage * __thiscall
ULatticeStateStorage::ULatticeStateStorage(ULatticeStateStorage *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7ULatticeStateStorage__6B_;
  return this;
}

// ~ULatticeStateStorage @ 14ca6b680

void __thiscall ULatticeStateStorage::~ULatticeStateStorage(ULatticeStateStorage *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca914f0

UClass * __cdecl ULatticeStateStorage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LatticeStateStorage",
               &Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton,
               StaticRegisterNativesULatticeStateStorage,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeStateStorage>,
               InternalVTableHelperCtorCaller<ULatticeStateStorage>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeStateStorage.InnerSingleton;
}

// StaticRegisterNativesULatticeStateStorage @ 14caa7150

void __cdecl ULatticeStateStorage::StaticRegisterNativesULatticeStateStorage(void)

{
  return;
}

