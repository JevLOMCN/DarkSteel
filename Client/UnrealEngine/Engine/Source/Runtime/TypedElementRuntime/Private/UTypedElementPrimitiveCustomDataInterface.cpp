// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 6

// StaticClass @ 14453c4b0

UClass * __cdecl UTypedElementPrimitiveCustomDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementPrimitiveCustomDataInterface",
               &Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementPrimitiveCustomDataInterface>,
               InternalVTableHelperCtorCaller<UTypedElementPrimitiveCustomDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton;
}

// UTypedElementPrimitiveCustomDataInterface @ 14453eea0

UTypedElementPrimitiveCustomDataInterface * __thiscall
UTypedElementPrimitiveCustomDataInterface::UTypedElementPrimitiveCustomDataInterface
          (UTypedElementPrimitiveCustomDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementPrimitiveCustomDataInterface__6B_;
  return this;
}

// UTypedElementPrimitiveCustomDataInterface @ 14453eed0

UTypedElementPrimitiveCustomDataInterface * __thiscall
UTypedElementPrimitiveCustomDataInterface::UTypedElementPrimitiveCustomDataInterface
          (UTypedElementPrimitiveCustomDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTypedElementPrimitiveCustomDataInterface__6B_;
  return this;
}

// ~UTypedElementPrimitiveCustomDataInterface @ 14453f3f0

void __thiscall
UTypedElementPrimitiveCustomDataInterface::~UTypedElementPrimitiveCustomDataInterface
          (UTypedElementPrimitiveCustomDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 144545c50

UClass * __cdecl UTypedElementPrimitiveCustomDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementRuntime",L"TypedElementPrimitiveCustomDataInterface",
               &Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton,
               StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementPrimitiveCustomDataInterface>,
               InternalVTableHelperCtorCaller<UTypedElementPrimitiveCustomDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementPrimitiveCustomDataInterface.InnerSingleton;
}

// StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface @ 14454a740

void __cdecl
UTypedElementPrimitiveCustomDataInterface::
StaticRegisterNativesUTypedElementPrimitiveCustomDataInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UTypedElementPrimitiveCustomDataInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

