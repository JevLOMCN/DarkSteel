// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e108e20

UClass * __cdecl UOptimusComputeKernelDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeKernelDataInterface",
               &Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusComputeKernelDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeKernelDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusComputeKernelDataInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton;
}

// UOptimusComputeKernelDataInterface @ 14e158950

UOptimusComputeKernelDataInterface * __thiscall
UOptimusComputeKernelDataInterface::UOptimusComputeKernelDataInterface
          (UOptimusComputeKernelDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeKernelDataInterface__6B_;
  return this;
}

// UOptimusComputeKernelDataInterface @ 14e158980

UOptimusComputeKernelDataInterface * __thiscall
UOptimusComputeKernelDataInterface::UOptimusComputeKernelDataInterface
          (UOptimusComputeKernelDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeKernelDataInterface__6B_;
  return this;
}

// ~UOptimusComputeKernelDataInterface @ 14e162430

void __thiscall
UOptimusComputeKernelDataInterface::~UOptimusComputeKernelDataInterface
          (UOptimusComputeKernelDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4e70

UClass * __cdecl UOptimusComputeKernelDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeKernelDataInterface",
               &Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusComputeKernelDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeKernelDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusComputeKernelDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeKernelDataInterface.InnerSingleton;
}

// StaticRegisterNativesUOptimusComputeKernelDataInterface @ 14e225830

void __cdecl
UOptimusComputeKernelDataInterface::StaticRegisterNativesUOptimusComputeKernelDataInterface(void)

{
  return;
}

