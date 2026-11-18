// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 6

// StaticClass @ 1436e35f0

UClass * __cdecl UNNERuntime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntime",&Z_Registration_Info_UClass_UNNERuntime.InnerSingleton,
               StaticRegisterNativesUNNERuntime,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntime>,InternalVTableHelperCtorCaller<UNNERuntime>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntime.InnerSingleton;
}

// UNNERuntime @ 1436e76e0

UNNERuntime * __thiscall UNNERuntime::UNNERuntime(UNNERuntime *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntime__6B_;
  return this;
}

// UNNERuntime @ 1436e7710

UNNERuntime * __thiscall UNNERuntime::UNNERuntime(UNNERuntime *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntime__6B_;
  return this;
}

// ~UNNERuntime @ 1436e7b50

void __thiscall UNNERuntime::~UNNERuntime(UNNERuntime *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1436e9c30

UClass * __cdecl UNNERuntime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntime",&Z_Registration_Info_UClass_UNNERuntime.InnerSingleton,
               StaticRegisterNativesUNNERuntime,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntime>,InternalVTableHelperCtorCaller<UNNERuntime>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntime.InnerSingleton;
}

// StaticRegisterNativesUNNERuntime @ 1436ed8b0

void __cdecl UNNERuntime::StaticRegisterNativesUNNERuntime(void)

{
  return;
}

