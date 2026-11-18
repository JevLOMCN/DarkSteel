// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149ee0540

UClass * __cdecl UPCGGraphExecutionSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphExecutionSource",
               &Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton,
               StaticRegisterNativesUPCGGraphExecutionSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraphExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGGraphExecutionSource>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton;
}

// UPCGGraphExecutionSource @ 149eeec60

UPCGGraphExecutionSource * __thiscall
UPCGGraphExecutionSource::UPCGGraphExecutionSource
          (UPCGGraphExecutionSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphExecutionSource__6B_;
  return this;
}

// UPCGGraphExecutionSource @ 149eeec90

UPCGGraphExecutionSource * __thiscall
UPCGGraphExecutionSource::UPCGGraphExecutionSource
          (UPCGGraphExecutionSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphExecutionSource__6B_;
  return this;
}

// ~UPCGGraphExecutionSource @ 149eefef0

void __thiscall UPCGGraphExecutionSource::~UPCGGraphExecutionSource(UPCGGraphExecutionSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 149f04550

UClass * __cdecl UPCGGraphExecutionSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphExecutionSource",
               &Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton,
               StaticRegisterNativesUPCGGraphExecutionSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGraphExecutionSource>,
               InternalVTableHelperCtorCaller<UPCGGraphExecutionSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphExecutionSource.InnerSingleton;
}

// StaticRegisterNativesUPCGGraphExecutionSource @ 149f14020

void __cdecl UPCGGraphExecutionSource::StaticRegisterNativesUPCGGraphExecutionSource(void)

{
  return;
}

