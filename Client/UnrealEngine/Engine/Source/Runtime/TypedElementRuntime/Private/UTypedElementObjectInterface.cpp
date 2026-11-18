// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// StaticClass @ 14453d090

UClass * __cdecl UTypedElementObjectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementObjectInterface",
               &Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementObjectInterface>,
               InternalVTableHelperCtorCaller<UTypedElementObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton;
}

// UTypedElementObjectInterface @ 14453ee40

UTypedElementObjectInterface * __thiscall
UTypedElementObjectInterface::UTypedElementObjectInterface
          (UTypedElementObjectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementObjectInterface__6B_;
  return this;
}

// UTypedElementObjectInterface @ 14453ee70

UTypedElementObjectInterface * __thiscall
UTypedElementObjectInterface::UTypedElementObjectInterface
          (UTypedElementObjectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementObjectInterface__6B_;
  return this;
}

// ~UTypedElementObjectInterface @ 14453f3e0

void __thiscall
UTypedElementObjectInterface::~UTypedElementObjectInterface(UTypedElementObjectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144545b90

UClass * __cdecl UTypedElementObjectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementObjectInterface",
               &Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementObjectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementObjectInterface>,
               InternalVTableHelperCtorCaller<UTypedElementObjectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementObjectInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementObjectInterface @ 14454a700

void __cdecl UTypedElementObjectInterface::StaticRegisterNativesUTypedElementObjectInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementObjectInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

