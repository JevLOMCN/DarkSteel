// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 6

// StaticClass @ 1436e3a30

UClass * __cdecl UNNERuntimeRDG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeRDG",
               &Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton,
               StaticRegisterNativesUNNERuntimeRDG,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeRDG>,InternalVTableHelperCtorCaller<UNNERuntimeRDG>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton;
}

// UNNERuntimeRDG @ 1436e7860

UNNERuntimeRDG * __thiscall
UNNERuntimeRDG::UNNERuntimeRDG(UNNERuntimeRDG *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeRDG__6B_;
  return this;
}

// UNNERuntimeRDG @ 1436e7890

UNNERuntimeRDG * __thiscall
UNNERuntimeRDG::UNNERuntimeRDG(UNNERuntimeRDG *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeRDG__6B_;
  return this;
}

// ~UNNERuntimeRDG @ 1436e7b90

void __thiscall UNNERuntimeRDG::~UNNERuntimeRDG(UNNERuntimeRDG *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1436e9f30

UClass * __cdecl UNNERuntimeRDG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeRDG",
               &Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton,
               StaticRegisterNativesUNNERuntimeRDG,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeRDG>,InternalVTableHelperCtorCaller<UNNERuntimeRDG>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeRDG @ 1436ed8f0

void __cdecl UNNERuntimeRDG::StaticRegisterNativesUNNERuntimeRDG(void)

{
  return;
}

