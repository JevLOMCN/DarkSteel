// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 6

// StaticClass @ 1494bcc70

UClass * __cdecl UComputeKernel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernel",
               &Z_Registration_Info_UClass_UComputeKernel.InnerSingleton,
               StaticRegisterNativesUComputeKernel,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeKernel>,InternalVTableHelperCtorCaller<UComputeKernel>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernel.InnerSingleton;
}

// UComputeKernel @ 1494c4de0

UComputeKernel * __thiscall
UComputeKernel::UComputeKernel(UComputeKernel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernel__6B_;
  (this->KernelSource).field0_0x0.DebugPtr = (UComputeKernelSource *)0x0;
  this->KernelFlags = 0;
  return this;
}

// UComputeKernel @ 1494c4e10

UComputeKernel * __thiscall
UComputeKernel::UComputeKernel(UComputeKernel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UComputeKernel__6B_;
  (this->KernelSource).field0_0x0.DebugPtr = (UComputeKernelSource *)0x0;
  this->KernelFlags = 0;
  return this;
}

// ~UComputeKernel @ 1494c5e90

void __thiscall UComputeKernel::~UComputeKernel(UComputeKernel *this)

{
  this->_padding_ = (longlong)&___7UComputeKernel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d08a0

UClass * __cdecl UComputeKernel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComputeKernel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"ComputeKernel",
               &Z_Registration_Info_UClass_UComputeKernel.InnerSingleton,
               StaticRegisterNativesUComputeKernel,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComputeKernel>,InternalVTableHelperCtorCaller<UComputeKernel>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComputeKernel.InnerSingleton;
}

// StaticRegisterNativesUComputeKernel @ 1494d7ec0

void __cdecl UComputeKernel::StaticRegisterNativesUComputeKernel(void)

{
  return;
}

