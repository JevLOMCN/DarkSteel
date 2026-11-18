// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 6

// StaticClass @ 1436e3830

UClass * __cdecl UNNERuntimeGPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeGPU",
               &Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeGPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeGPU>,InternalVTableHelperCtorCaller<UNNERuntimeGPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton;
}

// UNNERuntimeGPU @ 1436e77a0

UNNERuntimeGPU * __thiscall
UNNERuntimeGPU::UNNERuntimeGPU(UNNERuntimeGPU *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeGPU__6B_;
  return this;
}

// UNNERuntimeGPU @ 1436e77d0

UNNERuntimeGPU * __thiscall
UNNERuntimeGPU::UNNERuntimeGPU(UNNERuntimeGPU *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeGPU__6B_;
  return this;
}

// ~UNNERuntimeGPU @ 1436e7b70

void __thiscall UNNERuntimeGPU::~UNNERuntimeGPU(UNNERuntimeGPU *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1436e9db0

UClass * __cdecl UNNERuntimeGPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeGPU",
               &Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeGPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeGPU>,InternalVTableHelperCtorCaller<UNNERuntimeGPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeGPU @ 1436ed8d0

void __cdecl UNNERuntimeGPU::StaticRegisterNativesUNNERuntimeGPU(void)

{
  return;
}

