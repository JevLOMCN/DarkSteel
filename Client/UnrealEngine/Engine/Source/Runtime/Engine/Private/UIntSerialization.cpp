// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147d54820

UClass * __cdecl UIntSerialization::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntSerialization.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"IntSerialization",
               &Z_Registration_Info_UClass_UIntSerialization.InnerSingleton,
               StaticRegisterNativesUIntSerialization,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIntSerialization>,
               InternalVTableHelperCtorCaller<UIntSerialization>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntSerialization.InnerSingleton;
}

// UIntSerialization @ 147d79860

UIntSerialization * __thiscall
UIntSerialization::UIntSerialization(UIntSerialization *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIntSerialization__6B_;
  return this;
}

// UIntSerialization @ 147d79890

UIntSerialization * __thiscall
UIntSerialization::UIntSerialization(UIntSerialization *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UIntSerialization__6B_;
  return this;
}

// ~UIntSerialization @ 147d7b9d0

void __thiscall UIntSerialization::~UIntSerialization(UIntSerialization *this)

{
  this->_padding_ = (longlong)&___7UIntSerialization__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147da7b90

UClass * __cdecl UIntSerialization::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntSerialization.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"IntSerialization",
               &Z_Registration_Info_UClass_UIntSerialization.InnerSingleton,
               StaticRegisterNativesUIntSerialization,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UIntSerialization>,
               InternalVTableHelperCtorCaller<UIntSerialization>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntSerialization.InnerSingleton;
}

// StaticRegisterNativesUIntSerialization @ 147dc4070

void __cdecl UIntSerialization::StaticRegisterNativesUIntSerialization(void)

{
  return;
}

