// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 6

// StaticClass @ 14a6b3e10

UClass * __cdecl UEnhancedInputSubsystemInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputSubsystemInterface",
               &Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton,
               StaticRegisterNativesUEnhancedInputSubsystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnhancedInputSubsystemInterface>,
               InternalVTableHelperCtorCaller<UEnhancedInputSubsystemInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton;
}

// UEnhancedInputSubsystemInterface @ 14a6cbab0

UEnhancedInputSubsystemInterface * __thiscall
UEnhancedInputSubsystemInterface::UEnhancedInputSubsystemInterface
          (UEnhancedInputSubsystemInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEnhancedInputSubsystemInterface__6B_;
  return this;
}

// UEnhancedInputSubsystemInterface @ 14a6cbae0

UEnhancedInputSubsystemInterface * __thiscall
UEnhancedInputSubsystemInterface::UEnhancedInputSubsystemInterface
          (UEnhancedInputSubsystemInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UEnhancedInputSubsystemInterface__6B_;
  return this;
}

// ~UEnhancedInputSubsystemInterface @ 14a6cf2c0

void __thiscall
UEnhancedInputSubsystemInterface::~UEnhancedInputSubsystemInterface
          (UEnhancedInputSubsystemInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e0ba0

UClass * __cdecl UEnhancedInputSubsystemInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputSubsystemInterface",
               &Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton,
               StaticRegisterNativesUEnhancedInputSubsystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnhancedInputSubsystemInterface>,
               InternalVTableHelperCtorCaller<UEnhancedInputSubsystemInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputSubsystemInterface.InnerSingleton;
}

// StaticRegisterNativesUEnhancedInputSubsystemInterface @ 14a6fb480

void __cdecl
UEnhancedInputSubsystemInterface::StaticRegisterNativesUEnhancedInputSubsystemInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1c;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

