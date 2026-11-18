// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 6

// StaticClass @ 1436e3930

UClass * __cdecl UNNERuntimeNPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeNPU",
               &Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeNPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeNPU>,InternalVTableHelperCtorCaller<UNNERuntimeNPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton;
}

// UNNERuntimeNPU @ 1436e7800

UNNERuntimeNPU * __thiscall
UNNERuntimeNPU::UNNERuntimeNPU(UNNERuntimeNPU *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeNPU__6B_;
  return this;
}

// UNNERuntimeNPU @ 1436e7830

UNNERuntimeNPU * __thiscall
UNNERuntimeNPU::UNNERuntimeNPU(UNNERuntimeNPU *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UNNERuntimeNPU__6B_;
  return this;
}

// ~UNNERuntimeNPU @ 1436e7b80

void __thiscall UNNERuntimeNPU::~UNNERuntimeNPU(UNNERuntimeNPU *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1436e9e70

UClass * __cdecl UNNERuntimeNPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeNPU",
               &Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton,
               StaticRegisterNativesUNNERuntimeNPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeNPU>,InternalVTableHelperCtorCaller<UNNERuntimeNPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton;
}

// StaticRegisterNativesUNNERuntimeNPU @ 1436ed8e0

void __cdecl UNNERuntimeNPU::StaticRegisterNativesUNNERuntimeNPU(void)

{
  return;
}

