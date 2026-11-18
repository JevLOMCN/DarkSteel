// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e119480

UClass * __cdecl UOptimusDeprecatedExecutionDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeprecatedExecutionDataInterface",
               &Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeprecatedExecutionDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDeprecatedExecutionDataInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton;
}

// UOptimusDeprecatedExecutionDataInterface @ 14e159d90

UOptimusDeprecatedExecutionDataInterface * __thiscall
UOptimusDeprecatedExecutionDataInterface::UOptimusDeprecatedExecutionDataInterface
          (UOptimusDeprecatedExecutionDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeprecatedExecutionDataInterface__6B_;
  return this;
}

// UOptimusDeprecatedExecutionDataInterface @ 14e159dc0

UOptimusDeprecatedExecutionDataInterface * __thiscall
UOptimusDeprecatedExecutionDataInterface::UOptimusDeprecatedExecutionDataInterface
          (UOptimusDeprecatedExecutionDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusDeprecatedExecutionDataInterface__6B_;
  return this;
}

// ~UOptimusDeprecatedExecutionDataInterface @ 14e162b20

void __thiscall
UOptimusDeprecatedExecutionDataInterface::~UOptimusDeprecatedExecutionDataInterface
          (UOptimusDeprecatedExecutionDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5bf0

UClass * __cdecl UOptimusDeprecatedExecutionDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusDeprecatedExecutionDataInterface",
               &Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton,
               StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusDeprecatedExecutionDataInterface>,
               InternalVTableHelperCtorCaller<UOptimusDeprecatedExecutionDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusDeprecatedExecutionDataInterface.InnerSingleton;
}

// StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface @ 14e2259b0

void __cdecl
UOptimusDeprecatedExecutionDataInterface::
StaticRegisterNativesUOptimusDeprecatedExecutionDataInterface(void)

{
  return;
}

