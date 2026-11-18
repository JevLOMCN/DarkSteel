// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147b2c7f0

UClass * __cdecl UTypedElementWorldInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TypedElementWorldInterface",
               &Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementWorldInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementWorldInterface>,
               InternalVTableHelperCtorCaller<UTypedElementWorldInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton;
}

// UTypedElementWorldInterface @ 147b3bae0

UTypedElementWorldInterface * __thiscall
UTypedElementWorldInterface::UTypedElementWorldInterface
          (UTypedElementWorldInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementWorldInterface__6B_;
  return this;
}

// UTypedElementWorldInterface @ 147b3bb10

UTypedElementWorldInterface * __thiscall
UTypedElementWorldInterface::UTypedElementWorldInterface
          (UTypedElementWorldInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementWorldInterface__6B_;
  return this;
}

// ~UTypedElementWorldInterface @ 147b3db10

void __thiscall
UTypedElementWorldInterface::~UTypedElementWorldInterface(UTypedElementWorldInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147b6cad0

UClass * __cdecl UTypedElementWorldInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TypedElementWorldInterface",
               &Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementWorldInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementWorldInterface>,
               InternalVTableHelperCtorCaller<UTypedElementWorldInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementWorldInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementWorldInterface @ 147b8ed80

void __cdecl UTypedElementWorldInterface::StaticRegisterNativesUTypedElementWorldInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x16;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementWorldInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

