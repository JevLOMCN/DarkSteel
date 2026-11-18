// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 6

// StaticClass @ 1436e3730

UClass * __cdecl UNNERuntimeCPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeCPU",
               &Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeCPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeCPU>,InternalVTableHelperCtorCaller<UNNERuntimeCPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton;
}

// UNNERuntimeCPU @ 1436e7740

UNNERuntimeCPU * __thiscall
UNNERuntimeCPU::UNNERuntimeCPU(UNNERuntimeCPU *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeCPU__6B_;
  return this;
}

// UNNERuntimeCPU @ 1436e7770

UNNERuntimeCPU * __thiscall
UNNERuntimeCPU::UNNERuntimeCPU(UNNERuntimeCPU *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeCPU__6B_;
  return this;
}

// ~UNNERuntimeCPU @ 1436e7b60

void __thiscall UNNERuntimeCPU::~UNNERuntimeCPU(UNNERuntimeCPU *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1436e9cf0

UClass * __cdecl UNNERuntimeCPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeCPU",
               &Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeCPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeCPU>,InternalVTableHelperCtorCaller<UNNERuntimeCPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeCPU @ 1436ed8c0

void __cdecl UNNERuntimeCPU::StaticRegisterNativesUNNERuntimeCPU(void)

{
  return;
}

