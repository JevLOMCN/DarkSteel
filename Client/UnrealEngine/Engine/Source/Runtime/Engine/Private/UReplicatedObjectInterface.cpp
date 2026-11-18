// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1480746c0

UClass * __cdecl UReplicatedObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicatedObjectInterface",
               &Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton,
               StaticRegisterNativesUReplicatedObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicatedObjectInterface>,
               InternalVTableHelperCtorCaller<UReplicatedObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton;
}

// UReplicatedObjectInterface @ 14808c8c0

UReplicatedObjectInterface * __thiscall
UReplicatedObjectInterface::UReplicatedObjectInterface
          (UReplicatedObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UReplicatedObjectInterface__6B_;
  return this;
}

// UReplicatedObjectInterface @ 14808c8f0

UReplicatedObjectInterface * __thiscall
UReplicatedObjectInterface::UReplicatedObjectInterface
          (UReplicatedObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UReplicatedObjectInterface__6B_;
  return this;
}

// ~UReplicatedObjectInterface @ 14808f8b0

void __thiscall
UReplicatedObjectInterface::~UReplicatedObjectInterface(UReplicatedObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1480aa260

UClass * __cdecl UReplicatedObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplicatedObjectInterface",
               &Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton,
               StaticRegisterNativesUReplicatedObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplicatedObjectInterface>,
               InternalVTableHelperCtorCaller<UReplicatedObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplicatedObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUReplicatedObjectInterface @ 1480d57e0

void __cdecl UReplicatedObjectInterface::StaticRegisterNativesUReplicatedObjectInterface(void)

{
  return;
}

